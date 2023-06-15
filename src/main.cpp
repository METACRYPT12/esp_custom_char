#include <Arduino.h>
#include <LiquidCrystal.h>

#define rs D5
#define en D0
#define d4 D1
#define d5 D2
#define d6 D3
#define d7 D4

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

byte bird[] = {
    B01010,
    B01110,
    B11111,
    B10101,
    B11111,
    B01010,
    B11011,
    B00000};

byte pacman[]{
    B00000,
    B01110,
    B11111,
    B11100,
    B11100,
    B11111,
    B01110,
    B00000};

byte alien[]{
    B00000,
    B01110,
    B11111,
    B10101,
    B11111,
    B11111,
    B10101,
    B00000};

void setup()
{
  Serial.begin(9600);

  lcd.begin(16, 2);
  lcd.createChar(0, bird);
  lcd.createChar(1, pacman);
  lcd.createChar(2, alien);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.write("3 Custom Char");
  lcd.setCursor(0, 1);
  lcd.write("Available (1-3)");
}

void loop()
{
  char ch = Serial.read();
  if (ch == '1')
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.write("User Input: 1");
    delay(800);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.write("Custom Character");
    lcd.setCursor(0, 1);
    lcd.print("1: ");
    lcd.setCursor(3, 1);
    lcd.write(byte(0));
  }
  else if (ch == '2')
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.write("User Input: 2");
    delay(800);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.write("Custom Character");
    lcd.setCursor(0, 1);
    lcd.print("2: ");
    lcd.setCursor(3, 1);
    lcd.write(byte(1));
  }

  else if (ch == '3')
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.write("User Input: 3");
    delay(800);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.write("Custom Character");
    lcd.setCursor(0, 1);
    lcd.print("3: ");
    lcd.setCursor(3, 1);
    lcd.write(byte(2));
  }
}