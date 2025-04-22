int r=3;
int b=5;
int g=6;
void setup()
{
   pinMode(r, OUTPUT);
   pinMode(g, OUTPUT);
   pinMode(b, OUTPUT);
}

void loop()
{
  
  //kanota 5v verilir 255 ikik tarafta ledin parlaklığı düşüyordur 
  
  int i;
  for(i=0;i<=255;i++)
  {

    analogWrite(r,255);
    analogWrite(g,i);
    analogWrite(b,255);
    delay(10);
  }
    for(i=0;i<=255;i++)
  {
  
    analogWrite(g,255);
    analogWrite(b,i);
      analogWrite(r,255);
       delay(10);
  }
    
    for(i=0;i<=255;i++)
  {
 
    analogWrite(b,255);
    analogWrite(r,i);
      analogWrite(g,255);
       delay(10);
  }
}
