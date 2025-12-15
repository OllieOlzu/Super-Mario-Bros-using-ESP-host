#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <LittleFS.h>

ESP8266WebServer server(80);

#define LED_PIN LED_BUILTIN

void setup() {
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH); // LED off

  // Open Wi-Fi network
  WiFi.softAP("ESP Mario!");

  if (!LittleFS.begin()) {
    Serial.println("LittleFS mount failed");
    return;
  }

server.serveStatic("/", LittleFS, "/"); // serves CSS/JS/images automatically

server.on("/", []() { // handle root request
    File f = LittleFS.open("/index.html", "r");
    if (f) {
        server.streamFile(f, "text/html");
        f.close();
    } else {
        server.send(404, "text/plain", "File not found");
    }
});

  server.begin();
}

void loop() {
  server.handleClient();
}
