#define velmotor 3		// 'define' ligado na 'pwm' 3
#define m1a 2
#define m1b 4
#define tmp 5000

int vel = 255;		// variável xontém a veloçidade do motor

void setup() {		// configurações iniçiais
  pinMode(velmotor, OUTPUT);
  pinMode(m1a, OUTPUT);
  pinMode(m1b, OUTPUT);
  
  digitalWrite(m1a,LOW);
  digitalWrite(m1b,LOW);
  analogWrite(velmotor,vel);
}

void loop() {
  vel=255;
  analogWrite(velmotor,vel);
  
  digitalWrite(m1a,LOW);
  digitalWrite(m1b,HIGH);
  delay(tmp);

  digitalWrite(m1a,LOW);		// parando o motor por um tempo muito pequeno
  digitalWrite(m1b,LOW);
  delay(100);

  digitalWrite(m1a,HIGH);		// trocando o sentido de giro
  digitalWrite(m1b,LOW);
  delay(tmp);

}
