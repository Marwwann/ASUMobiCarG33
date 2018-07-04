char state;
int IN_1=4; //left motor
int IN_2=5; //left motor
int IN_3=6; //right motor
int IN_4=7; //right motor
int LS=2;   //left sensor
int RS=3;   //right sensor
int CS=8;  //center sensor
int TriggerPin=13;
int EchoPin=12;
long duration , distance;
int leftstate;
int rightstate;
int centerstate;
void setup() {
 pinMode(IN_1,OUTPUT);
 pinMode(IN_2,OUTPUT);
 pinMode(IN_3,OUTPUT);
 pinMode(IN_4,OUTPUT);
 pinMode(TriggerPin,OUTPUT);
 pinMode(EchoPin,INPUT);
 pinMode(LS,INPUT);
 pinMode(RS,INPUT);
 pinMode(CS,INPUT);
 Serial.begin(9600);
}
void left()
{
  digitalWrite(IN_1,LOW);
  digitalWrite(IN_2,HIGH);
  digitalWrite(IN_3,HIGH);
  digitalWrite(IN_4,LOW);
  }

 void right()
{
  digitalWrite(IN_1,HIGH);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,LOW);
  digitalWrite(IN_4,HIGH);
  }

  void forward()
{
  digitalWrite(IN_1,HIGH);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,HIGH);
  digitalWrite(IN_4,LOW);
  }
   void rightforward()
{
  digitalWrite(IN_1,HIGH);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,LOW);
  digitalWrite(IN_4,LOW);
  }
   void rightbackward()
{
  digitalWrite(IN_1,LOW);
  digitalWrite(IN_2,HIGH);
  digitalWrite(IN_3,HIGH);
  digitalWrite(IN_4,HIGH);
  }
  void backward()
  {
    digitalWrite(IN_1,LOW);
    digitalWrite(IN_2,HIGH);
    digitalWrite(IN_3,LOW);
    digitalWrite(IN_4,HIGH);
  }

  void leftforward()
{
  digitalWrite(IN_1,LOW);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,HIGH);
  digitalWrite(IN_4,LOW);
  }
  void leftbackward()
{
  digitalWrite(IN_1,HIGH);
  digitalWrite(IN_2,HIGH);
  digitalWrite(IN_3,LOW);
  digitalWrite(IN_4,HIGH);
  }
   void Stop()
{
  digitalWrite(IN_1,LOW);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,LOW);
  digitalWrite(IN_4,LOW);
  }

  /*void linetrack()
  { 
    leftstate=digitalRead(LS);
    rightstate=digitalRead(RS);
    if (leftstate==0 && rightstate==0)
    { 
      Stop();
      }
     if (leftstate==0 && rightstate==1)
    { 
       right();
      }
     if (leftstate==1 && rightstate==0)
    { 
       left();
      }
     if (leftstate==1 && rightstate==1)
    { 
       forward();
      }
    }*/
void loop() {
      
        leftstate=digitalRead(LS);
        rightstate=digitalRead(RS);
        centerstate=digitalRead(CS);
     Serial.print (String(centerstate));
      
     if (leftstate==0 && centerstate==0 && rightstate==0 ){
       rightforward();
      
     }
     if (leftstate==1 && centerstate==1 && rightstate==1 )
      {
        forward();
      }
      delay(500);
     
}
