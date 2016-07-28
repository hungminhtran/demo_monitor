/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package java_jetty_monitor_visualization;

import handlers.indexhandler;

import org.eclipse.jetty.server.Server;

public class Java_jetty_monitor_visualization {

    public static void main(String[] args) throws Exception {
        Server server = new Server(8080);
        server.setHandler(new indexhandler());

        server.start();
        server.join();

    }
}
