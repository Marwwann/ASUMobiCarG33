int led=7;
int ldr=A0;
int ldr_state;

void setup() {
 pinMode(led,OUTPUT);
 pinMode(ldr,INPUT);

}

void loop() {
  ldr_state=analogRead(ldr);
 if(ldr_state<=300)
 {
   digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
    }

}
