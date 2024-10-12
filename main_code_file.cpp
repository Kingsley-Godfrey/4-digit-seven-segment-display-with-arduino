#include <SevSeg.h>

int pinA = 11;
int pinB = 7;
int pinC = 4;
int pinD = 2;
int pinE = 1;
int pinF = 10;
int pinG = 5;
int pinDP = 3;
int D1 = 12;
int D2 = 9;
int D3 = 8;
int D4 = 6;

int segmentPins[] = {pinA, pinB, pinC, pinD, pinE, pinF, pinG, pinDP};

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
}

void loop() {
  digit1();
  displayDigit(zero());
  delay(500);

  digit2();
  displayDigit(one());
  delay(500);

  digit3();
  displayDigit(two());
  delay(500);

  digit4();
  displayDigit(three());
  delay(500);

  digit3();
  displayDigit(four());
  delay(500);

  digit2();
  displayDigit(five());
  delay(500);

  digit1();
  displayDigit(six());
  delay(500);

  digit2();
  displayDigit(seven());
  delay(500);

  digit3();
  displayDigit(eight());
  delay(500);

  digit4();
  displayDigit(nine());
  delay(500);

  all4Digits();
  allNumbers();
}

void displayDigit(byte digitByte) {
  for (int i = 0; i < 8; i++) {
    digitalWrite(segmentPins[i], (digitByte >> i) & 0x01);
  }
}

byte zero() {
  return B00111111;
}

byte one(){
  return B00000110;
}

byte two(){
  return B01011011;
}

byte three(){
  return B01001111;
}

byte four(){
  return B01100110;
}

byte five(){
  return B01101101;
}

byte six(){
  return B01111101;
}

byte seven(){
  return B00000111;
}

byte eight(){
  return B01111111;
}

byte nine(){
  return B01101111;
}



void allNumbers(){
  displayDigit(zero());
  delay(500);
  displayDigit(one());
  delay(500);
  displayDigit(two());
  delay(500);
  displayDigit(three());
  delay(500);
  displayDigit(four());
  delay(500);
  displayDigit(five());
  delay(500);
  displayDigit(six());
  delay(500);
  displayDigit(seven());
  delay(500);
  displayDigit(eight());
  delay(500);
  displayDigit(nine());
  delay(500);
}

void turnOffAllSegments(){
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
}

void digit1(){
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
}

void digit2(){
  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
}

void digit3(){
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, HIGH);
}

void digit4(){
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, LOW);
}

void all4Digits(){
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
}
