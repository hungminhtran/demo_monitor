#include <iostream>
#include <string>

#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/transport/TSocket.h>
#include <thrift/transport/TTransportUtils.h>
#include <boost/lexical_cast.hpp>

#include "thrift_gen_code/databaseCenter.h"
#include "thrift_gen_code/demo_monitor_constants.h"
#include "get_computer_info.h"

using namespace std;
using namespace apache::thrift;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;
using namespace ::demomonitor;

int main() {
    cout << "running.." << endl;
    boost::shared_ptr<TTransport> socket(new TSocket("localhost", 9090));
    boost::shared_ptr<TTransport> transport(new TBufferedTransport(socket));
    boost::shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));
    boost::shared_ptr<databaseCenterClient> client(new databaseCenterClient(protocol));
    get_computer_info getComputerInfo;
    boost::ptr_vector<float> cpu_us, cpu_sy;
    try {
        transport->open();
        while (1) {
            sleep(1);
            cpu_us = getComputerInfo.get_current_cpu_usage(METRIC::CPU_USR);
            cpu_sy = getComputerInfo.get_current_cpu_usage(METRIC::CPU_SYS);
            for (int i = 0; i < cpu_us.size(); i++) {
                DataCollector temp;
                temp.__set_tag(TAG::CPU);
                temp.__set_metric(METRIC::CPU_SYS);
                temp.__set_object(g_demo_monitor_constants.METRIC_STR.at(METRIC::CPU_SYS) + "_" + boost::lexical_cast<string>(i));
                temp.__set_value(float(cpu_sy[i]));
                client->send_data_to_server(temp, "");
                temp.__set_metric(METRIC::CPU_USR);
                temp.__set_object(g_demo_monitor_constants.METRIC_STR.at(METRIC::CPU_USR) + "_" + boost::lexical_cast<string>(i));
                temp.__set_value(float(cpu_us[i]));
                client->send_data_to_server(temp, "");
            }
        }
        transport->close();
    } catch (TException x) {
        cout << "error: " << x.what();
    }
    return 0;
}