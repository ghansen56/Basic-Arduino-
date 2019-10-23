#include <Servo.h>

Servo myServo;

int btnPin1 = 8;
int btnPin2 = 2;
int servoPin = 9;
int btn1State;
int btn2State;
int angle = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(9);

}

void loop() {
  // put your main code here, to run repeatedly:
  btn1State = digitalRead(btnPin1);
  btn2State = digitalRead(btnPin2);

  if (btn1State == HIGH && angle < 180) {
    myServo.write(angle++);
//    Serial.println("Button 1 is on");
  }

 

  if (btn2State == HIGH && angle > 0) {
    myServo.write(angle -- );
  // Serial.println("Button 2 is on");
  }
 Serial.println(angle);
}
