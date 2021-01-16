#include <Arduino.h>
#include <Servo.h>

Servo myservo;

//int pos = 0;
int potpin = 1;
int val;

void setup() {
  myservo.attach(10);
  Serial.begin(115200);
}

void loop() {
  val = analogRead(potpin);
  val = map(val, 0, 1025, 0, 179);
  myservo.write(val);
  Serial.println(val);


  // for(pos = 0; pos < 180; pos += 1) {
  //   myservo.write(pos);
  //   Serial.print("Setting pos to: ");
  //   Serial.println(pos);
  //   delay(15);
  // }

  // for(pos = 180; pos >=1; pos -= 1) {
  //   myservo.write(pos);
  //   Serial.print("Setting pos to: ");
  //   Serial.println(pos);
  //   delay(15);
  // }
  //Serial.println("Running");
}