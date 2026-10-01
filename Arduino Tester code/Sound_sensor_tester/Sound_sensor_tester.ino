int mic = 2;
#define led 3

void setup() {
  // put your setup code here, to run once:
  pinMode(mic, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  int read = digitalRead(mic);

  if(read == HIGH){
    digitalWrite(led, HIGH);
    delay(20);
  }
  else{
    digitalWrite(led, LOW);
    delay(20);
  }
}
