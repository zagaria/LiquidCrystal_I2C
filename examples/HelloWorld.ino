#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
    lcd.init();
    lcd.backlight();// Turn on light
    lcd.setCursor(6, 0); // Set position 6 char on first line
    lcd.print("Hello");  // print message
    lcd.setCursor(1, 1); // Set position 1 char on second line
    lcd.print("it-explain.com"); // print message
}

void loop()
{
   
}
