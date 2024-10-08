int r = 1;
float a;
float pi=3.14;
int T=1000;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("The area of circle with radius ");
Serial.print(r);
a=pi*r*r;
Serial.print(" = ");
Serial.println(a);
delay("T");
r=r+1;
}
