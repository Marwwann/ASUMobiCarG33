int ledPin=13;

void setup() {
  pinMode (ledPin,HIGH);

}

void loop() {
digitalWrite (ledPin,HIGH);  
delay (500);
digitalWrite (ledPin,LOW);
delay (1500);
}
