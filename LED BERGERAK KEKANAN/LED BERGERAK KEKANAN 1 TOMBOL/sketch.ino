const int led1 = 5;
const int led2 = 6;
const int led3 = 7;
const int buttonPin = 2;

int buttonState = 0;

void setup() {

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);


  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);


  if (buttonState == HIGH) {
    digitalWrite(led1, HIGH);
    delay(200);
    digitalWrite(led1, LOW);

    digitalWrite(led2, HIGH);
    delay(200);
    digitalWrite(led2, LOW);

    digitalWrite(led3, HIGH);
    delay(200);
    digitalWrite(led3, LOW);
  } 
  else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
}
