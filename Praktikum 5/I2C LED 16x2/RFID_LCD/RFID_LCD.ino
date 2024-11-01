#include <SPI.h>
#include <MFRC522.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);  // Ganti 0x3F ke 0x27 kalau LCD tidak muncul

#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN);   // Membuat instance MFRC522

int powerPin = 3;  
int sda = A4;
int scl = A5; // untuk pengganti VCC/5VOLT

void setup() {
  lcd.init();
  lcd.backlight(); 

  // Jadikan pin power sebagai output
  pinMode(powerPin, OUTPUT);
  digitalWrite(powerPin, LOW);

  rfid(); // Memanggil fungsi rfid

  Serial.begin(9600); // Memulai komunikasi serial
}

void loop() {
  // Look for new cards
  if (!mfrc522.PICC_IsNewCardPresent()) {
    return;
  }
  
  // Select one of the cards
  if (!mfrc522.PICC_ReadCardSerial()) {
    return;
  }

  // Show UID on serial monitor
  Serial.print("UID tag :");
  String content = "";
  for (byte i = 0; i < mfrc522.uid.size; i++) {
    Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(mfrc522.uid.uidByte[i], HEX);
    content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
    content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Message : ");
  content.toUpperCase();
  
  // Clear LCD before showing new message
  lcd.clear();  
  lcd.setCursor(0, 0);  // Set cursor to the first row
  
  if (content.substring(1) == "05 8F 6E 1A 0D F2 00") { // Ganti dengan UID kartu yang diizinkan
    lcd.print("Allow");
    digitalWrite(7, HIGH);
    delay(3000);
    digitalWrite(7, LOW);
  } else {
    lcd.print("Deny");
    digitalWrite(7, HIGH);
    delay(200);
    digitalWrite(7, LOW);
    delay(200);
    digitalWrite(7, HIGH);
    delay(200);
    digitalWrite(7, LOW);
    delay(200);
    digitalWrite(7, HIGH);
    delay(200);
    digitalWrite(7, LOW);
    delay(1000);
  }
}

void rfid() {
  pinMode(7, OUTPUT); // Set pin 7 sebagai OUTPUT
  pinMode(6, OUTPUT); // Set pin 6 sebagai OUTPUT (jika diperlukan)
  
  SPI.begin(); // Inisialisasi SPI bus
  mfrc522.PCD_Init(); // Inisialisasi MFRC522
  lcd.clear();
  lcd.setCursor(0, 0);  // Set cursor to the first row
  lcd.print("Approximate your card to the reader...");
}
