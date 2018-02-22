int ledA =5;
int a=A0; //potentiometer to control ledA
int ledB =6;
int b=A1;  //potentiometer to control ledB
int ledC =7;
int c=A2;  //potentiometer to control ledC
int potA,potB,potC;
void setup() {
  pinMode(a,INPUT);
  pinMode(b,INPUT);
  pinMode(c,INPUT);
  pinMode(ledA,OUTPUT);
  pinMode(ledB,OUTPUT);
  pinMode(ledC,OUTPUT);

}

void loop() {
 potA=analogRead(a);
 potB=analogRead(b);
 potC=analogRead(c);
 if (potA>potB)
 {
   if (potB>potC)
   {
     digitalWrite(ledA,HIGH);
     digitalWrite(ledB,LOW);
     digitalWrite(ledC,LOW);
    }
  }
  else if(potB>potC)
  {
    digitalWrite(ledB,HIGH);
     digitalWrite(ledA,LOW);
     digitalWrite(ledC,LOW);
    }
     else 
  {
    digitalWrite(ledC,HIGH);
     digitalWrite(ledA,LOW);
     digitalWrite(ledC,LOW);
    }
    
}
