#define DIGITAL_PIN 13

void setup() {
  Serial.begin(9600);
  pinMode(DIGITAL_PIN,INPUT);
}

void loop() {
  bool input = digitalRead(DIGITAL_PIN);
  if (input) {
    Serial.println("Hello World!");
  } else {
    Serial.println("It's 2023");
  }
  delay(100);
}
