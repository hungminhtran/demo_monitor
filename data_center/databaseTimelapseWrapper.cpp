/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   databaseTimelapseWrapper.cpp
 * Author: hungminhtran
 * 
 * Created on July 25, 2016, 3:15 PM
 */

#include "databaseTimelapseWrapper.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/transport/TBufferTransports.h>
#include "../thrift_gen_code/demo_monitor_constants.h"

#include <ctime>
#include <sstream>

using namespace kyotocabinet;
using namespace ::demomonitor;

using namespace boost;
using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;

DatabaseTimelapseWrapper::DatabaseTimelapseWrapper() {
    this->databaseName = DB_NAME;
    bool status = this->myDb.open(this->databaseName, HashDB::OWRITER | HashDB::OCREATE);
    if (!status) {
        std::cerr << "open database " << DB_NAME << " error " << std::endl;
    }
    return;
}

std::string DatabaseTimelapseWrapper::getDatabaseName() {
    return this->databaseName;
}

std::string DatabaseTimelapseWrapper::dataSerialization(TimeLapseData temp) {
    shared_ptr<TMemoryBuffer> strBuffer(new TMemoryBuffer());
    shared_ptr<TBinaryProtocol> binaryProtcol(new TBinaryProtocol(strBuffer));
    temp.write(binaryProtcol.get());
    return strBuffer->getBufferAsString();
}

TimeLapseData DatabaseTimelapseWrapper::dataDeserialization(std::string serialized) {
    shared_ptr<TMemoryBuffer> strBuffer2(new TMemoryBuffer());
    shared_ptr<TBinaryProtocol> binaryProtcol2(new TBinaryProtocol(strBuffer2));
    strBuffer2->resetBuffer((uint8_t*) serialized.data(), static_cast<uint32_t> (serialized.length()));
    TimeLapseData temp2;
    temp2.read(binaryProtcol2.get());
    return temp2;
}

long DatabaseTimelapseWrapper::get_current_datetime() {
    time_t _time = time(NULL);
    return (long)_time;
}

std::string DatabaseTimelapseWrapper::parse_date(long totalSeconds) {
    std::ostringstream out;
    out << totalSeconds - totalSeconds % 86400;
    return out.str();
}

std::string DatabaseTimelapseWrapper::getKeyFromData(::demomonitor::DataCollector dat, long totalSeconds) {
    std::ostringstream out;
    std::string _tstring = ::demomonitor::g_demo_monitor_constants.TAG_STR.at(dat.tag);
    out << _tstring << "_" << dat.object << DatabaseTimelapseWrapper::parse_date(totalSeconds);
    return out.str();
}

bool DatabaseTimelapseWrapper::isValueAvailable(std::string key) {
    bool result = this->myDb.check(key);
    return result;
}

TimeLapseData DatabaseTimelapseWrapper::getValues(std::string key) {
    std::string temp = "";
    if (this->myDb.get(key, &temp)) {
    TimeLapseData result = DatabaseTimelapseWrapper::dataDeserialization(temp);
    return result;
    }
    else {
        InvalidIOOperator e;
        e.iwhat = -1;
        e.swhy = "cannot get " + key + " from database";
        throw e;
    }
}

bool DatabaseTimelapseWrapper::appendValue(std::string key, float value, long beginDateTime) {
    TimeLapseData temp;
    std::string serialized;
    bool status = this->myDb.get(key, &serialized);
    if (status) {
        temp = DatabaseTimelapseWrapper::dataDeserialization(serialized);
        temp.values.push_back(value);
    } else {
        temp.beginDateTime = beginDateTime;
        temp.values.push_back(value);
    }
    serialized = DatabaseTimelapseWrapper::dataSerialization(temp);
    if (status) {
        return this->myDb.set(key, serialized);
    } else {
        return this->myDb.add(key, serialized);
    }
}

bool DatabaseTimelapseWrapper::deleteElement(std::string key) {
    return this->myDb.remove(key);
}

DatabaseTimelapseWrapper::~DatabaseTimelapseWrapper() {
    if (!this->myDb.close()) {
        std::cerr << "close database error" << std::endl;
    }
    return;
}

void DatabaseTimelapseWrapper::printAllElement() {

    DB::Cursor* cur = this->myDb.cursor();
    cur->jump();
    std::string ckey, cvalue;
    std::cout << "all database element" << std::endl;
    while (cur->get(&ckey, &cvalue, true)) {
        std::cout << ckey << ":" << DatabaseTimelapseWrapper::dataDeserialization(cvalue) << std::endl;
    }
    delete cur;

    return;
}

bool DatabaseTimelapseWrapper::clearDB() {
    this->myDb.clear();
}