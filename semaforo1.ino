#define led_vermelho 8	// '#define' não precisa da atribuição '=' e nem do ';'
#define led_amarelo  9		// '#define' é uma diretiva de compilação
#define led_verde  10			// '#define' diferente da variável que guarda o valor na memória ele substitui o texto pelo valor que posterior
//
void setup()
{
  pinMode(led_vermelho, OUTPUT);		// definindo as portas como de saida 'output'
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_verde, OUTPUT);
}

void vermelho(int tmp) {		// parâmetro de entra 'tmp' inca o tempo em que o led ficará acesso
  digitalWrite(led_vermelho, HIGH);
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_verde, LOW);
  delay(tmp * 1000);		// multiplicando parãmetro de entrada por 1000 que resultará 7 segundos
}

void verde(int tmp) {
   digitalWrite(led_vermelho, LOW);
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_verde, HIGH);
  delay(tmp * 1000); 		 	// 'led_verde' ficará acesso por 9 segundos
}

void amarelo(int tmp) {
    digitalWrite(led_vermelho, LOW);
  digitalWrite(led_amarelo, HIGH);
  digitalWrite(led_verde, LOW);
  delay(tmp * 1000);			// 'led_amarelo' ficará acesso por 2 segundos
}

void loop() {
  vermelho(7);		// passando o valor '7' para função vermelho
  verde(9);
  amarelo(2);
}
  










