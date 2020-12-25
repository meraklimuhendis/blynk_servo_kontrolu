#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#include <Servo.h>
Servo servo;

char auth[] = "";
char ssid[] = "";
char pass[] = "";


void setup() {
  Blynk.begin(auth, ssid, pass);
  servo.attach(4);
  // Servo Nodemcu üzerinde D2 pinine bağlanacaktır.
}

void loop() {
  Blynk.run();
}


BLYNK_WRITE(V0) {
  servo.write(param.asInt()); // 0-179
}
