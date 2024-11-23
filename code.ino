#include <Servo.h>

Servo myservo;
int ldrpin = A0; // Pin number of LDR
int pos = 90;

void setup() { 
  Serial.begin(9600);
  myservo.attach(9);
  pinMode(ldrpin, INPUT); // Use the globally declared ldrpin
}

void loop() {
  int ldrRead = analogRead(ldrpin);
  Serial.println(ldrRead);

  if (ldrRead <= 370) {
    delay(5);
    myservo.write(pos = 45);

  } else {
    myservo.write(pos = 90);
  }
}
