#define an5 A5		// 'define' faz relção a porta analógica de pino 'A5'

void setup(){
  pinMode(A5, INPUT);		// portas analógicas são portas de entrada
  Serial.begin(9600);		// iniçiando comunicação 'serial' com velocidadde de 9600
}

void loop(){
  Serial.println(analogRead(an5));		// fazendo leitura da entrada analógica
                 delay(100);		// colocando um tempo antes de voltar para o 'loop' novamente
}