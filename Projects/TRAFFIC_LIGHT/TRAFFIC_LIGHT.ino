//TRAFFIC LIGHT 
int si=   //si(Short Interval)
int vli=  //(Very Long Interval)
int li=   //(Long Interval)

// vli>li


int pin_1= 
int pin_2= 
int pin_3= 

void setup() {
  // put your setup code here, to run once:
pinMode(8, OUTPUT); //Red
pinMode(10, OUTPUT); //Yellow
pinMode(12,OUTPUT);  //Green

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8,HIGH);
  delay(vli);
  digitalWrite(10,HIGH);
  delay(li);
  digitalWrite(8,LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, HIGH);
  delay(vli);
  digitalWrite(12, Low);
  delay(si);
  digitalWrite(12, HIGH);
  dealy(si);
  digitalWrite(12,LOW);
  delay(si);
  digitalWrite(12, HIGH);
  dealy(si);
  digitalWrite(12,LOW);



}
