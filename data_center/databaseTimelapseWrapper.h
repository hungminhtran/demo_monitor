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
#include "../thrift_gen_code/demo_monitor_types.h"
const std::string DB_NAME = "/home/hungminhtran/xxx___demomonitorTimelapseDb";

class DatabaseTimelapseWrapper {
private:
    std::string databaseName;
    kyotocabinet::HashDB myDb;
public:
    static std::string dataSerialization(::demomonitor::TimeLapseData temp);
    static ::demomonitor::TimeLapseData dataDeserialization(std::string temp);
    static std::string get_current_datetime();
    static std::string parse_date(std::string datetime);
    static std::string getKeyFromData(::demomonitor::DataCollector dat, std::string datetime);
    DatabaseTimelapseWrapper();
    std::string getDatabaseName();
    bool isValueAvailable(std::string key);
    ::demomonitor::TimeLapseData getValues(std::string key);
    bool appendValue(std::string key, float value, std::string beginTime);
    bool deleteElement(std::string key);
    void printAllElement();
    bool clearDB();
    ~DatabaseTimelapseWrapper();
};


#endif /* DATABASETIMELAPSEWRAPPER_H */

