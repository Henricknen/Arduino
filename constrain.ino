#define pot A0		// define para o potenciômetro na porta 'A0'
int val = 0;	// iniçialização da variável 'val' valor

void setup(){
  pinMode(pot, INPUT);
  Serial.begin(9600);
}

void loop(){		// 'analogRead' lê a porta analógica
  val = analogRead(pot);		// armazenando em 'val' o valor de leitura de 'pot'
  val = constrain(val, 500, 800);		// 'constrain' precisa de três parâmetros 'valor lindo, faixa minima e faixa maxima'
  Serial.println(val);		// 'Serial.Println' faz a impressão no console
  delay(250);		// 'delay' aumenta o tempo da leitura
 }