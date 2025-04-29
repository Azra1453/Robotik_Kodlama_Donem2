 void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);//Trig
  pinMode(9,INPUT); //Echo 
  for (int i=2;i<=7;i++) pinMode(i,OUTPUT);
 }
  void loop() {
 digitalWrite(8,1);  delay(1);
 digitalWrite(8,0);
 int sure=pulseIn(9,1);
 int mesafe=(sure/2)/28.97;  
Serial.print("Olculen Mesafe=");
 Serial.println(mesafe);
 delay(1); 
if(mesafe<10) digitalWrite(7,1); else digitalWrite(7,0);
 if(mesafe>=10) digitalWrite(2,1); else digitalWrite(2,0); 
if(mesafe>=20) digitalWrite(3,1); else digitalWrite(3,0);  
if(mesafe>=30) digitalWrite(4,1); else digitalWrite(4,0);  

 }
