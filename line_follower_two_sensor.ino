int ledPin = 6;
void setup() {
Serial.begin(9600);
pinMode (10, OUTPUT);
pinMode (11, OUTPUT);
pinMode (12, OUTPUT);
pinMode (13, OUTPUT);
pinMode (6, OUTPUT);
pinMode (7, OUTPUT);
pinMode (A0, INPUT);
pinMode (A1, INPUT);

pinMode(ledPin, OUTPUT); 
}

void loop() {
  int s1 = digitalRead(A0);
  int s2 = digitalRead(A1);


  Serial.print(s1);
  Serial.print(" -- ");
  Serial.print(s2);
  Serial.println("  ");


if ( (s1==1) && (s2==1)) {
forward();
}
else if ( (s1==0) && (s2==0) ) {
stop();
}
else if ( (s1==1) && (s2==0) ) {
 right();
}

else if ( (s1==1) && (s2==0) ) {
 left();
}
else{
forward();
}
}

void forward()
{
digitalWrite(6, HIGH);
digitalWrite(7, HIGH);
digitalWrite(10, HIGH);
digitalWrite(11, LOW);
digitalWrite(12, HIGH);
digitalWrite(13, LOW);
digitalWrite(ledPin, HIGH);
Serial.println(" Moving Forward");

}
void backward()
{
digitalWrite(6, HIGH);
digitalWrite(7, HIGH);
digitalWrite(10, LOW);
digitalWrite(11, HIGH);
digitalWrite(12, LOW);
digitalWrite(13, HIGH);
digitalWrite(ledPin, HIGH);
Serial.println("Moving Backward");
}
void stop()
{
digitalWrite(6, LOW);
digitalWrite(7, LOW);
digitalWrite(10, LOW);
digitalWrite(11, LOW);
digitalWrite(12, LOW);
digitalWrite(13, LOW);
digitalWrite(ledPin, LOW);
Serial.println("Stop");
}
void left()
{
digitalWrite(6, HIGH);
digitalWrite(7, HIGH);
digitalWrite(10, HIGH);
digitalWrite(11, LOW);
digitalWrite(12, LOW);
digitalWrite(13, LOW);
digitalWrite(ledPin, HIGH);
Serial.println(" Rotate Left");
}
void right()
{
digitalWrite(6, HIGH);
digitalWrite(7, HIGH);
digitalWrite(10, LOW);
digitalWrite(11, LOW);
digitalWrite(12, HIGH);
digitalWrite(13, LOW);
digitalWrite(ledPin, HIGH);
Serial.println(" Rotate Right");
}
void sharpleft()
{
digitalWrite(6, HIGH);
digitalWrite(7, HIGH);
digitalWrite(10, HIGH);
digitalWrite(11, LOW);
digitalWrite(12, LOW);
digitalWrite(13, HIGH);
digitalWrite(ledPin, HIGH);
Serial.println(" Rotate Left");
}
void sharpright()
{
digitalWrite(6, HIGH);
digitalWrite(7, HIGH);
digitalWrite(10, LOW);
digitalWrite(11, HIGH);
digitalWrite(12, HIGH);
digitalWrite(13, LOW);
digitalWrite(ledPin, HIGH);
Serial.println(" Rotate Right");
}
