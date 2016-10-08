#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

//You can create your character use https://omerk.github.io/lcdchargen/
byte heart[8] = {
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000
};

byte battery0[8] = {
  0b01110,
  0b11011,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b11111
};

byte battery1[8] = {
  0b01110,
  0b11011,
  0b10001,
  0b10001,
  0b10001,
  0b10001,
  0b11111,
  0b11111
};

byte battery2[8] = {
  0b01110,
  0b11011,
  0b10001,
  0b10001,
  0b10001,
  0b11111,
  0b11111,
  0b11111
};

byte battery3[8] = {
  0b01110,
  0b11011,
  0b10001,
  0b10001,
  0b11111,
  0b11111,
  0b11111,
  0b11111
};

byte battery4[8] = {
  0b01110,
  0b11011,
  0b10001,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111
};

byte battery5[8] = {
  0b01110,
  0b11011,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111
};

byte battery6[8] = {
  0b01110,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111
};

void setup()
{ 
    lcd.init();//I don't know why, but only with two init (before and after) work correct.
    lcd.createChar(0, battery0);
    lcd.createChar(1, battery1);
    lcd.createChar(2, battery2);
    lcd.createChar(3, battery3);
    lcd.createChar(4, battery4);
    lcd.createChar(5, battery5);
    lcd.createChar(6, battery6);
    lcd.createChar(7, heart);
    lcd.init();
    lcd.backlight();
    lcd.print("Battery "); 
    lcd.write(0);
    lcd.write(1);
    lcd.write(2);
    lcd.write(3);
    lcd.write(4);
    lcd.write(5);
    lcd.write(6);
    lcd.write(7);
}

void loop()
{
   
}
