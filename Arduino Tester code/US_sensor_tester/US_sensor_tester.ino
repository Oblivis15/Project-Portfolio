#define echo 2
#define trig 3

void setup() {
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  Serial.begin(9600);
  Serial.print("Sensor Activated");
}

void loop() {
  long duration, distance;

  digitalWrite(trig, HIGH);
  delayMicroseconds(20);
  digitalWrite(trig, LOW);
  delayMicroseconds(20);
  digitalWrite(trig, HIGH);
  delayMicroseconds(20);

  duration = pulseIn(echo, HIGH);
  distance = duration * 0.036/2;

  Serial.print("Distance: ");
  Serial.println(distance);
  delay(200);
}
