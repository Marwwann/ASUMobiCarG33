int TriggerPin =13;
int EchoPin=12;
long duration , distance; // Duration variable is the variable whera the value coming from the ultrasonic sensor will be saved
// Distance variable is the variabe where the actual distance of the barrier will be calculated

void setup() {
 pinMode(TriggerPin,OUTPUT);
 pinMode(EchoPin,INPUT);
 Serial.begin(9600);

}

void loop() {
 digitalWrite(TriggerPin,LOW);
 delayMicroseconds(2);
 digitalWrite(TriggerPin,HIGH);
 delayMicroseconds(10);
 digitalWrite(TriggerPin,LOW);
 duration= pulseIn(EchoPin,HIGH);
 distance = duration*0.034/2;
 Serial.print("Distance is:");
 Serial.println(distance);

}
