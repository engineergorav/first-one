int in1 =7;
int in2 =8;
int ena =9;

void setup() {
   pinMode(in1,OUTPUT);
   pinMode(in2,OUTPUT);
   pinMode(ena,OUTPUT);

}

void loop() {
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);

  for(int speed=0;speed<=255;speed++)
  {
    analogWrite(ena,speed);
    delay(10);
  }

  delay(1000);

  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);

  for(int speed=255;speed>=0;speed--)
  {
    analogWrite(ena,speed);
    delay(10);
  }

  delay(1000);
  // put your main code here, to run repeatedly:

}
