#define ledR 2
#define ledG 4		// definindo diretivas
#define ledB 3
#define botao 7

class Btn{		// implementando 'classe' do botão
public:
  int btnclicado,btnliberado,pino;		// propriedades da classe
  Btn(int p){		// contrutor da classe com pâmentro 'int p' relaçionado ao 'pino'
    pino=p;
    btnclicado=btnliberado=0;
  }
  bool press(){		// método que indicará se o botão foi clicado ou não
    if(digitalRead(pino)==HIGH){
      btnclicado=1;
      btnliberado=0;
    }else{
      btnliberado=1;
    }
    if((btnclicado==1)and(btnliberado==1)){		// significa que botão foi clicado
      btnclicado=0;
      btnliberado=0;
      return true;		// indicação de que botão foi clicado
    }else{
      return false;
    }
  }
};

class Cor{		// classe que controla a cor do led
public:
  int pinoR,pinoG,pinoB,ciclo,maximo;		// propriedades
  Cor(int pr, int pg, int pb):pinoR(pr),pinoG(pg),pinoB(pb){	// lista de inicialização
    ciclo=0;
    maximo=3;
  }
  void trocaLed(){		// função que trocará o led
    if(ciclo==0){	// cor vermelha
      corLed(1,0,0);
    }else if(ciclo==1){		// cor azul
      corLed(0,1,0);
    }else if(ciclo==2){		// cor verde
      corLed(0,0,1);
    }
    ciclo++;
    if(ciclo>maximo-1){
      ciclo=0;
    }
  }
private:
  void corLed(int r, int g, int b){		// função que vai definir a cor do led
    digitalWrite(pinoR,r); //HIGH==1  |  LOW==0
    digitalWrite(pinoG,g);
    digitalWrite(pinoB,b);
  }
};

Btn btn(botao);		// intançiando o 'objeto'
Cor cor(ledR,ledG,ledB);

void setup() {
  pinMode(ledR,OUTPUT);
  pinMode(ledG,OUTPUT);
  pinMode(ledB,OUTPUT);
  pinMode(botao,INPUT);
}

void loop() {
  if(btn.press()){		// se o 'press' do objeto 'btn' retornat true'
    cor.trocaLed();			// será chamado o método 'trocaLed' do objeto 'cor'	
  }
}
