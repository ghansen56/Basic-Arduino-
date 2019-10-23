int ledPin = 2;
int buttonPin = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin (9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState;
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH)
  {
    Serial.println("Blink");
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);



  }
  else
  {

    digitalWrite(ledPin, LOW);


  }




}
