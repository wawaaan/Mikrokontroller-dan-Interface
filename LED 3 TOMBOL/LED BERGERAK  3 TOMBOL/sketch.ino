const int led1 = 0;
const int led2 = 1;
const int led3 = 2;
const int button1 = 11;  
const int button2 = 12;  
const int button3 = 13; 
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;

void setup() {

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
}

void loop() {

  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);
  buttonState3 = digitalRead(button3);

  if (buttonState1 == HIGH) {
    runLeftToRight();
  }

  if (buttonState2 == HIGH) {
    runRightToLeft();
  }

  if (buttonState3 == HIGH) {
    runBackAndForth();
  }
}

void runLeftToRight() {
  digitalWrite(led1, HIGH);
  delay(300);
  digitalWrite(led1, LOW);

  digitalWrite(led2, HIGH);
  delay(300);
  digitalWrite(led2, LOW);

  digitalWrite(led3, HIGH);
  delay(300);
  digitalWrite(led3, LOW);
}

void runRightToLeft() {
  digitalWrite(led3, HIGH);
  delay(300);
  digitalWrite(led3, LOW);

  digitalWrite(led2, HIGH);
  delay(300);
  digitalWrite(led2, LOW);

  digitalWrite(led1, HIGH);
  delay(300);
  digitalWrite(led1, LOW);

}

void runBackAndForth() {

  runLeftToRight();
  runRightToLeft();
}