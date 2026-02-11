int pin_A1 =  8;
int pin_A2 =  9;
int pin_B1 = 10;
int pin_B2 = 11;

void setup() {
  pinMode(pin_A1, OUTPUT);
  pinMode(pin_A2, OUTPUT);
  pinMode(pin_B1, OUTPUT);
  pinMode(pin_B2, OUTPUT);
}

void loop(){
  move('F', 1000);
  move('B', 500);
}

void move(char dir, int ms) {
  switch(dir){
    case 'F': digitalWrite(pin_A1, HIGH);
              digitalWrite(pin_A2, LOW);
              digitalWrite(pin_B1, HIGH);
              digitalWrite(pin_B2, LOW);
              delay(ms);
              break;
    case 'B': digitalWrite(pin_A1, LOW);
              digitalWrite(pin_A2, HIGH);
              digitalWrite(pin_B1, LOW);
              digitalWrite(pin_B2, HIGH);
              delay(ms);
              break;
    case 'L': digitalWrite(pin_A1, LOW);
              digitalWrite(pin_A2, HIGH);
              digitalWrite(pin_B1, HIGH);
              digitalWrite(pin_B2, LOW);
              delay(ms);
              break;
    case 'R': digitalWrite(pin_A1, HIGH);
              digitalWrite(pin_A2, LOW);
              digitalWrite(pin_B1, LOW);
              digitalWrite(pin_B2, HIGH);
              delay(ms);
  }
}


