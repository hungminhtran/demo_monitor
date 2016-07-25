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
using namespace std;
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
        cerr << "open database error" << endl;
    }
    return;
}

std::string DatabaseTimelapseWrapper::getDatabaseName() {
    return this->databaseName;
}

std::string DatabaseTimelapseWrapper::dataSerialization(dataCollector temp) {
    shared_ptr<TMemoryBuffer> strBuffer(new TMemoryBuffer());
    shared_ptr<TBinaryProtocol> binaryProtcol(new TBinaryProtocol(strBuffer));
    temp.write(binaryProtcol.get());
    return strBuffer->getBufferAsString();
}

dataCollector DatabaseTimelapseWrapper::dataDeserialization(std::string serialized) {
    shared_ptr<TMemoryBuffer> strBuffer2(new TMemoryBuffer());
    shared_ptr<TBinaryProtocol> binaryProtcol2(new TBinaryProtocol(strBuffer2));
    strBuffer2->resetBuffer((uint8_t*) serialized.data(), static_cast<uint32_t> (serialized.length()));
    dataCollector temp2;
    temp2.read(binaryProtcol2.get());  
    return temp2;
}

vector<float> DatabaseTimelapseWrapper::getValue(string key) {
    vector<float> result;
    return result;
}

bool DatabaseTimelapseWrapper::isValueAvailable(std::string key) {
    return false;
}

void DatabaseTimelapseWrapper::appendValue(string key) {
    return;
}

void DatabaseTimelapseWrapper::deleteElement(string key) {
    return;
}

DatabaseTimelapseWrapper::~DatabaseTimelapseWrapper() {
    if (!this->myDb.close()) {
        cerr << "close database error" << endl;
    }
    return;
}

