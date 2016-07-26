/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package java_jetty_monitor_visualization;

import demomonitor.*;

import org.apache.thrift.TException;
import org.apache.thrift.transport.TSSLTransportFactory;
import org.apache.thrift.transport.TTransport;
import org.apache.thrift.transport.TSocket;
import org.apache.thrift.transport.TSSLTransportFactory.TSSLTransportParameters;
import org.apache.thrift.protocol.TBinaryProtocol;
import org.apache.thrift.protocol.TProtocol;

public class Java_jetty_monitor_visualization {

    public static void main(String[] args) {
        System.err.println("java client is running..");
        try {
            TTransport transport;

            transport = new TSocket("localhost", 9090);
            transport.open();

            TProtocol protocol = new TBinaryProtocol(transport);
//      Calculator.Client client = new Calculator.Client(protocol);
            databaseCenter.Client client = new databaseCenter.Client(protocol);
            client.debug();
            transport.close();
        } catch (TException x) {
            x.printStackTrace();
        }
    }
}
