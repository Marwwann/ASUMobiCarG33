String angleName;
float angle;
int pin = 0;
int Count;
float PulseReq;

void setup() {

}

void loop() {
  
  while(Serial.available()>0)
  {
    mode = Serial.read();
    submode=Serial.read();
    if(mode=="angle")
    {
      angleName = submode.substring(0);
      angle = angleName.toFloat();

      do
      {
        Count = attachInterrupt(digitalPinToInterrupt(pin),counting,RISING);
        PulseReq = (Count * angle)/360;
        digitalWrite(IN_1,HIGH);
        digitalWrite(IN_2,LOW);
        digitalWrite(IN_3,LOW);
        digitalWrite(IN_4,LOW);
      }
      while(Count != PulseReq);
    }

    
  }

}
