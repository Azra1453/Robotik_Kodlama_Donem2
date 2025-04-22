int r=6;
int b=5;
int g=3;
void setup() {
  // put your setup code here, to run once:
pinMode(r,OUTPUT);
pinMode(b,OUTPUT);
pinMode(g,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(r,0);
delay(1000);
digitalWrite(r,1);
delay(1000);  

digitalWrite( b,0);
delay(1000);
digitalWrite(b,1);
delay(1000);  

digitalWrite(g,0);
delay(1000);
digitalWrite(g,1);
delay(1000);  


}
