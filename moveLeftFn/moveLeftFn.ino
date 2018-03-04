int LM1=4;
int LM2=5; // motor1 ground
int RM1=6;
int RM2=7; // motor2 ground

void left(){
  digitalWrite(LM1,HIGH);
  digitalWrite(LM2,LOW);
  digitalWrite(RM1,LOW);
  digitalWrite(RM2,LOW);

}
void setup() {
  // put your setup code here, to run once:
  pinMode(LM1,OUTPUT);
  pinMode(LM2,OUTPUT);
  pinMode(RM1,OUTPUT);
  pinMode(RM2,OUTPUT);

}

void loop() {
left();
}
