//******************************************************
// ROBOT SERIES
// HC-06 Bluetooth Module Reader
// Vasu Udompetaikul   Dept. of Agri Engineering, KMITL
//******************************************************
#include <SoftwareSerial.h>
SoftwareSerial BTSerial(A0,A1); // A0(Assigned Rx) <--> HC06-Tx / A1(Assigned Tx) <--> HC06-Rx

void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);
}

void loop() {
  if (BTSerial.available()){
    char c = BTSerial.read();
    Serial.write(c);
  }
}
