/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   databaseTimelapseWrapper.h
 * Author: hungminhtran
 *
 * Created on July 25, 2016, 3:15 PM
 */

#ifndef DATABASETIMELAPSEWRAPPER_H
#define DATABASETIMELAPSEWRAPPER_H

#include <kchashdb.h>
#include <string>
#include <vector>
#include "thrift_gen_code/demo_monitor_types.h"

class DatabaseTimelapseWrapper {
private:
    std::string databaseName;
    kyotocabinet::HashDB myDb;
public:
    static std::string dataSerialization(::demomonitor::TimeLapseData temp);
    static ::demomonitor::TimeLapseData dataDeserialization(std::string temp);
    DatabaseTimelapseWrapper();
    std::string getDatabaseName();
    bool isValueAvailable(std::string key);
    ::demomonitor::TimeLapseData getValues(std::string key);
    bool appendValue(std::string key, float value, std::string beginTime);
    bool deleteElement(std::string key);
    ~DatabaseTimelapseWrapper();
};


#endif /* DATABASETIMELAPSEWRAPPER_H */

