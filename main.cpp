int tempReading = 0;  
int lightReading = 0;  

void setup() {
  pinMode(A0, INPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  tempReading = analogRead(A0);
  lightReading = analogRead(A1);
  Serial.print("Temp: ");
  Serial.println(tempReading);
  Serial.print("Light: ");
  Serial.println(lightReading);
  delay(250);
}
