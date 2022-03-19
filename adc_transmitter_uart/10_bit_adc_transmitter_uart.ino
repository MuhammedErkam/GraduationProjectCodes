const int mic_in = A0;

void setup()
{
  Serial.begin(115200);
}

void loop() {
  int adc_val = analogRead(mic_in);
  adc_val = adc_val>>2;
  
  Serial.write(adc_val);
}
