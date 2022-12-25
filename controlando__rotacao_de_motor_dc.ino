#define pot A0		// 'define' do potenciômentro ligado na porta 'A0'
#define motor 3
#define tmp 10		// 'define' será um temporizador para o 'delay'
int valpot;		// 'valpot' será para leitura do potenciômetro 

void setup(){
  pinMode(motor, OUTPUT);
  pinMode(pot, INPUT);
  valpot = 0;		// inicializando o valor do potenciômetro
}

void loop(){
  valpot = map(analogRead(pot), 0, 1023, 0, 255);		// lendo valor do potenciômetro e aramazendando na variável 'valpot'
  analogWrite(motor, valpot);
  delay(tmp);
}