//SOS CODE

int pin = 13;
int si = 500;   //si(Short Interval)
int li = 3000;  //li(Long Interval)



void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin, HIGH);
  delay(si);
  digitalWrite(pin, LOW);
  delay(si);

  digitalWrite(pin, HIGH);
  delay(si);
  digitalWrite(pin, LOW);
  delay(si);

  digitalWrite(pin, HIGH);
  delay(si);
  digitalWrite(pin, LOW);

  digitalWrite(pin, HIGH);
  delay(li);
  digitalWrite(pin, LOW);
  delay(li);


  digitalWrite(pin, HIGH);
  delay(li);
  digitalWrite(pin, LOW);
  delay(li);


  digitalWrite(pin, HIGH);
  delay(li);
  digitalWrite(pin, LOW);

  digitalWrite(pin, HIGH);

digitalWrite(pin, LOW);

digitalWrite(pin, HIGH);
delay(li);
digitalWrite(pin, LOW);

digitalWrite(pin, LOW);

digitalWrite(pin, HIGH);
delay(li);

digitalWrite(pin, HIGH);

digitalWrite(pin, LOW);

digitalWrite(pin, HIGH);
delay(li);
digitalWrite(pin, LOW);

digitalWrite(pin, LOW);

digitalWrite(pin, HIGH);
delay(li);

digitalWrite(pin, HIGH);

digitalWrite(pin, LOW);

digitalWrite(pin, HIGH);
delay(li);
digitalWrite(pin, LOW);
}