/*
  Real Arduino sketch.
  This is the version intended for Arduino IDE and for uploading to the board.
  The logic here is the actual Arduino code for the LED sequence.
*/
#include <Arduino.h>

const int Led9 = 9;
const int Led8 = 8;

void setup() {
  pinMode(Led9, OUTPUT);
  pinMode(Led8, OUTPUT);
}

void loop() {
  digitalWrite(Led9, HIGH);
  delay(100);
  digitalWrite(Led9, LOW);
  delay(100);
  digitalWrite(Led9, HIGH);
  delay(100);
  digitalWrite(Led9, LOW);
  delay(100);

  digitalWrite(Led8, HIGH);
  delay(100);
  digitalWrite(Led8, LOW);
  delay(100);
  digitalWrite(Led8, HIGH);
  delay(100);
  digitalWrite(Led8, LOW);
  delay(100);

  digitalWrite(Led9, HIGH);
  digitalWrite(Led8, HIGH);
  delay(100);
  digitalWrite(Led9, LOW);
  digitalWrite(Led8, LOW);
  delay(900);
  digitalWrite(Led9, HIGH);
  digitalWrite(Led8, HIGH);
  delay(100);
  digitalWrite(Led9, LOW);
  digitalWrite(Led8, LOW);
  delay(100);
  digitalWrite(Led9, HIGH);
  digitalWrite(Led8, HIGH);
  delay(100);
  digitalWrite(Led9, LOW);
  digitalWrite(Led8, LOW);
  delay(2000);
}
