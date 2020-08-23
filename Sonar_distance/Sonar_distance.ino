void setup() {
  // put your setup code here, to run once:
  # define trigPin 13
  # define echoPin 12
  # define led1 8
  # define led2 9
  # define led3 10

  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

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
  int mapped = map(duration, 0, 200, 0, 255);

  if(distance>=200 || distance<=0){
    Serial.println("Out of range");
  }

  else{
    Serial.println(distance);
    delay(500);
  }

  if(distance>=5 && distance<=10){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);

  }

  else if(distance>10 && distance<=20){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);

    
  }

  else if(distance>20 && distance<=200){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);

    
  }

  else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }

}
