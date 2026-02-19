//******************************************************
// ROBOT SERIES
// Simple Motor Control - L298N Motor Drive Module
// Vasu Udompetaikul   Dept. of Agri Engineering, KMITL
//******************************************************
#define M1A  5  // Pin 5 <--> IN1  (Use IN1 & IN2 to control motor M1)
#define M1B  6  // Pin 6 <--> IN2

void setup() {
  pinMode(M1A, OUTPUT);
  pinMode(M1B, OUTPUT);
}

void loop() {
  digitalWrite(M1A, HIGH);  // Forward Rotation
  digitalWrite(M1B, LOW);
  delay(3000);

  digitalWrite(M1A, LOW);  // Stop
  digitalWrite(M1B, LOW);
  delay(1000);

  digitalWrite(M1A, LOW);   // Reverse Rotation
  digitalWrite(M1B, HIGH);
  delay(3000);

  digitalWrite(M1A, LOW);  // Stop
  digitalWrite(M1B, LOW);
  delay(1000);
}