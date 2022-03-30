int ledPin=13 ;
int dit = 250;
int dah = 550;
int longWait = 1000;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledPin,HIGH);
delay(dit); 
digitalWrite(ledPin,LOW);
delay(dit);
digitalWrite(ledPin,HIGH);
delay(dit); 
digitalWrite(ledPin,LOW);
delay(dit);
digitalWrite(ledPin,HIGH);
delay(dit); 
digitalWrite(ledPin,LOW);
delay(dit);

digitalWrite(ledPin,HIGH);
delay(dah); 
digitalWrite(ledPin,LOW);
delay(dah);
digitalWrite(ledPin,HIGH);
delay(dah); 
digitalWrite(ledPin,LOW);
delay(dah);
digitalWrite(ledPin,HIGH);
delay(dah); 
digitalWrite(ledPin,LOW);
delay(dah);

digitalWrite(ledPin,HIGH);
delay(dit); 
digitalWrite(ledPin,LOW);
delay(dit);
digitalWrite(ledPin,HIGH);
delay(dit); 
digitalWrite(ledPin,LOW);
delay(dit);
digitalWrite(ledPin,HIGH);
delay(dit); 
digitalWrite(ledPin,LOW);
delay(dit);

delay(longWait);
}
