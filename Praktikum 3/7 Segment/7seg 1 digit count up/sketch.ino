int pinA = 13;
int pinB = 12;
int pinC = 11;
int pinD = 10;
int pinE = 9;
int pinF = 8;
int pinG = 7;

int t = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // 0
  digitalWrite(pinA , HIGH);
  digitalWrite(pinB , HIGH);
  digitalWrite(pinC , HIGH);
  digitalWrite(pinD , HIGH);
  digitalWrite(pinE , HIGH);
  digitalWrite(pinF , HIGH);
  digitalWrite(pinG , LOW);
  delay(t);

  // 1
  digitalWrite(pinA , LOW);
  digitalWrite(pinB , HIGH);
  digitalWrite(pinC , HIGH);
  digitalWrite(pinD , LOW);
  digitalWrite(pinE , LOW);
  digitalWrite(pinF , LOW);
  digitalWrite(pinG , LOW);
  delay(t);

  // 2
  digitalWrite(pinA , HIGH);
  digitalWrite(pinB , HIGH);
  digitalWrite(pinC , LOW);
  digitalWrite(pinD , HIGH);
  digitalWrite(pinE , 1);
  digitalWrite(pinF , LOW);
  digitalWrite(pinG , HIGH);
  delay(t);

  // 3
  digitalWrite(pinA , HIGH);
  digitalWrite(pinB , HIGH);
  digitalWrite(pinC , HIGH);
  digitalWrite(pinD , HIGH);
  digitalWrite(pinE , LOW);
  digitalWrite(pinF , LOW);
  digitalWrite(pinG , HIGH);
  delay(t);

  // 4
  digitalWrite(pinA , LOW);
  digitalWrite(pinB , HIGH);
  digitalWrite(pinC , HIGH);
  digitalWrite(pinD , LOW);
  digitalWrite(pinE , LOW);
  digitalWrite(pinF , HIGH);
  digitalWrite(pinG , HIGH);
  delay(t);

  // 5
  digitalWrite(pinA , HIGH);
  digitalWrite(pinB , LOW);
  digitalWrite(pinC , HIGH);
  digitalWrite(pinD , HIGH);
  digitalWrite(pinE , LOW);
  digitalWrite(pinF , HIGH);
  digitalWrite(pinG , HIGH);
  delay(t);

  // 6
  digitalWrite(pinA , HIGH);
  digitalWrite(pinB , LOW);
  digitalWrite(pinC , HIGH);
  digitalWrite(pinD , HIGH);
  digitalWrite(pinE , HIGH);
  digitalWrite(pinF , HIGH);
  digitalWrite(pinG , HIGH);
  delay(t);

  // 7
  digitalWrite(pinA , HIGH);
  digitalWrite(pinB , HIGH);
  digitalWrite(pinC , HIGH);
  digitalWrite(pinD , LOW);
  digitalWrite(pinE , LOW);
  digitalWrite(pinF , LOW);
  digitalWrite(pinG , LOW);
  delay(t);

  // 8
  digitalWrite(pinA , HIGH);
  digitalWrite(pinB , HIGH);
  digitalWrite(pinC , HIGH);
  digitalWrite(pinD , HIGH);
  digitalWrite(pinE , HIGH);
  digitalWrite(pinF , HIGH);
  digitalWrite(pinG , HIGH);
  delay(t);

  // 9
  digitalWrite(pinA , HIGH);
  digitalWrite(pinB , HIGH);
  digitalWrite(pinC , HIGH);
  digitalWrite(pinD , HIGH);
  digitalWrite(pinE , LOW);
  digitalWrite(pinF , HIGH);
  digitalWrite(pinG , HIGH);
  delay(t);
}
