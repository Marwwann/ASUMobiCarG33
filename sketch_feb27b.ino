 int  ledpin =7 ;
 void setup() {
pinMode  (ledpin,OUTPUT );
  // initialize digital pin 7 as an output .

}

void loop() {
  digitalWrite (ledpin , HIGH ); // turn the led on 
   delay (1000);  // wait for a second 
   digitalWrite ( ledpin, LOW ); // turn the led off 
   delay (1000) ; // wait for a second  
   

}
