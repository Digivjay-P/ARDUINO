int P1=13;
String m1="Input an integer";
String m2="The number input is ";
int i;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  pinMode(P1,OUTPUT);
}

void loop()
{
 Serial.println(m1);
  while(Serial.available()==0){

  }
  i=Serial.parseInt();
  Serial.print(m2);
  Serial.println(i);
  if(i>=10){
digitalWrite(P1,HIGH);
    delay(5000);
    digitalWrite(P1,LOW);
    delay(1000);
  }
}