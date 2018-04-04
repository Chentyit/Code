#include<Servo.h>
Servo myservo;
int Servopin = 3;

void setup() {
  myservo.attach(Servopin);
  Serial.begin(9600);
}

void loop() {
  int k = -1;
  myservo.write(60);
  if(Serial.available()){
    k = Serial.read();
  }
  if(k >= 0){
    k = k - 48;
    switch(k){
      case 1:
        k = (int)k * 258 - 80;
        Serial.println(k);
        myservo.write(120);
        delay(k);
        myservo.write(60);
        break;
      case 2:
        k = (int)k * 258 - 40;
        Serial.println(k);
        myservo.write(120);
        delay(k);
        myservo.write(60);
        break;
      case 3:
        k = (int)k * 258 - 40;
        Serial.println(k);
        myservo.write(120);
        delay(k);
        myservo.write(60);
        break;
      case 4:
        k = (int)k * 258 - 120;
        Serial.println(k);
        myservo.write(120);
        delay(k);
        myservo.write(60);
        break;
      default:
        break;
    }
  }
}
