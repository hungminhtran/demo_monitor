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
using namespace std;
using namespace kyotocabinet;

DatabaseTimelapseWrapper::DatabaseTimelapseWrapper() {
    this->databaseName = "demomonitorTimelapseDb";
    bool status = this->myDb.open(this->databaseName, HashDB::OWRITER | HashDB::OCREATE);
    if (!status) {
        cerr<<"open database error"<<endl;
    }
    return;
}
std::string DatabaseTimelapseWrapper::getDatabaseName() {
    return this->databaseName;
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
        cerr<<"close database error"<<endl;
    }
    return;
}

