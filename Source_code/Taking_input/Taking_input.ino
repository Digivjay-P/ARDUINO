int N;
String m1="Input number of blinks";
//String m2="Input number is ";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(m1);
  while(Serial.available()==0){

  }
N=Serial.parseInt();
//Serial.print(m2);
Serial.println(N);
for(int i=0; i<=N;i++ ){
  digitalWrite(13,HIGH);
  delay(1500);
  digitalWrite(13,LOW);
  delay(1500);
}
}
