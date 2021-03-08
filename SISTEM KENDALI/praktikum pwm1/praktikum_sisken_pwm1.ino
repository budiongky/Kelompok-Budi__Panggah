int mKa1=10;
int mKa2=9;
int mKi1=6;
int mKi2=5;
int led2=8; //led kanan
int led3=7;  // led kiri
int led1=13;  // led tengah
int sensor1=A0;
int sensor2=A1;
int sensor3=A2;
int sensor4=A3;
int sensor5=A4;
int sensor6=A5;
int sensor7=A6;
int sensor8=A7;



void setup() {
pinMode (led2,OUTPUT);
pinMode (led3,OUTPUT);
pinMode (led1,OUTPUT); 
pinMode (mKa1,OUTPUT);
pinMode (mKa2,OUTPUT);
pinMode (mKi1,OUTPUT);
pinMode (mKi2,OUTPUT);
pinMode (sensor1,INPUT);
pinMode (sensor2,INPUT);
pinMode (sensor3,INPUT);
pinMode (sensor4,INPUT);
pinMode (sensor5,INPUT);
pinMode (sensor6,INPUT);
}

void loop() {
 
if(digitalRead(sensor1)==1 && digitalRead(sensor2)==1){
    analogWrite(mKa1,123); // belok kiri
  }
 else if(digitalRead(sensor2)==1 && digitalRead(sensor3)==1){
    analogWrite(mKa1,123); // belok kiri
    analogWrite(mKi2,62); // kanan
   }
  else if(digitalRead(sensor3)==1 && digitalRead(sensor4)==1){
     analogWrite(mKa1,123); // belok kiri
     analogWrite(mKi2,100); // kanan
    }
   else if(digitalRead(sensor4)==1 && digitalRead(sensor5)==1){
      analogWrite(mKa1,150); // 
      analogWrite(mKi2,150); // 
     }
    else if(digitalRead(sensor5)==1 && digitalRead(sensor6)==1){
       analogWrite(mKa1,100); // belok kiri
       analogWrite(mKi2,123); // kanan
      }
     else if (digitalRead(sensor6)==1 && digitalRead(sensor7)==1 ){
        analogWrite(mKa1,62); // belok kiri
        analogWrite(mKi2,123); // kanan
       }
       else if (digitalRead(sensor7)==1 && digitalRead(sensor8)==1 ){
         analogWrite(mKi2,123); // kanan
        }
  else{
  digitalWrite(mKa1,LOW);
  digitalWrite(mKa2,LOW);
  digitalWrite(mKi1,LOW);
  digitalWrite(mKi2,LOW);
  }
 }
