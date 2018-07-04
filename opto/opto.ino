int l = 8;
int o = 7;
int p=0;
short f=0;
void setup() {
pinMode(l,INPUT);
Serial.begin(9600);
}

void loop() 
{
if(digitalRead (l)==1&&f==0)
{  
p++;
Serial.println(p);
f=1;
delay(3);
}
if (digitalRead (l)==0)
{
  f=0;
}
else if(digitalRead (o)==1)
{
  p=0;
  Serial.println(p);
}

}
