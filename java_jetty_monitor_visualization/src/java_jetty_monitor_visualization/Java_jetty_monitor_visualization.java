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

import org.eclipse.jetty.server.Handler;
import org.eclipse.jetty.server.Server;
import org.eclipse.jetty.server.handler.DefaultHandler;
import org.eclipse.jetty.server.handler.HandlerList;
import org.eclipse.jetty.server.handler.ResourceHandler;
import org.eclipse.jetty.server.handler.gzip.GzipHandler;



public class Java_jetty_monitor_visualization {

    public static void main(String[] args) {
                Server server = new Server(8080);

        // Create the ResourceHandler. It is the object that will actually handle the request for a given file. It is
        // a Jetty Handler object so it is suitable for chaining with other handlers as you will see in other examples.
        ResourceHandler resource_handler = new ResourceHandler();
        // Configure the ResourceHandler. Setting the resource base indicates where the files should be served out of.
        // In this example it is the current directory but it can be configured to anything that the jvm has access to.
        resource_handler.setDirectoriesListed(true);
        resource_handler.setWelcomeFiles(new String[]{ "index.html" });
        resource_handler.setResourceBase(".");

        // Add the ResourceHandler to the server.
        GzipHandler gzip = new GzipHandler();
        server.setHandler(gzip);
        HandlerList handlers = new HandlerList();
        handlers.setHandlers(new Handler[] { resource_handler, new DefaultHandler() });
        gzip.setHandler(handlers);

        // Start things up! By using the server.join() the server thread will join with the current thread.
        // See "http://docs.oracle.com/javase/1.5.0/docs/api/java/lang/Thread.html#join()" for more details.
        server.start();
        server.join();

//        try {
//            TTransport transport;
//
//            transport = new TSocket("localhost", 9090);
//            transport.open();
//
//            TProtocol protocol = new TBinaryProtocol(transport);
//            databaseCenter.Client client = new databaseCenter.Client(protocol);
//            System.out.println("java client is running..");
//            String temp = demo_monitorConstants.METRIC_STR.get(METRIC.CPU_USR) + "_" + Integer.toString(0);
//            DataCollector dat = new DataCollector(METRIC.CPU_USR, TAG.CPU, temp, 0);
//            int dummy = 3;
//            TimeLapseData _tdata = client.recieve_data_from_server(dat, 1469577600, 1469577600 + 86400);
////            client.debug();
//            transport.close();
//        } catch (TException x) {
//            x.printStackTrace();
//        }
    }
}
