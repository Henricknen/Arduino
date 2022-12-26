#define velm1 3		// 'define' velocidade do motor 1 ligada na porta 'pwm 3'
#define m1a 4			// 'moto1 a' está na porta 2
#define m1b 5				// 'moto1 b' está na porta 4
#define velm2 11
#define m2a 12
#define m2b 13
#define tmp 5000	// definição de tempo para icar girando

int vel = 255;	// velocidade do giro

void setup(){
  pinMode(velm1, OUTPUT);	// definição das porta como saida
  pinMode(m1a, OUTPUT);
  pinMode(m1b, OUTPUT);
  pinMode(velm2, OUTPUT);
  pinMode(m2a, OUTPUT);
  pinMode(m2b, OUTPUT);
  
  
  
  analogWrite(velm1, 0);		// iniçializando tudo com '0'
  analogWrite(m1a, LOW);
  analogWrite(m1b, LOW);
  analogWrite(velm2, 0);		// iniçializando tudo com '0'
  analogWrite(m2a, LOW);
  analogWrite(m2b, LOW);

}

void loop(){
  //M1
  analogWrite(velm1, vel);
  analogWrite(m1a, HIGH);		// pino em 'HIGH' e
  analogWrite(m1b, LOW);			// o outro em 'LOW' fará o motor girar em um sentido
  //M2
  analogWrite(velm2, vel);
  analogWrite(m2a, LOW);		// pino em 'HIGH' e
  analogWrite(m2b, HIGH);			// o outro em 'LOW' fará o motor girar em um sentido

  delay(tmp);
  
  analogWrite(velm1, 0);
  analogWrite(m1a, LOW);		// 'LOW' nos dois pinos fará o motor para antes de inverter o sentido
  analogWrite(m1b, LOW);
  delay(100);

  //M1
  analogWrite(m1a, LOW);		//fará girar o motor em sentido diferente
  analogWrite(m1b, HIGH); 
  //M2
  analogWrite(m2a, HIGH);		//fará girar o motor em sentido diferente
  analogWrite(m2b, LOW); 
  delay(tmp);

}