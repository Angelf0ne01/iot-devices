#include "sendhtml.h"

SendHtml::SendHtml()
{
    client.println("HTTP/1.1 200 OK");
    client.println("Content-type:text/html");
    client.println("Connection: close");
    client.println();
    
    client.println("<!DOCTYPE html>");
    client.println("<html lang=\"en\">");
    client.println("<head>");
    client.println("<meta charset=\"UTF-8\">");
    client.println("<meta name=\"viewport\" content=\"width=device-width,initial-scale=1.0\">");
    client.println("<link rel=\"stylesheet\" href=\"styles.css\">");
    client.println("<link rel=\"preconnect\" href=\"https://fonts.googleapis.com\">");
    client.println("<link rel=\"preconnect\" href=\"https://fonts.gstatic.com\" crossorigin>");
    client.println("<link href=\"https://fonts.googleapis.com/css2?family=Exo+2:ital,wght@1,400&family=Nunito:wght@600&display=swap\" rel=\"stylesheet\">");
    client.println("<title>Dispositivos</title>");
    client.println("</head>");
    client.println("<body>");
    client.println("<style>");
    client.println("*{");
    client.println("background-color: crimson;");
    client.println("font-family: 'Exo 2', sans-serif;");
    client.println("text-align: center;");
    client.println("margin-top: 90px;}");
    client.println(".texto{");
    client.println("background-color: white;");
    client.println("text-align: left;");
    client.println("border: 3px solid black;");
    client.println("padding: 10px;");
    client.println("margin: 0px 550px 0px 550px;");
    client.println("width: 280px; ");
    client.println("}");
    client.println("</style>");
    client.println("<div>");
    client.println("<H2>ID-DISPOSITIVOS</H2>");
    client.println("<br>");
    client.println("<h3 class=\"texto\">  #ID: ");
    
    client.println(esp32id);
    
    client.println("</h3>");
    client.println("</div>");
    client.println("</body>");
    client.println("</html>");
    
    client.println();
}
