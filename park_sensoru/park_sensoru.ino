int trig = 8; 
int echo = 9;
int led1=3,led2=4,led3=5;
int buzzer = 6;


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600); //seri ekran başlatıldı
  pinMode(trig,OUTPUT); //trig pin çıkış yapıldı (8)
  pinMode(echo,INPUT);  // echo pin giriş yapıldı(9)

  pinMode(led1,OUTPUT); //led1 çıkış yapıldı
  pinMode(led2,OUTPUT); //led2 çıkış yapıldı
  pinMode(led3,OUTPUT); //led3 çıkış yapıldı
  pinMode(buzzer,OUTPUT); //buzzer çıkış yapıldı

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trig,1); delay(1); //trig ile ses sinyali 1ms gönderildi
  digitalWrite(trig,0); //trig 0 yapılarak ses sinyali kesildi
  int sure = pulseIn(echo,1); // echo ile dinlenen sesinin toplam süresi tutuldu.
  // mesafe hesabı yapıldı. 
  //2> gidiş geliş süresi 
  //28.97> ses hızı saniye
  int mesafe = (sure/2)/28.97; 
  
  Serial.print("Mesafe :"); //seri ekranda mesafe yazdırıldı
  Serial.println(mesafe);

  if(mesafe > 50){ 
    digitalWrite(led1,0);
    digitalWrite(led2,0);
    digitalWrite(led3,0);
    digitalWrite(buzzer,0);
  }else if(mesafe > 30){
    digitalWrite(led1,1);
    digitalWrite(led2,0);
    digitalWrite(led3,0);
    digitalWrite(buzzer,1);
    delay(250);
    digitalWrite(buzzer,0);
  } else if(mesafe > 10){
    digitalWrite(led1,1);
    digitalWrite(led2,1);
    digitalWrite(led3,0);
    digitalWrite(buzzer,1);
    delay(100);
    digitalWrite(buzzer,0);
  }else{
    digitalWrite(led1,1);
    digitalWrite(led2,1);
    digitalWrite(led3,1);
    digitalWrite(buzzer,1);
  }
  

}
