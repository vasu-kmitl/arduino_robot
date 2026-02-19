//******************************************************
// ROBOT SERIES
// Basic 2-Motor Control
// Vasu Udompetaikul   Dept. of Agri Engineering, KMITL
//******************************************************
#define M1A  5   // Pin 5  <--> IN1  (Use IN1 & IN2 to control motor M1)
#define M1B  6   // Pin 6  <--> IN2
#define M2A  9   // Pin 9  <--> IN3  (Use IN3 & IN4 to control motor M2)
#define M2B  10  // Pin 10 <--> IN4

void setup() {
  pinMode(M1A, OUTPUT);
  pinMode(M1B, OUTPUT);
  pinMode(M2A, OUTPUT);
  pinMode(M2B, OUTPUT);
}

void loop() {
  digitalWrite(M1A, HIGH);  // Forward Move
  digitalWrite(M1B, LOW);
  digitalWrite(M2A, HIGH);
  digitalWrite(M2B, LOW);
  delay(3000);

  digitalWrite(M1A, LOW);  // Stop
  digitalWrite(M1B, LOW);
  digitalWrite(M2A, LOW); 
  digitalWrite(M2B, LOW);
  delay(1000);

  digitalWrite(M1A, LOW);   // Reverse Move
  digitalWrite(M1B, HIGH);
  digitalWrite(M2A, LOW);
  digitalWrite(M2B, HIGH);
  delay(3000);

  digitalWrite(M1A, LOW);  // Stop
  digitalWrite(M1B, LOW);
  digitalWrite(M2A, LOW); 
  digitalWrite(M2B, LOW);
  delay(1000);

  digitalWrite(M1A, LOW);   // Turn Left
  digitalWrite(M1B, HIGH);
  digitalWrite(M2A, HIGH);
  digitalWrite(M2B, LOW);
  delay(3000);

  digitalWrite(M1A, LOW);  // Stop
  digitalWrite(M1B, LOW);
  digitalWrite(M2A, LOW); 
  digitalWrite(M2B, LOW);
  delay(1000);

  digitalWrite(M1A, HIGH);  // Turn Right
  digitalWrite(M1B, LOW);
  digitalWrite(M2A, LOW);
  digitalWrite(M2B, HIGH);
  delay(3000);

  digitalWrite(M1A, LOW);  // Stop
  digitalWrite(M1B, LOW);
  digitalWrite(M2A, LOW); 
  digitalWrite(M2B, LOW);
  delay(1000);
}