//********************************************************
// ROBOT SERIES: Simple Motor Control
// : Vasu Udompetaikul   
// : Dept. of Agricultural Engineering, KMITL
//--------------------------------------------------------
// L298N Motor Drive - Basic single motor control using PWM
//********************************************************

int pin_A1   = 8;
int pin_A2   = 9;
int pin_pwmA = 5;

void setup() {
  pinMode(pin_A1,   OUTPUT);
  pinMode(pin_A2,   OUTPUT);
  pinMode(pin_pwmA, OUTPUT);
}

void loop() {
  digitalWrite(pin_A1, HIGH);
  digitalWrite(pin_A2, LOW);
  analogWrite(pin_pwm_A,255);
  delay(1000);
  digitalWrite(pin_A1, LOW);
  digitalWrite(pin_A2, HIGH);
  analogWrite(pin_pwm_A,128);
  delay(1000);
}
