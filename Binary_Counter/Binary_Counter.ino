int led1 = 2;
int led2 = 4;
int led3 = 6;
int led4 = 8;
int lag = 1000;
  
void setup() {
  // put your setup code here, to run once:

pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:


digitalWrite(led1,LOW); 
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
delay(lag);



digitalWrite(led1,HIGH); 
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
delay(lag);

digitalWrite(led1,LOW); 
digitalWrite(led2,HIGH);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
delay(lag);

digitalWrite(led1,HIGH); 
digitalWrite(led2,HIGH);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
delay(lag);

digitalWrite(led1,LOW); 
digitalWrite(led2,LOW);
digitalWrite(led3,HIGH);
digitalWrite(led4,LOW);
delay(lag);

digitalWrite(led1,HIGH); 
digitalWrite(led2,LOW);
digitalWrite(led3,HIGH);
digitalWrite(led4,LOW);
delay(lag);

digitalWrite(led1,LOW); 
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,LOW);
delay(lag);

digitalWrite(led1,HIGH); 
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,LOW);
delay(lag);

digitalWrite(led1,LOW); 
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,HIGH);
delay(lag);


digitalWrite(led1,HIGH); 
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,HIGH);
delay(lag);


digitalWrite(led1,LOW); 
digitalWrite(led2,HIGH);
digitalWrite(led3,LOW);
digitalWrite(led4,HIGH);
delay(lag);


digitalWrite(led1,HIGH); 
digitalWrite(led2,HIGH);
digitalWrite(led3,LOW);
digitalWrite(led4,HIGH);
delay(lag);


digitalWrite(led1,LOW); 
digitalWrite(led2,LOW);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
delay(lag);



digitalWrite(led1,HIGH); 
digitalWrite(led2,LOW);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
delay(lag);

digitalWrite(led1,LOW); 
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
delay(lag);

digitalWrite(led1,HIGH); 
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
delay(lag);





}
