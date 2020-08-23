void setup() {
  // put your setup code here, to run once:

  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  analogWrite(3, 127);

  delay(2000);

  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  analogWrite(3, 0);

  delay(1000);

  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  analogWrite(3, 127);

  delay(2000);

  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  analogWrite(3, 0);

  delay(1000);

}
