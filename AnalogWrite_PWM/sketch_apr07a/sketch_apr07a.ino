int  ledNum = 2;
int  bright = 255;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledNum,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(ledNum,bright);
}
