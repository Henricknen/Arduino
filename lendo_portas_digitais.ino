#define led 4		// criando definções  com '#define'
#define btn 3
int btnclicado = 0;		// variáveis
int btnliberado = 0;

void trocaLed(){		// função que verifica e altera o estado do led
  if(digitalRead(led)  == HIGH){
    digitalWrite(led, LOW);
  }else{
    digitalWrite(led, HIGH);
  }
}
  
void keyup(){		// função que controa o estado do btão
    if((btnclicado == 1) and (btnliberado == 1)){
      btnclicado = 0;
      btnliberado = 0;
      trocaLed();
    }
}
    

void setup(){	// definindo o moda das portas
  pinMode(led, OUTPUT);		// porta 'led' será de sida
  pinMode(btn, INPUT);			// porta do 'btn' será de entrada
}

void loop(){
  if(digitalRead(btn) == HIGH){		// 'digitalRead' le o estado da porta que está dentro do parentezes '()'
    btnclicado = 1;
    btnliberado = 0;
  }else{
    btnliberado = 1;
  }
  keyup();		// chamando função que verifica o estado do botão
}