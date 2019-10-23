int ledPin1 = 12;
int ledPin2 = 4;
int buttonPin1 = 8;
int buttonPin2 = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  Serial.begin (9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState1;
  int buttonState2;
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  if (buttonState1 == HIGH) {
    Servo.write(180);
    Serial.println("Blink");
    digitalWrite(ledPin1, HIGH);
    delay(200);
    digitalWrite(ledPin1, LOW);
    delay(200);
  }

  else if (buttonState1 == LOW) {
    digitalWrite(ledPin1, LOW);
  }

  if (buttonState2 == HIGH) {
    Serial.println("Blink2");
    digitalWrite(ledPin2, HIGH);
    delay(200);
    digitalWrite(ledPin2, LOW);
    delay(200);
  }

  else if (buttonState2 == LOW) {
    digitalWrite(ledPin2, LOW);
  }

}
