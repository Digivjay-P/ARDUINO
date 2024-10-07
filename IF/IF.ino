int P1=A0;
int P2=9;
int T=1000;
int read;
float V;

void setup() {
  // put your setup code here, to run once:
pinMode(P1, INPUT);
pinMode(P2, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  read=analogRead(P1);
  V=(5./1023.)*read;
  Serial.print("Potential accross the potentiometer is ");
  Serial.println(V);
  if(V>=4.00){
    digitalWrite(P2, HIGH);
  }
  if(V<4.00){
    digitalWrite(P2, LOW);
  }
  delay(T);

}
