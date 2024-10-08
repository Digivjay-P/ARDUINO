int P1=6;
int P2=8;
int T=1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(P1,OUTPUT);
  pinMode(P2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<3; i++ ){
digitalWrite(P1,HIGH);
delay(T);
digitalWrite(P1,LOW);
delay(T);
}

for(int i=0;i<3;i++){
digitalWrite(P2,HIGH);
delay(T);
digitalWrite(P2,LOW);
delay(T);
}

}
