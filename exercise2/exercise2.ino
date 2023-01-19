#define LED1 11
#define LED2 10

void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
}

void loop() {
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,LOW);
  delay(500);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  delay(500); 
}
