short seg[] = {0b1000000,
               0b1111001,
               0b0100100,
               0b0110000,
               0b0011001,
               0b0010010,
               0b0000010,
               0b1111000,
               0b0000000,
               0b0011000};

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(i,OUTPUT);
  }
}

void loop() {
  for (int i = 9; i >= 0; i--) {
    display_seg(i);
    delay(1500);
  } 
}

void display_seg(int n) {
  short code = seg[n];
  for (int i = 0; i < 7; i++) {
    digitalWrite(i,code%2);
    code >>= 1;
  }
}
