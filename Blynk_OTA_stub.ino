#include <ArduinoOTA.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "xxxxxxxxxxxxxxxxxxxxxxxxxxx";
char ssid[] = "xxxxxxxx";
char pass[] = "xxxxxxxx";
void setup() {
  WiFi.mode(WIFI_STA);
  Blynk.begin(auth, ssid, pass);
  while (Blynk.connect() == false) {}
  //ArduinoOTA.setHostname("xxxxxxx"); // OPTIONAL
  ArduinoOTA.begin();
}
void loop() {
  Blynk.run();
  ArduinoOTA.handle();
}
