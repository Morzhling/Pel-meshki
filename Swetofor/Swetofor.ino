void setup() 
{
 pinMode(13,OUTPUT);
 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);

}

void loop() 
{
// digitalWrite(13,HIGH);
// delay(1000);
// digitalWrite(13,LOW);
// delay(100);

 digitalWrite(2,HIGH);
 delay(5000);
 
 digitalWrite(3,HIGH);
 delay(1000);
 
 digitalWrite(3,LOW);
 digitalWrite(2,LOW);
 digitalWrite(4,HIGH);
 delay(3000);
 
 for (int i = 0; i < 4; i++)
 {
 digitalWrite(4,LOW);
 delay(300);
 digitalWrite(4,HIGH);
 delay(300);
 }
 digitalWrite(4,LOW);
 digitalWrite(3,HIGH);
 delay(1000);
 digitalWrite(3,LOW);

}
