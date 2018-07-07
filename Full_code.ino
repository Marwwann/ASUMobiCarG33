/*#include <SoftwareSerial.h>
SoftwareSerial x(11,12);*/
char state;
int IN_1=4; //left motor
int IN_2=5; //left motor
int IN_3=6; //right motor
int IN_4=7; //right motor
int EN_A=9;
int EN_B=10;
int LS=11;   //left sensor
int RS=3;   //right sensor
int CS=8;  //center sensor
int leftstate;
int rightstate;
int centerstate;
int TriggerPin=13;
int EchoPin=12;
long duration , distance;
void setup() {
 pinMode(IN_1,OUTPUT);
 pinMode(IN_2,OUTPUT);
 pinMode(IN_3,OUTPUT);
 pinMode(IN_4,OUTPUT);
 pinMode(LS,INPUT);
 pinMode(RS,INPUT);
 pinMode(CS,INPUT);
 pinMode(TriggerPin,OUTPUT);
 pinMode(EchoPin,INPUT);
 Serial.begin(9600);
}

void left(int sped)
{
  digitalWrite(IN_1,LOW);
  digitalWrite(IN_2,HIGH);
  digitalWrite(IN_3,HIGH);
  digitalWrite(IN_4,LOW);
  analogWrite(EN_A,sped);
  analogWrite(EN_B,sped);
  }

 void right(int sped)
{
  digitalWrite(IN_1,HIGH);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,LOW);
  digitalWrite(IN_4,HIGH);
  analogWrite(EN_A,sped);
  analogWrite(EN_B,sped);
  }

  void forward(int sped)
{
  digitalWrite(IN_1,HIGH);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,HIGH);
  digitalWrite(IN_4,LOW);
  analogWrite(EN_A,sped);
  analogWrite(EN_B,sped);
  }
   void rightforward(int sped)
{
  digitalWrite(IN_1,HIGH);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,LOW);
  digitalWrite(IN_4,LOW);
  analogWrite(EN_A,sped);
  analogWrite(EN_B,sped);
  }
   void rightbackward(int sped)
{
  digitalWrite(IN_1,LOW);
  digitalWrite(IN_2,HIGH);
  digitalWrite(IN_3,HIGH);
  digitalWrite(IN_4,HIGH);
  analogWrite(EN_A,sped);
  analogWrite(EN_B,sped);
  }
  void backward(int sped)
  {
    digitalWrite(IN_1,LOW);
    digitalWrite(IN_2,HIGH);
    digitalWrite(IN_3,LOW);
    digitalWrite(IN_4,HIGH);
    analogWrite(EN_A,sped);
    analogWrite(EN_B,sped);
  }

  void leftforward(int sped)
{
  digitalWrite(IN_1,LOW);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,HIGH);
  digitalWrite(IN_4,LOW);
  analogWrite(EN_A,sped);
  analogWrite(EN_B,sped);
  }
  void leftbackward(int sped)
{
  digitalWrite(IN_1,HIGH);
  digitalWrite(IN_2,HIGH);
  digitalWrite(IN_3,LOW);
  digitalWrite(IN_4,HIGH);
  analogWrite(EN_A,sped);
  analogWrite(EN_B,sped);
  }
   void Stop()
{
  digitalWrite(IN_1,LOW);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,LOW);
  digitalWrite(IN_4,LOW);
  }
  
void loop() {
  while(Serial.available()>0)
  {
    state=Serial.read();
    if (state=='L')
    {
     left(150);
     
      }

      if (state=='R')
    {
      right(150);
      }

      if (state=='G')
    {
      leftforward(150);
      }

     if(state=='F')
     {
      forward(150);
     }
     if (state=='B')
     {
      backward(150);
     }

      if (state=='S')
    {
       Stop();
      }
      if (state=='J')
      {
        rightbackward(150);
      }
      if (state=='I')
      {
        rightforward(150);
      }
      if (state=='H')
      {
        leftbackward(150);
        
      }
      if (state=='U')
      {
         leftstate=digitalRead(LS);
        rightstate=digitalRead(RS);
        centerstate=digitalRead(CS);
        
     
   
  
       if ( leftstate == 0 && centerstate == 0 && rightstate == 1 ){     
       right(85);  
      }
   /*   if ( leftstate == 0 && centerstate == 1 && rightstate == 1 ){     
       rightforward(85);  
      }*/
      
      
      if (leftstate == 1 && centerstate == 0 && rightstate == 0){
       left(85);
      }

   /*   if (leftstate == 1 && centerstate == 1 && rightstate == 0){
       left(85);
      }*/
      
     if ( (leftstate == 0 && centerstate ==1 && rightstate==0) || (leftstate==1 && centerstate==1 && rightstate==1) ){
       forward(85);
     
     }
     if(state=='T')    
      {
        break; 
       }
      }
    }
 digitalWrite(TriggerPin,LOW);
 delayMicroseconds(2);
 digitalWrite(TriggerPin,HIGH);
 delayMicroseconds(10);
 digitalWrite(TriggerPin,LOW);
 duration= pulseIn(EchoPin,HIGH);
 distance = duration*0.034/2;
 if ( distance <= 20 )
 {
  Stop();
 }

}
