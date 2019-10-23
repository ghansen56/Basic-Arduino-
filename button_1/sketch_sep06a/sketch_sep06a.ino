int ledPin1 = 2;
int ledPin2 = ~3;
int buttonPin1 = 8;
int buttonPin2 = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, OUTPUT);
  Serial.begin (9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState;
  buttonState = digitalRead(buttonPin1);
  if (buttonState == HIGH)
  {
    Serial.println("Blink1");
    digitalWrite(ledPin1, HIGH);
    delay(200);
    digitalWrite(ledPin1, LOW);
    delay(200);

   int buttonState = digitalRead(buttonPin2);
    if (buttonState == HIGH)
  {
    Serial.println("Blink2");
    digitalWrite(ledPin2, HIGH);
    delay(200);
    digitalWrite(ledPin2, LOW);
    delay(200);



  }
  else
  {

    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);


  }




  }}
