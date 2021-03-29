int ldr=A0;
int nilaildr=0;

void setup() {
  Serial.begin(9600);
  pinMode(ldr, INPUT);
}
void loop() {
  nilaildr = analogRead(ldr);
  if (nilaildr > 200) {
   Serial.println("LDR ON");
  }
  else {
   Serial.println("LDR OFF");  
  }
}
