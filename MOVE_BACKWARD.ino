   int LM1=4 ;
   int LM2 =5 ;
   int RM1=6  ;
   int RM2 = 7 ;
void setup() {
  pinMode (LM1 , OUTPUT );
   pinMode (LM2 , OUTPUT );
    pinMode (RM1 , OUTPUT );
     pinMode (RM2 , OUTPUT );

}

void backward ()
{
  digitalWrite(LM1,LOW);
  digitalWrite(LM2,HIGH);
  digitalWrite(RM1,LOW);
  digitalWrite(RM2,HIGH);


}
void loop ()
{
  
}

