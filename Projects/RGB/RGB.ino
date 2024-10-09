int P1=10;
int P2=9;
int P3=8;
String colour;
String m1="What colour do you want ?";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(P1,OUTPUT);
pinMode(P2,OUTPUT);
pinMode(P3,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(m1);
while(Serial.available()==0){

}
colour=Serial.readString();
if(colour==("RED")){
    digitalWrite(P1,HIGH);
    digitalWrite(P3,LOW);
digitalWrite(P2,LOW);
delay(2000);
  }
  if(colour.equals("GREEN")){
    digitalWrite(P2,HIGH);
digitalWrite(P1,LOW);
    digitalWrite(P3,LOW);
  }
  if(colour.equals("BLUE")){
    digitalWrite(P3,HIGH);
digitalWrite(P2,LOW);
    digitalWrite(P1,LOW);
  }
}
