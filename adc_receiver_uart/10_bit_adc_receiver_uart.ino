const int analog_out = 3;

int incomingByte = 0;
void setup() {
  
  // put your setup code here, to run once:
  Serial.begin(115200);
  TCCR2B = TCCR2B & B11111000 | B00000001; // for PWM frequency of 31372.55 Hz
  //TCCR2B = TCCR2B & B11111000 | B00000010; // for PWM frequency of 3921.16 Hz
}

void loop() {
  if (Serial.available() > 0) {
    incomingByte = Serial.read();
    analogWrite(analog_out,(incomingByte));
  }
  
}
