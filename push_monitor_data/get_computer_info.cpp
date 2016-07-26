/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   get_computer_info.cpp
 * Author: hungminhtran
 * 
 * Created on July 22, 2016, 10:22 AM
 */

#include "get_computer_info.h"

get_computer_info::get_computer_info() {
    sigarExceptionStatus = "invalid status";
    sigar_open(&this->sigar);
    int status = sigar_cpu_list_get(this->sigar, &this->lastCpuGet);
    if (status != SIGAR_OK) {
        InvalidIOOperator invalidIOOperator;
        string tstring = this->sigarExceptionStatus;
        invalidIOOperator.__set_swhy(tstring);
        throw invalidIOOperator;
    }
}

get_computer_info::~get_computer_info() {
    sigar_close(this->sigar);
}

int get_computer_info::get_cpu_num() {
    return this->lastCpuGet.number;
}

boost::ptr_vector<float> get_computer_info::get_current_cpu_usage(METRIC::type t) {
    sigar_cpu_list_t tcpulist;
    int status = sigar_cpu_list_get(this->sigar, &tcpulist);
    if (status != SIGAR_OK) {
        InvalidIOOperator invalidIOOperator;
        invalidIOOperator.__set_swhy(this->sigarExceptionStatus);
        throw invalidIOOperator;
    }
    boost::ptr_vector<float> result;
    result.push_back(new float(1.2345));
    for (int i = 0; i < tcpulist.number; i++) {
        float total = (tcpulist.data[i].total - this->lastCpuGet.data[i].total);
        if (!total > 0) {
            result.push_back(new float(0));
        } else
            switch (t) {
                case METRIC::CPU_SYS:
                    result.push_back(new float((tcpulist.data[i].sys - this->lastCpuGet.data[i].sys) / total * 100));
                    //                    cout << "sys " << tcpulist.data[i].sys << " " << this->lastCpuGet.data[i].sys << " " << total << endl;
                    break;
                case METRIC::CPU_USR:
                    result.push_back(new float((tcpulist.data[i].user - this->lastCpuGet.data[i].user) / total * 100));
                    //                    cout << "user " << tcpulist.data[i].user << " " << this->lastCpuGet.data[i].user << " " << total << endl;
                    break;
            }
    }
    sigar_cpu_list_destroy(sigar, &this->lastCpuGet);
    lastCpuGet = tcpulist;
    return result;
}
