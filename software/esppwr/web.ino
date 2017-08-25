

void header () // Заголовок страницы
{
  server.println("HTTP/1.1 200 OK");
  server.println("Content-type:text/html");
  server.println();
  server.println(" ");
}

void footer () // Окончание страницы
{
  server.print("</body>");
  server.print("</html>");
  server.println();
}

void tabletr (String stolb1, String stolb2)
{
  server.print("<tr><td>");
  server.print(stolb1);
  server.print("</td>");
  server.print("<td>");
  server.print(stolb2);
  server.println("</td></tr>");
}

void tablehref (String href)
{
  server.print("<tr><td>");
  server.print("<a href=\"");
  server.print(href);
  server.print("\">config</a>");
  server.println("</td></tr>");
}

void button ()
{
  
}

void button_on_off ()
{
  
}

void textbox (String s)
{
  server.print("<label for=\"");
  server.print(s);
  server.print("\">");
  server.print(s);
  server.print(":</label>");
  server.print("<input type=\"text\" name=\"");
  server.print(s);
  server.print("\" id=\"");
  server.print(s);
  server.print("\">");
}

void passbox (String s)
{
  server.print("<label for=\"");
  server.print(s);
  server.print("\">");
  server.print(s);
  server.print(":</label>");
  server.print("<input type=\"password\" name=\"");
  server.print(s);
  server.print("\" id=\"");
  server.print(s);
  server.print("\">");
}



void rootpage ()
{
   header ();
  server.println("<table align=\"center\" border=\"1\"><caption>ESP32 WEB SERVER</caption><tbody>");
  tablehref ("/info");
  tablehref ("/config");
  server.println("</table>");
  footer ();

}

void infopage ()
{
  header ();
  server.println("<table align=\"center\" border=\"1\"><caption>INFO</caption><tbody>");
  tabletr ("SSID", SecuritySettings.WifiSSID);
  tabletr ("IP", (String)(ip));
  tabletr ("Hostname", "");
  tabletr ("Free memory:", "");
  tabletr ("Uptime:", "");
  tabletr ("Localtime:", "");
  tabletr ("VDD=", "");
  tablehref ("/config");
  server.println("</table>");
  footer ();
}

void configpage ()
{
  header ();
  server.println("<table align=\"center\" border=\"1\"><caption>CONFIG</caption><tbody>");
  tablehref ("/wificonfig");
  tablehref ("/gpio");
  server.println("</table>");
  footer ();
}

void switchpage (String page)
{
  if (page = "GET  ")  rootpage();
  else if (page = "GET  /config")  configpage ();
  else if (page = "GET  /info")  infopage ();
  
 
}

void getpage ()
{
  WiFiClient client = server.available();   // listen for incoming clients
 String page;
  if (client) {                             // if you get a client,
    Serial.println("new client");           // print a message out the serial port
    //String currentLine = "";                // make a String to hold incoming data from the client
    while (client.connected()) {            // loop while the client's connected
      
      if (client.available()) {             // if there's bytes to read from the client,
       // char s = client.read();             // read a byte, then
      //  Serial.write(s);                    // print it out the serial monitor
        page = client.read();
        
    //    strcat(page, "123");
      }
//      int dlina=strlen(page); // 
//      memmove (page, page+4, dlina-4); // Хотел убрать запрос GET и чего-то не пошло
      Serial.println(page); // выводим передаваемую страницу в SERIAL
      switchpage(page); // передаем аргументом страницу запрошенную пользователем
    }
    // close the connection:
    client.stop();
    Serial.println("client disonnected");
  }
}
