#define button 5
#define led 21

int state = 0;

void setup() {

  Serial.begin(9600);
  pinMode(button, INPUT);
  pinMode (led, OUTPUT);

}

void loop() {

  state = digitalRead(button);

  if(state == 1 ) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
  Serial.println(state);


}
