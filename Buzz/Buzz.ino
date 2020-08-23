void setup() {
  // put your setup code here, to run once:
  # define trigPin 13
  # define echoPin 12
  # define buz 3
  

  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buz, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  int mapped = map(distance, 0, 200, 0, 255);

  if(distance>=200 || distance<=0){
    Serial.println("Out of range");
  }

  else{
    Serial.println(distance);
    delay(500);
  }

  analogWrite(buz, mapped);
}
