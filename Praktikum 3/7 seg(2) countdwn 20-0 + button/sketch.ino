int segA1 = 2;
int segB1 = 3;
int segC1 = 4;
int segD1 = 5;
int segE1 = 6;
int segF1 = 7;
int segG1 = 8;

int segA2 = 9;
int segB2 = 10;
int segC2 = 11;
int segD2 = 12;
int segE2 = 13;
int segF2 = A0;
int segG2 = A1;

int buttonPin = A2;

bool countdownStarted = false;

int numbers[10][7] = {
  {1, 1, 1, 1, 1, 1, 0},  // 0
  {0, 1, 1, 0, 0, 0, 0},  // 1
  {1, 1, 0, 1, 1, 0, 1},  // 2
  {1, 1, 1, 1, 0, 0, 1},  // 3
  {0, 1, 1, 0, 0, 1, 1},  // 4
  {1, 0, 1, 1, 0, 1, 1},  // 5
  {1, 0, 1, 1, 1, 1, 1},  // 6
  {1, 1, 1, 0, 0, 0, 0},  // 7
  {1, 1, 1, 1, 1, 1, 1},  // 8
  {1, 1, 1, 0, 0, 1, 1}   // 9
};

void displayNumber(int segPins[], int num) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(segPins[i], numbers[num][i]); 
  }
}

void setup() {
  for (int i = segA1; i <= segG1; i++) {
    pinMode(i, OUTPUT);
  }

  for (int i = segA2; i <= segG2; i++) {
    pinMode(i, OUTPUT);
  }

  pinMode(buttonPin, INPUT);
}

void loop() {

  if (digitalRead(buttonPin) == HIGH && !countdownStarted) {
    countdownStarted = true; 
    delay(200);            
  }

  if (countdownStarted) {
    for (int i = 20; i >= 0; i--) {
      int tens = i / 10;     
      int ones = i % 10;   

      int tensPins[] = {segA1, segB1, segC1, segD1, segE1, segF1, segG1};
      displayNumber(tensPins, tens);

      int onesPins[] = {segA2, segB2, segC2, segD2, segE2, segF2, segG2};
      displayNumber(onesPins, ones);

      delay(1000);        
    }
    countdownStarted = false;}
}


