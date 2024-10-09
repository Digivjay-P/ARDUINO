int P1=8;
int P2=12;
int P3=13;
String S1="Enter colour of your choice";
String S2="ENTER IN CAPS";
String S3="Input colour is";
String S4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(P1,OUTPUT);
  pinMode(P2,OUTPUT);
  pinMode(P3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()==0){

  }
Serial.println(S1);
Serial.println(S2);
S4=Serial.readString();
Serial.print(S3);
Serial.println(S4);
 if(S4="RED"){
  digitalWrite(P1,HIGH);
  digitalWrite(P2,LOW);
  digitalWrite(P3,LOW);
}
if(S4="BLUE"){
  digitalWrite(P1,LOW);
  digitalWrite(P2,HIGH);
  digitalWrite(P3,LOW);
}
if(S4="GREEN"){
  digitalWrite(P1,LOW);
  digitalWrite(P2,LOW);
  digitalWrite(P3,HIGH);
}
}
