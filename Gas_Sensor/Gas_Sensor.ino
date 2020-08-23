void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(A0, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  int Gas = analogRead(A0);
  int Percent = map(Gas, 0, 1023, 0, 100);
  
  Serial.println(Percent);

  if(Percent>40){
    digitalWrite(9, HIGH);
    delay(1000);
  }

  else{
    digitalWrite(9, LOW);
  }

}
