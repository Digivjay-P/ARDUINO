String m1="Which LED do you intend to light";
String m2="Your choice is ";
String m3="ENTER COLOUR NAME IN CAPS";
int P1=13;
int P2=4;
int P3=8;
int t=1000;
String colour;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(P1, OUTPUT);
pinMode(P2, OUTPUT);
  pinMode(P3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:


  Serial.println(m1);
  Serial.println(m3);
  while(Serial.available()==0){

  }
  colour=Serial.readString();
  Serial.print(m2);
  Serial.println(colour);
  if(colour.equals("RED")){
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
