int red=4;
int yellow=5;
int green=6;

void setup() {
  
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  

}

void loop() {
 digitalWrite(green,HIGH);
 delay(20000);
 digitalWrite(green,LOW);
 digitalWrite(yellow,HIGH);
 delay(1000);
 digitalWrite(yellow,LOW);
 delay(1000);
 digitalWrite(yellow,HIGH);
 delay(1000);
 digitalWrite(yellow,LOW);
 delay(1000);
 digitalWrite(yellow,HIGH);
 delay(1000);
 digitalWrite(yellow,LOW);
 delay(1000);
 digitalWrite(red,HIGH);
 delay(20000);
 digitalWrite(red,LOW);
}
