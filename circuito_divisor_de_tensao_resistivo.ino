#define an0 A0

void setup(){
  pinMode(an0, INPUT);
  Serial.begin(9600);
}

void loop(){
  Serial.println(analogRead(an0));		// lendo o valor da porta analógica 'an0' e imprimindo no 'console'
  }