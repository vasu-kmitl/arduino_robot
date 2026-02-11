//********************************************************
// ROBOT SERIES: Simple Motor Control
// : Vasu Udompetaikul   
// : Dept. of Agricultural Engineering, KMITL
//--------------------------------------------------------
// L298N Motor Drive - Basic single motor control
//********************************************************

int pin_A1 = 8;
int pin_A2 = 9;

void setup() {
  pinMode(pin_A1, OUTPUT);
  pinMode(pin_A2, OUTPUT);
}

void loop() {
  digitalWrite(pin_A1, HIGH);
  digitalWrite(pin_A2, LOW);
  delay(1000);
  digitalWrite(pin_A1, LOW);
  digitalWrite(pin_A2, HIGH);
  delay(1000);
}
