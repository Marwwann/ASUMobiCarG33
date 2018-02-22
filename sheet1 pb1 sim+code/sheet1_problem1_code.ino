int led = 9;   
void setup() {
 pinMode(led, OUTPUT);
}
void loop() {
digitalWrite(led,LOW);
delay(1500);
digitalWrite(led,HIGH);
delay(500);

}
