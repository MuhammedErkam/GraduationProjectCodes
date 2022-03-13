const int analog_out = 9;

int incomingByte = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  if (Serial.available() > 0) {
  // read the incoming byte:
    incomingByte = Serial.read();
    analogWrite(analog_out,incomingByte);
    Serial.println(incomingByte); 
  }
 
}
