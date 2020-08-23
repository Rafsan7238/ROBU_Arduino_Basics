float temp;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  temp = analogRead(A1);
  float mv = (temp/1024.0)*5000;
  float cel = mv/10;

  Serial.print("TEMPERATURE = ");
  Serial.print(cel);
  Serial.print("*C");
  Serial.println();
  delay(1000);

}
