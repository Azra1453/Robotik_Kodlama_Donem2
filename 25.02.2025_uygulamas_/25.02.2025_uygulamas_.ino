// C++ code
//
void setup()
{
  pinMode(5,OUTPUT);
}

void loop(){
          for(int i=0;i<=255;i+=10){
            analogWrite(5, i);
            delay(20);
}
    for(int i=255;i>=0;i-=10){
            analogWrite(5, i);
            delay(20);
    }
}
