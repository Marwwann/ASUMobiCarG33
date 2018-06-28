char state;
 float linearDist;
 String dir1;
  String dir2;// forward or backward distance
 String mode;
 String submode;
 String distance;
 float dist;
int IN_1=4; //left motor
int IN_2=5; //left motor
int IN_3=6; //right motor
int IN_4=7; //right motor
int pinA=2; //encoder input pin
int slots = 24; //no of slots of optical encoder(equivalent to PPR)
float wheel = 21; // wheel circumference
volatile unsigned int pulses=0;
int revolutions;
String angleName;
float angle;
int pin = 0;
int Count;
float PulseReq;

void setup() {
 pinMode(IN_1,OUTPUT);
 pinMode(IN_2,OUTPUT);
 pinMode(IN_3,OUTPUT);
 pinMode(IN_4,OUTPUT);
 pinMode(pinA,INPUT);
 attachInterrupt(digitalPinToInterrupt(pinA),counting,RISING);
 Serial.begin(9600);
}

void counting()
{
  pulses++;
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
  
void loop() {
  while(Serial.available()>0)
  {  
     mode = Serial.read ();
     submode= Serial.read ();   
     if(mode=="accurate_driving")
     {
         if(submode=="shapes")
          {
              
          }

          else {
            dir1 = submode.substring(0,6);
            dir2 = submode.substring(0,7);
            
            
            do
            {
              if (dir1 = "Forward")
              {
                forward();
                distance = submode.substring(7);
            dist = distance.toFloat(); 
               }
              else if (dir2 = "Backward")
               {
                 backward(); 
                 distance = submode.substring(8);
            dist = distance.toFloat();
               }
            revolutions = pulses/slots;
            linearDist = wheel*revolutions;
              }
              while(linearDist!=dist);
              if (linearDist==dist)
              {
                Stop(); 
               }
            
            }
      
              
     }
     else if(mode == "angle")
     {
      angleName = submode.substring(0);
      angle = angleName.toFloat();

      do
      {
        right();
        Count= slots/360;
        PulseReq= angle/Count;
      }
      while(pulses != PulseReq);
     }
     
 
      
    }
 

}
