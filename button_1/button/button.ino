int ledPin = 2;
int buttonPin = 12;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
 

}

void loop() {
  // put your main code here, to run repeatedly:
val = digitalRead(buttonPin);
if (val == HIGH) { 
    digitalWrite(ledPin, LOW);
  } else {
  digitalWrite(ledPin, HIGH);
  }

}
