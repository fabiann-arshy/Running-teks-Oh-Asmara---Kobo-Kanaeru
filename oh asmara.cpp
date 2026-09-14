#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

// play music di yt pas 3:10
// play wokwi pas aba aba (oh asmara..) didetik ke 3:19

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.print("Kobo Kanaeru");
  lcd.setCursor(0, 1);
  lcd.print("Oh! Asmara");
  lcd.setCursor(0, 2);
  lcd.print("Code By: Arshy");
}

void loop() {
  delay(2000);

  lcd.clear();
  lcd.print("Oh, asmara");
  delay(1000);
  
  lcd.clear();
  lcd.print("Terjawab semua");
  lcd.setCursor(0, 1);
  lcd.print("sudah!");
  delay(2000);

  lcd.clear();
  lcd.print("Teka-tekimu~..");
  delay(1000);

  lcd.clear();
  lcd.print("Hmmmm...");
  delay(1000);

  lcd.clear();
  lcd.print("Karena kini ku t'lah");
  lcd.setCursor(0, 1);
  lcd.print("menjadi...");
  delay(2000);

  lcd.clear();
  lcd.print("milikmuu..");
  delay (1000);

  lcd.clear();
  lcd.print("milikmu...");
  delay(2000);
  
  lcd.clear();
  lcd.print("Milikmuu");
  delay(1500);

  lcd.clear();
  lcd.print("Milikmuuu...");
  delay(1500);

  lcd.clear();
  lcd.print("Milikmu");
  delay(1500);

  lcd.clear();
  lcd.print("Milikmu...");
  delay(1500);

  lcd.clear();
  lcd.print("Milikmu......");
  delay(1500);
  
  while(1);
}