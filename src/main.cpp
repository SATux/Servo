#include <Arduino.h>
#include <Servo.h>

Servo myservo;

int pos = 0;

void setup() {
  myservo.attach(9);
  Serial.begin(115200);
}

void loop() {
  for(pos = 0; pos < 180; pos += 1) {
    myservo.write(pos);
    delay(15);
  }

  for(pos = 180; pos >=1; pos -= 1) {
    myservo.write(pos);
    delay(15);
  }
  Serial.println("Running");
}