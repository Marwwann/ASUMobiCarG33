char state;
int IN_1=4; //left motor
int IN_2=5; //left motor
int IN_3=6; //right motor
int IN_4=7; //right motor
int EN_A=9;
int EN_B=10;
int LS=2;   //left sensor
int RS=3;   //right sensor
int CS=8;  //center sensor


int leftstate;
int rightstate;
int centerstate;
void setup() {
 pinMode(IN_1,OUTPUT);
 pinMode(IN_2,OUTPUT);
 pinMode(IN_3,OUTPUT);
 pinMode(IN_4,OUTPUT);
 pinMode(EN_A,OUTPUT);
  pinMode(EN_B,OUTPUT);
 pinMode(LS,INPUT);
 pinMode(RS,INPUT);
 pinMode(CS,INPUT);
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
   
      
        leftstate=digitalRead(LS);
        rightstate=digitalRead(RS);
        centerstate=digitalRead(CS);
        
     
   
  
       if ( leftstate == 0 && centerstate == 0 && rightstate == 1 ){     
       right(85);  
      }
      
      
      if (leftstate == 1 && centerstate == 0 && rightstate == 0){
       left(85);
      }
      
      
     if ( (leftstate == 0 && centerstate ==1 && rightstate==0) || (leftstate==1 && centerstate==1 && rightstate==1) ){
       forward(85);
     
     }
       
     
      }
      
