char state;
int IN_1=4; //left motor
int IN_2=5; //left motor
int IN_3=6; //right motor
int IN_4=7; //right motor
void setup() {
 pinMode(IN_1,OUTPUT);
 pinMode(IN_2,OUTPUT);
 pinMode(IN_3,OUTPUT);
 pinMode(IN_4,OUTPUT);
 Serial.begin(9600);
}

void forward()
{
  digitalWrite(IN_1,LOW);
  digitalWrite(IN_2,HIGH);
  digitalWrite(IN_3,HIGH);
  digitalWrite(IN_4,LOW);
  }

 void backward()
{
  digitalWrite(IN_1,HIGH);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,LOW);
  digitalWrite(IN_4,HIGH);
  }

  void right()
{
  digitalWrite(IN_1,LOW);
  digitalWrite(IN_2,HIGH);
  digitalWrite(IN_3,LOW);
  digitalWrite(IN_4,LOW);
  }

  void left()
{
  digitalWrite(IN_1,LOW);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,HIGH);
  digitalWrite(IN_4,LOW);
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
    if (state=='F')
    {
      forward();
      }

      if (state=='B')
    {
      backward();
      }

      if (state=='L')
    {
      left();
      }

      if (state=='R')
    {
      right();
      }

      if (state=='S')
    {
       Stop();
      }
      
    }

}
