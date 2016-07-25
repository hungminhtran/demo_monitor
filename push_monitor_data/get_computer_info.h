/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   get_computer_info.h
 * Author: hungminhtran
 *
 * Created on July 22, 2016, 10:22 AM
 */

#ifndef GET_COMPUTER_INFO_H
#define GET_COMPUTER_INFO_H

#include <boost/shared_ptr.hpp>
#include <boost/ptr_container/ptr_vector.hpp>
#include <boost/chrono/chrono_io.hpp>

#include "sigar/sigar.h"

#include "thrift_gen_code/demo_monitor_types.h"

#include <string>

const int MAX_NUM_CPU = 256;
using namespace std;
using namespace demomonitor;

class get_computer_info {
public:
    get_computer_info();
    virtual ~get_computer_info();
    int get_cpu_num();
    boost::ptr_vector<float> get_current_cpu_usage(METRIC::type t);
private:
    sigar_t *sigar;
    string sigarExceptionStatus;
    sigar_cpu_list_t lastCpuGet;
};

#endif /* GET_COMPUTER_INFO_H */

