//******************************************************
// ROBOT SERIES
// Basic 2-Motor Control using Functions
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

void Stop(){
  digitalWrite(M1A, LOW);  // Stop
  digitalWrite(M1B, LOW);
  digitalWrite(M2A, LOW); 
  digitalWrite(M2B, LOW);
}

void Forward(){
  digitalWrite(M1A, HIGH);
  digitalWrite(M1B, LOW);
  digitalWrite(M2A, HIGH);
  digitalWrite(M2B, LOW);
}

void Reverse(){
  digitalWrite(M1A, LOW);
  digitalWrite(M1B, HIGH);
  digitalWrite(M2A, LOW);
  digitalWrite(M2B, HIGH);
}

void Left(){
  digitalWrite(M1A, LOW);
  digitalWrite(M1B, HIGH);
  digitalWrite(M2A, HIGH);
  digitalWrite(M2B, LOW);
}

void Right(){
  digitalWrite(M1A, HIGH);
  digitalWrite(M1B, LOW);
  digitalWrite(M2A, LOW);
  digitalWrite(M2B, HIGH);
}

void loop() {
  Forward();  delay(3000);
  Stop();     delay(1000);

  Reverse();  delay(3000);
  Stop();     delay(1000);

  Left();     delay(3000);
  Stop();     delay(1000);

  Right();    delay(3000);
  Stop();     delay(1000);
}