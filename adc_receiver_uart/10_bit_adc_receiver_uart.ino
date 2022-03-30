// ARDUINO OUTPUT PIN
const int analog_out = 5;

// RX VALUE
int rxByte = 0;
void setup() {
  
  // put your setup code here, to run once:
  Serial.begin(115200);
  // FOR TIMER-0 RUNS WITH FAST PWM MODE 
  // SO WE CAN GET MAXIMUM 62.5kHz PWM frequency
  TCCR0B = TCCR0B & 0b11111000 | B00000001;

  // FOR TIMER-2 WE GET MAXIMUM 31kHz PWM frequency
  //TCCR2B = TCCR2B & B11111000 | B00000001; // for PWM frequency of 31372.55 Hz
  //TCCR2B = TCCR2B & B11111000 | B00000010; // for PWM frequency of 3921.16 Hz
}

void loop() {
  if (Serial.available() > 0) {
    rxByte = Serial.read();
    analogWrite(analog_out,(rxByte));
  }
  
}
