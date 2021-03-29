#include <LiquidCrystal_SR_LCD3.h>
int led1=10;
int led2=9;
int led3=8;
int led4=7;
int led5=6;
int led6=5;
int tombol1=A0;
int tombol2=A1;
const int PIN_LCD_STROBE = 2;
const int PIN_LCD_DATA = 3;
const int PIN_LCD_CLOCK = 1;

LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA,PIN_LCD_CLOCK,PIN_LCD_STROBE);

void setup(){
pinMode(tombol1,INPUT);
pinMode(tombol2,INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);
 
lcd.begin(16,2);
lcd.setCursor (0, 0);
lcd.print("WELCOME BUDI");
delay(1000);
lcd.clear();
}

void loop(){
  
if(digitalRead(tombol1)==LOW){
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("RUNNING LED");
  lcd.setCursor(5,1);
  lcd.print("KEKANAN");
  digitalWrite(led1,HIGH);
  delay(250);
  digitalWrite(led1,LOW);
  delay(250);
  digitalWrite(led2,HIGH);
  delay(250);
  digitalWrite(led2,LOW);
  delay(250);
  digitalWrite(led3,HIGH);
  delay(250);
  digitalWrite(led3,LOW);
  delay(250);
  digitalWrite(led4,HIGH);
  delay(250);
  digitalWrite(led4,LOW);
  delay(250);
  digitalWrite(led5,HIGH);
  delay(250);
  digitalWrite(led5,LOW);
  delay(250);
  digitalWrite(led6,HIGH);
  delay(250);
  digitalWrite(led6,LOW);
  delay(250);
 }

else if(digitalRead(tombol2)==LOW){
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("RUNNING LED");
  lcd.setCursor(5,1);
  lcd.print("KEKIRI");
  digitalWrite(led6,HIGH);
  delay(250);
  digitalWrite(led6,LOW);
  delay(250);
  digitalWrite(led5,HIGH);
  delay(250);
  digitalWrite(led5,LOW);
  delay(250);
  digitalWrite(led4,HIGH);
  delay(250);
  digitalWrite(led4,LOW);
  delay(250);
  digitalWrite(led3,HIGH);
  delay(250);
  digitalWrite(led3,LOW);
  delay(250);
  digitalWrite(led2,HIGH);
  delay(250);
  digitalWrite(led2,LOW);
  delay(250);
  digitalWrite(led1,HIGH);
  delay(250);
  digitalWrite(led1,LOW);
  delay(250);
 }

}
