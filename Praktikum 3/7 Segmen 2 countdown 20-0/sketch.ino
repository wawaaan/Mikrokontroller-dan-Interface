int a2 = 2;
int b2 = 3;
int c2 = 4;
int d2 = 5;
int e2 = 6;
int f2 = 7;
int g2 = 8;

int a1 = 9;
int b1 = 10;
int c1 = 11;
int d1 = 12;
int e1 = 13;
int f1 = A0;
int g1 = A1;

byte angka[] = {
  0b00111111, // 0
  0b00000110, // 1
  0b01011011, // 2
  0b01001111, // 3
  0b01100110, // 4
  0b01101101, // 5
  0b01111101, // 6
  0b00000111, // 7
  0b01111111, // 8
  0b01101111  // 9
};

void tampilkanPuluhan(byte angka) {
  digitalWrite(a1, bitRead(angka, 0));
  digitalWrite(b1, bitRead(angka, 1));
  digitalWrite(c1, bitRead(angka, 2));
  digitalWrite(d1, bitRead(angka, 3));
  digitalWrite(e1, bitRead(angka, 4));
  digitalWrite(f1, bitRead(angka, 5));
  digitalWrite(g1, bitRead(angka, 6));
}

void tampilkanSatuan(byte angka) {
  digitalWrite(a2, bitRead(angka, 0));
  digitalWrite(b2, bitRead(angka, 1));
  digitalWrite(c2, bitRead(angka, 2));
  digitalWrite(d2, bitRead(angka, 3));
  digitalWrite(e2, bitRead(angka, 4));
  digitalWrite(f2, bitRead(angka, 5));
  digitalWrite(g2, bitRead(angka, 6));
}

void setup() {
  pinMode(a1, OUTPUT);
  pinMode(b1, OUTPUT);
  pinMode(c1, OUTPUT);
  pinMode(d1, OUTPUT);
  pinMode(e1, OUTPUT);
  pinMode(f1, OUTPUT);
  pinMode(g1, OUTPUT);

  pinMode(a2, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(c2, OUTPUT);
  pinMode(d2, OUTPUT);
  pinMode(e2, OUTPUT);
  pinMode(f2, OUTPUT);
  pinMode(g2, OUTPUT);
}

void loop() {
  for (int i = 20; i >= 0; i--) {
    int puluhan = i / 10; 
    int satuan = i % 10; 
    
    tampilkanPuluhan(angka[puluhan]);
    tampilkanSatuan(angka[satuan]);
    
    delay(250);
  }
}
