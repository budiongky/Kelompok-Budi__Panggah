#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int i;

void setup() {
  lcd.begin(16, 2);
}

void loop() {
 
  lcd.setCursor(0, 0);
  lcd.print("13");
  for (i = 0 ; i < 16; i++) 
  {
    lcd.scrollDisplayRight(); 
    delay(250);
  } 
  
}
