/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package handlers;

import demomonitor.DataCollector;
import demomonitor.METRIC;
import demomonitor.TAG;
import demomonitor.TimeLapseData;
import demomonitor.databaseCenter;
import demomonitor.demo_monitorConstants;
import hapax.Template;
import hapax.TemplateCache;
import hapax.TemplateDictionary;
import hapax.TemplateException;
import hapax.parser.CTemplateParser;
import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import org.apache.thrift.TException;
import org.apache.thrift.protocol.TBinaryProtocol;
import org.apache.thrift.protocol.TProtocol;
import org.apache.thrift.transport.TSocket;
import org.apache.thrift.transport.TTransport;
import org.eclipse.jetty.server.Request;
import org.eclipse.jetty.server.handler.AbstractHandler;

/**
 *
 * @author hungminhtran
 */
public class indexhandler extends AbstractHandler {

    @Override
    public void handle(String target, Request baseRequest, HttpServletRequest request, HttpServletResponse response)
            throws IOException, ServletException {
        try {
            TTransport transport;

            transport = new TSocket("localhost", 9090);
            transport.open();

            TProtocol protocol = new TBinaryProtocol(transport);
            databaseCenter.Client client = new databaseCenter.Client(protocol);
            System.out.println("java client is running..");
            String temp = demo_monitorConstants.METRIC_STR.get(METRIC.CPU_USR) + "_" + Integer.toString(0);
            DataCollector dat = new DataCollector(METRIC.CPU_USR, TAG.CPU, temp, 0);
            int dummy = 3;
            TimeLapseData _tdata = client.recieve_data_from_server(dat, 1469577600, 1469577600 + 86400);
//            client.debug();
            transport.close();
        } catch (TException x) {
            x.printStackTrace();
        }
        response.setContentType("text/html;charset=utf-8");
        response.setStatus(HttpServletResponse.SC_OK);
        baseRequest.setHandled(true);
        CTemplateParser parser = new CTemplateParser();
        TemplateCache tcached = new TemplateCache("view/", parser);
        Template tmpl;
        try {
            tmpl = tcached.getTemplate(tcached, "template1.xtm");
            TemplateDictionary dict = TemplateDictionary.create();
            dict.addSection("WORLD", "wtf");
            response.getWriter().println(tmpl.renderToString(dict));
        } catch (TemplateException ex) {
            Logger.getLogger(indexhandler.class.getName()).log(Level.SEVERE, null, ex);
            response.getWriter().println("ERROR");
        }

    }
}
