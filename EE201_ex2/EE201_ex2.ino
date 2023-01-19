#define ANALOG_PIN A0
#define LED1 11
#define LED2 10
#define DIGITAL_PIN 13

short seg[] = {0b0000001,
               0b1001111,
               0b0010010,
               0b0000110,
               0b1001100,
               0b0100100,
               0b0100000,
               0b0001111,
               0b0000000,
               0b0001100,
               0b0001000,
               0b1100000,
               0b0110001,
               0b1000010,
               0b0110000,
               0b0111000};

void setup() {
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  for (int i = 0; i < 7; i++) pinMode(i,OUTPUT);
  pinMode(ANALOG_PIN,INPUT);
  pinMode(DIGITAL_PIN,INPUT);
  analogReadResolution(8);
  Serial.println("Hello world!"); 
}

void loop() {
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,LOW);
  delay(500);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  delay(500);

  bool input = digitalRead(DIGITAL_PIN);
  if (input) {
    Serial.println("Hello World!");
  } else {
    Serial.println("It's 2023");
  }

  
}

//void loop() {
//  analogWrite(LED1,analogRead(ANALOG_PIN));
//  delay(1);
//}

void display_seg(int n) {
  short code = seg[n];
  for (int i = 0; i < 7; i++) {
    digitalWrite(i,code%2);
    code >>= 1;
  }
}
