int p1=9;
void setup() {
  // put your setup code here, to run once:
pinMode(p1,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(p1, 0);
delay(1000);

analogWrite(p1, 64);
delay(1000);

analogWrite(p1, 128);
delay(1000);

analogWrite(p1, 192);
delay(1000);

analogWrite(p1, 255);
delay(1000);
}
