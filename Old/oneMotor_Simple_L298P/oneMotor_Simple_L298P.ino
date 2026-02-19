//******************************************************
// ROBOT SERIES
// Simple Motor Control - L298P Motor Drive Shield
// Vasu Udompetaikul   Dept. of Agri Engineering, KMITL
//******************************************************
#define M1_pwm  10  // Pin 10 for M1 PWM Control
#define M1_dir  12  // Pin 10 for M1 Direction Control

void setup() {
  pinMode(M1_pwm, OUTPUT);
  pinMode(M1_dir, OUTPUT);
}

void loop() {
  digitalWrite(M1_pwm, HIGH);
  digitalWrite(M1_dir, HIGH);
  delay(3000);
  digitalWrite(M1_pwm, HIGH);
  digitalWrite(M1_dir, LOW);
  delay(3000);
}