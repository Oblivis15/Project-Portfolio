#define led 3
int touch = 2;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(touch, INPUT);
}

void loop() {
  int state = digitalRead(touch);

  if(state == HIGH){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
  delay(20);
}
