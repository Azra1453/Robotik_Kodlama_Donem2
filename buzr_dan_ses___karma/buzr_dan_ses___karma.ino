int b=2;
void setup() {
  pinMode(b, OUTPUT);
}

void loop() {
  tone(b, 50); // 1000 Hz frekansta ses çıkarır
  delay(600);  // 500 ms bekler
  noTone(b); // Sesi kapatır
  delay(300.);  // 500 ms sessizlik
}
