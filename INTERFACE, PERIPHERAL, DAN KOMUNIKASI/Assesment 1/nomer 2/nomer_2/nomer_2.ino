#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int i;

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.print("Topan Budiargo");
  lcd.setCursor(0,1);
  lcd.print("6702190013");

  if (i==0){
  for(int i=0; i<3 ;i++){
  delay(500);
  lcd.noDisplay();
  
  delay(500);
  lcd.display();
  }
  }
}

void loop() {

  if(i>=3){
    lcd.display();
  }
  
}
