int x=13;
int WaitTimeOn=100;
int WaitTimeOff=900

void setup() {
  // put your setup code here, to run once:
  pinMode(x,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(x,HIGH);
  delay(WaitTimeOn);
  digitalWrite(x,LOW);
  delay(WaitTimeOff);

}
