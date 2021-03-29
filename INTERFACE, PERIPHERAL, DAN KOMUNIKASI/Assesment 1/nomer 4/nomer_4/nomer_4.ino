#include <Keypad.h>
#include <LiquidCrystal_SR_LCD3.h>
int led1=10;
int led2=9;
int led3=8;
int led4=7;
int led5=6;
int led6=5;
char key;
const int PIN_LCD_STROBE = 2;
const int PIN_LCD_DATA = 3;
const int PIN_LCD_CLOCK = 1;
int R[] = {A1, A2, A3, A4}; 
int C[] = {13, 12, 11};
char keys[4][3] = {
{'1','2','3'},
{'4','5','6'},
{'7','8','9'},
{'*','0','#'}
};

 
LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA,PIN_LCD_CLOCK,PIN_LCD_STROBE);

void setup(){
for (int i=0; i<3; i++){ 
pinMode(C[i],INPUT); 
 } 
 for (int i=0; i<4; 
i++){ 
pinMode(R[i],OUTPUT); 
 } 
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

void scankeypad(){ 
for(int i=0; i<4; i++){      
digitalWrite(R[i],LOW); 
for(int j=0; j<3; j++){ 
if(digitalRead(C[j])==LOW){ 
key=keys[i][j]; 
delay(500); 
 }
 } 
 
digitalWrite(R[i],HIGH); 
 } 
}


void loop(){

scankeypad();


 if(key=='1'){
  lcd.setCursor(0,0);
  lcd.print(" GRUP LED 1 ");
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
 }

 else if(key=='2'){
  lcd.setCursor(0,0);
  lcd.print(" GRUP LED 2 ");
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
 }

 else if(key=='3'){
  lcd.setCursor(0,0);
  lcd.print(" GRUP LED 3 ");
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
 }

 else if(key=='#'){
  lcd.setCursor(0,0);
  lcd.print("RUNNING LED");
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  delay(250);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  delay(250);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  delay(250);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(250);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  delay(250);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  delay(250);
 }

 else if(key=='*'){
  lcd.setCursor(0,0);
  lcd.print(" BLINK LED ");
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  delay(250);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  delay(250);
 }
}
