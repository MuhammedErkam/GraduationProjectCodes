// ARDUINO I/O PINS
const int analog_out = 5;
const int mic_in = A0;

void setup() {

  Serial.begin(115200);
  // FOR TIMER-0 RUNS WITH FAST PWM MODE 
  // SO WE CAN GET MAXIMUM 62.5kHz PWM frequency
  TCCR0B = TCCR0B & 0b11111000 | B00000001;
}

void loop() {
  
  int adc_val = analogRead(mic_in);
  adc_val = adc_val>>2;
  analogWrite(analog_out,adc_val);  
  Serial.println(adc_val);
}
