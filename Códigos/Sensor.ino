int sensorPin=2;
int ledPin =5;
void setup() {
  // put your setup code here, to run once:
pinMode(sensorPin, INPUT)
;pinMode(ledPin, OUTPUT)
;}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(sensorPin)==HIGH){
digitalWrite(ledPin, HIGH);}
else{
  digitalWrite(ledPin, LOW);}
  }
