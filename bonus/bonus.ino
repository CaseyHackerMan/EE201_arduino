#define LED1 11
#define LED2 10

void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
}

void loop() {
  for (int i = 0; i < 1000; i++) {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
    delayMicroseconds(1000-i);
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,HIGH);
    delayMicroseconds(i);
  }
  for (int i = 1000; i > 0; i--) {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
    delayMicroseconds(1000-i);
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,HIGH);
    delayMicroseconds(i);
  }
}
