//******************************************************
// ROBOT SERIES
// Single Motor Control using PWM
// Vasu Udompetaikul   Dept. of Agri Engineering, KMITL
//******************************************************
#define M1A  5  // Pin 5 <--> IN1  (Use IN1 & IN2 to control motor M1)
#define M1B  6  // Pin 6 <--> IN2

void setup() {
  pinMode(M1A, OUTPUT);
  pinMode(M1B, OUTPUT);
}

void loop() {
  analogWrite(M1A, 0);  // Forward 0% (Stop)
  digitalWrite(M1B, LOW);
  delay(3000);

  analogWrite(M1A, 128);  // Forward 50%
  digitalWrite(M1B, LOW);
  delay(3000);

  analogWrite(M1A, 255);  // Forward 100%
  digitalWrite(M1B, LOW);
  delay(3000);

  digitalWrite(M1A, LOW);   // Reverse 0% (Stop)
  analogWrite(M1B, 0);  
  delay(3000);

  digitalWrite(M1A, LOW);   // Reverse 50%
  analogWrite(M1B, 128);  
  delay(3000);

  digitalWrite(M1A, LOW);   // Reverse 100%
  analogWrite(M1B, 255);  
  delay(3000);
}