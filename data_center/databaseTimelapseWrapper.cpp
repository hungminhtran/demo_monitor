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


using namespace kyotocabinet;
using namespace ::demomonitor;

using namespace boost;
using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;

DatabaseTimelapseWrapper::DatabaseTimelapseWrapper() {
    this->databaseName = "demomonitorTimelapseDb";
    bool status = this->myDb.open(this->databaseName, HashDB::OWRITER | HashDB::OCREATE);
    if (!status) {
        std::cerr << "open database error" << std::endl;
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

bool DatabaseTimelapseWrapper::isValueAvailable(std::string key) {
    std::string temp;
    bool result = this->myDb.get(key, &temp);
    return result;
}

TimeLapseData DatabaseTimelapseWrapper::getValues(std::string key) {
    std::string temp = "";
    bool isSucess = this->myDb.get(key, &temp);
    TimeLapseData result = DatabaseTimelapseWrapper::dataDeserialization(temp);
    return result;
}

bool DatabaseTimelapseWrapper::appendValue(std::string key, float value, std::string beginTime) {
    TimeLapseData temp;
    std::string serialized;
    if (this->myDb.get(key, &serialized)) {
        TimeLapseData temp = DatabaseTimelapseWrapper::dataDeserialization(serialized);
        temp.values.push_back(value);
        temp.totalElements++;
    }
    else {
        temp.beginTime = beginTime;
        temp.totalElements = 1;
        temp.values.push_back(value);
    }
    serialized = DatabaseTimelapseWrapper::dataSerialization(temp);
    return this->myDb.set(key, serialized);
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

