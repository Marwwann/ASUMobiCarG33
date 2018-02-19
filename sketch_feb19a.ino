
int sensorValue;
int outputValue;
void setup() {
  // pin 7 is output for buzzer
  pinMode(7, OUTPUT);
  Serial.begin (9600) ;
}

void loop() {
  // Read photoce ll
  sensorValue = analogRead(A0);
  //map photoce ll 0 to 100
  outputValue = map(sensorValue ,0 ,1023 ,50 ,300);
  //Serial.printin(outputvalue);
  //output buzzer beeps - delay based on photoce ll value
  digitalWrite(7,HIGH);
  delay(sensorValue);
  digitalWrite(7,LOW);
  delay(sensorValue);
  

}
