#include <SoftwareSerial.h>
SoftwareSerial BTSerial(A0,A1); // RX/TX

void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);
}

void loop() {
  if (BTSerial.available()){
    char ctrl = BTSerial.read();
    Serial.println(ctrl);
  }
}
