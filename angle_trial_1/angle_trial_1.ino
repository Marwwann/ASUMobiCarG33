 char state;
 float linearDist;
 char dir;  // forward or backward distance
 String mode;
 String submode;
 String distance;
 float angle = 180;
 float angSpeed = 360/2.4; // deg per sec , calculated practically 
 float Time = (angle / angSpeed)*1000;
 int Exit = 0;
int IN_1=4; //left motor
int IN_2=5; //left motor
int IN_3=6; //right motor
int IN_4=7; //right motor
int EN_A=9;
int EN_B=10;
int x=0;
int z=0;
int k=0;
void setup() {
 pinMode(IN_1,OUTPUT);
 pinMode(IN_2,OUTPUT);
 pinMode(IN_3,OUTPUT);
 pinMode(IN_4,OUTPUT);
 pinMode(EN_A,OUTPUT);
 pinMode(EN_B,OUTPUT);
// pinMode(pinA,INPUT);
// attachInterrupt(0,counting,RISING);
 Serial.begin(9600);
}


void left(int a)
{
  digitalWrite(IN_1,LOW);
  digitalWrite(IN_2,HIGH);
  digitalWrite(IN_3,HIGH);
  digitalWrite(IN_4,LOW);
  analogWrite(EN_A,a);
  analogWrite(EN_B,a);
  }

 void right(int a)
{
  digitalWrite(IN_1,HIGH);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,LOW);
  digitalWrite(IN_4,HIGH);
    analogWrite(EN_A,a);
  analogWrite(EN_B,a);
  }

  void forward(int a)
{
  digitalWrite(IN_1,HIGH);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,HIGH);
  digitalWrite(IN_4,LOW);
    analogWrite(EN_A,a);
  analogWrite(EN_B,a);
  }
   void rightforward(int a)
{
  digitalWrite(IN_1,HIGH);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,LOW);
  digitalWrite(IN_4,LOW);
    analogWrite(EN_A,a);
  analogWrite(EN_B,a);
  }
   void rightbackward(int a)
{
  digitalWrite(IN_1,LOW);
  digitalWrite(IN_2,HIGH);
  digitalWrite(IN_3,HIGH);
  digitalWrite(IN_4,HIGH);
    analogWrite(EN_A,a);
  analogWrite(EN_B,a);
  }
  void backward(int a)
  {
    digitalWrite(IN_1,LOW);
    digitalWrite(IN_2,HIGH);
    digitalWrite(IN_3,LOW);
    digitalWrite(IN_4,HIGH);
      analogWrite(EN_A,a);
  analogWrite(EN_B,a);
  }

  void leftforward(int a)
{
  digitalWrite(IN_1,LOW);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,HIGH);
  digitalWrite(IN_4,LOW);
    analogWrite(EN_A,a);
  analogWrite(EN_B,a);
  }
  void leftbackward(int a)
{
  digitalWrite(IN_1,HIGH);
  digitalWrite(IN_2,HIGH);
  digitalWrite(IN_3,LOW);
  digitalWrite(IN_4,HIGH);
    analogWrite(EN_A,a);
  analogWrite(EN_B,a);
  }
   void Stop()
{
  digitalWrite(IN_1,LOW);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,LOW);
  digitalWrite(IN_4,LOW);
  }

   void forward_1(int a,float Time_1)
{
  digitalWrite(IN_1,HIGH);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,HIGH);
  digitalWrite(IN_4,LOW);
  analogWrite(EN_A,a);
  analogWrite(EN_B,a);
  delay(Time_1);
  Stop();
  }
  
void loop() 
{
   while ( Exit == 0)
  {
  right(100);
  delay(2000);
  Stop();
  Exit =5;
  }

} 

            
 
      
