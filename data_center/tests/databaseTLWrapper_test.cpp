/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   databaseTLWrapper_test.cpp
 * Author: hungminhtran
 *
 * Created on July 26, 2016, 4:25 PM
 */

#include <stdlib.h>
#include <iostream>
#include "../databaseTimelapseWrapper.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/transport/TBufferTransports.h>
#include "../../thrift_gen_code/demo_monitor_constants.h"

#include <ctime>
#include <sstream>

using namespace kyotocabinet;
using namespace ::demomonitor;

using namespace boost;
using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;

/*
 * Simple C++ Test Suite
 */

void testDatabaseTimelapseWrapper() {
    DatabaseTimelapseWrapper databaseTimelapseWrapper;
    if (databaseTimelapseWrapper.getDatabaseName() == "") {
        std::cout << "%TEST_FAILED% time=0 testname=testDatabaseTimelapseWrapper (databaseTLWrapper_test) message = can get name" << std::endl;
    }
}

void testGetDatabaseName() {
    DatabaseTimelapseWrapper databaseTimelapseWrapper;
    std::string result = databaseTimelapseWrapper.getDatabaseName();
    if (result != "xxx___demomonitorTimelapseDb") {
        std::cout << "%TEST_FAILED% time=0 testname=testGetDatabaseName (databaseTLWrapper_test) message=error message sample" << std::endl;
    }
}

void testDataSerialization() {
    ::demomonitor::TimeLapseData temp, temp2;
    temp.beginDateTime = "asdf";
    temp.values.push_back(1);
    temp.values.push_back(2);
    temp.values.push_back(3);
    std::string result = DatabaseTimelapseWrapper::dataSerialization(temp);
    temp2 = DatabaseTimelapseWrapper::dataDeserialization(result);
    if (temp2 != temp) {
        std::cout << "%TEST_FAILED% time=0 testname=testDataSerialization (databaseTLWrapper_test) message=error message sample" << std::endl;
    }
}

void testDataDeserialization() {
    ::demomonitor::TimeLapseData temp, temp2;
    temp.beginDateTime = "asdf";
    temp.values.push_back(1);
    temp.values.push_back(2);
    temp.values.push_back(3);
    std::string result = DatabaseTimelapseWrapper::dataSerialization(temp);
    temp2 = DatabaseTimelapseWrapper::dataDeserialization(result);
    if (temp2 != temp) {
        std::cout << "%TEST_FAILED% time=0 testname=testDataSerialization (databaseTLWrapper_test) message=error message sample" << std::endl;
    }
}

void testGet_current_datetime() {
    std::string result = DatabaseTimelapseWrapper::get_current_datetime();
    std::cout << "current datetime: " << result << std::endl;
    if (false /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testGet_current_datetime (databaseTLWrapper_test) message=error message sample" << std::endl;
    }
}

void testParse_date() {
    std::string temp = DatabaseTimelapseWrapper::get_current_datetime();
    std::string result = DatabaseTimelapseWrapper::parse_date(temp);
    std::cout << "current datetime: " << temp << " parse date: " << result << std::endl;
    if (false /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testParse_date (databaseTLWrapper_test) message=error message sample" << std::endl;
    }
}

void testGetKeyFromData() {
    ::demomonitor::DataCollector dat;
    dat.tag = TAG::CPU;
    dat.metric = METRIC::CPU_SYS;
    dat.object = "what a object!";
    std::string datetime = DatabaseTimelapseWrapper::get_current_datetime();
    std::string result = DatabaseTimelapseWrapper::getKeyFromData(dat, datetime);
    std::cout << " key gen from " << dat << " with datetime " << datetime << " is " << result << std::endl;
    if (false /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testGetKeyFromData (databaseTLWrapper_test) message=error message sample" << std::endl;
    }
}

void testIsValueAvailable() {
    std::string key = "what the fuck";
    DatabaseTimelapseWrapper databaseTimelapseWrapper;
    databaseTimelapseWrapper.clearDB();
    bool result = databaseTimelapseWrapper.isValueAvailable(key);
    if (!result /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testIsValueAvailable (databaseTLWrapper_test) message=error message sample" << std::endl;
    }
    result = databaseTimelapseWrapper.appendValue(key, 1.234, "begin time");
    result = databaseTimelapseWrapper.isValueAvailable(key);
    if (!result/*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testIsValueAvailable (databaseTLWrapper_test) message=error message sample" << std::endl;
    }
}

void testGetValues() {
    std::string key = "what the fuck";
    DatabaseTimelapseWrapper databaseTimelapseWrapper;
    databaseTimelapseWrapper.clearDB();
    databaseTimelapseWrapper.appendValue(key, 1.234, "begin time");
    ::demomonitor::TimeLapseData result = databaseTimelapseWrapper.getValues(key);
    if ((result.values[0] - 1.234) > 1e-4) {
        std::cout << "%TEST_FAILED% time=0 testname=testGetValues (databaseTLWrapper_test) message=error message sample" << std::endl;
    }

}

void testAppendValue() {
    std::string key = "what the fuck";
    DatabaseTimelapseWrapper databaseTimelapseWrapper;
    databaseTimelapseWrapper.clearDB();
    bool result = databaseTimelapseWrapper.appendValue(key, 1.234, "begin time");
    if (!result /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testAppendValue (databaseTLWrapper_test) message=error message sample" << std::endl;
    }
}

void testDeleteElement() {

    if (false /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testDeleteElement (databaseTLWrapper_test) message=error message sample" << std::endl;
    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% databaseTLWrapper_test" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testDatabaseTimelapseWrapper (databaseTLWrapper_test)" << std::endl;
    testDatabaseTimelapseWrapper();
    std::cout << "%TEST_FINISHED% time=0 testDatabaseTimelapseWrapper (databaseTLWrapper_test)" << std::endl;

    std::cout << "%TEST_STARTED% testGetDatabaseName (databaseTLWrapper_test)" << std::endl;
    testGetDatabaseName();
    std::cout << "%TEST_FINISHED% time=0 testGetDatabaseName (databaseTLWrapper_test)" << std::endl;

    std::cout << "%TEST_STARTED% testDataSerialization (databaseTLWrapper_test)" << std::endl;
    testDataSerialization();
    std::cout << "%TEST_FINISHED% time=0 testDataSerialization (databaseTLWrapper_test)" << std::endl;

    std::cout << "%TEST_STARTED% testDataDeserialization (databaseTLWrapper_test)" << std::endl;
    testDataDeserialization();
    std::cout << "%TEST_FINISHED% time=0 testDataDeserialization (databaseTLWrapper_test)" << std::endl;

    std::cout << "%TEST_STARTED% testGet_current_datetime (databaseTLWrapper_test)" << std::endl;
    testGet_current_datetime();
    std::cout << "%TEST_FINISHED% time=0 testGet_current_datetime (databaseTLWrapper_test)" << std::endl;

    std::cout << "%TEST_STARTED% testParse_date (databaseTLWrapper_test)" << std::endl;
    testParse_date();
    std::cout << "%TEST_FINISHED% time=0 testParse_date (databaseTLWrapper_test)" << std::endl;

    std::cout << "%TEST_STARTED% testGetKeyFromData (databaseTLWrapper_test)" << std::endl;
    testGetKeyFromData();
    std::cout << "%TEST_FINISHED% time=0 testGetKeyFromData (databaseTLWrapper_test)" << std::endl;

    std::cout << "%TEST_STARTED% testIsValueAvailable (databaseTLWrapper_test)" << std::endl;
    testIsValueAvailable();
    std::cout << "%TEST_FINISHED% time=0 testIsValueAvailable (databaseTLWrapper_test)" << std::endl;

    std::cout << "%TEST_STARTED% testGetValues (databaseTLWrapper_test)" << std::endl;
    testGetValues();
    std::cout << "%TEST_FINISHED% time=0 testGetValues (databaseTLWrapper_test)" << std::endl;

    std::cout << "%TEST_STARTED% testAppendValue (databaseTLWrapper_test)" << std::endl;
    testAppendValue();
    std::cout << "%TEST_FINISHED% time=0 testAppendValue (databaseTLWrapper_test)" << std::endl;

    std::cout << "%TEST_STARTED% testDeleteElement (databaseTLWrapper_test)" << std::endl;
    testDeleteElement();
    std::cout << "%TEST_FINISHED% time=0 testDeleteElement (databaseTLWrapper_test)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

