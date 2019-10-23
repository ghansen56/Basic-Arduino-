//Button Led
//Gwyn Hansen
//Make an LED blink when a button is pressed, and turn off when it's not pressed


int ledPin = 2;
int buttonPin = 12;
int led = 2; 

void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin, INPUT);
pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly;
buttonState = digitalRead(buttonPin);


}
