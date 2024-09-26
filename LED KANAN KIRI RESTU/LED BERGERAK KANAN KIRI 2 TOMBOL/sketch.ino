const int led1 = 0;
const int led2 = 1;
const int led3 = 2;
const int button1 = 11; 
const int button2 = 12;  
int buttonState1 = 0;  
int buttonState2 = 0; 

void setup() {

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  pinMode(button1, INPUT);
  pinMode(button2, INPUT);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
}

void loop() {

  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);

  if (buttonState1 == HIGH) {
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

  if (buttonState2 == HIGH) {
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
}