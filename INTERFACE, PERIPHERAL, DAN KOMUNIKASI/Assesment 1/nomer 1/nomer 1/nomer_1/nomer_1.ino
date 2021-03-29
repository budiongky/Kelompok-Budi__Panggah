int led=9;
int led1=11;
int led2=10;
int tombol=2;

void setup(){
pinMode(led,OUTPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(tombol,INPUT);
}
 
void loop(){
  if(digitalRead(tombol)==LOW){
   digitalWrite(led,HIGH);
   digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH);
   delay(500);
   digitalWrite(led,LOW);
   digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   delay(500);
 }
}
