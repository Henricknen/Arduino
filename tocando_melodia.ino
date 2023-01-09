#define som 9

#define NOTA_B0  31
#define NOTA_C1  33
#define NOTA_CS1 35
#define NOTA_D1  37
#define NOTA_DS1 39
#define NOTA_E1  41
#define NOTA_F1  44
#define NOTA_FS1 46
#define NOTA_G1  49
#define NOTA_GS1 52
#define NOTA_A1  55
#define NOTA_AS1 58
#define NOTA_B1  62
#define NOTA_C2  65
#define NOTA_CS2 69
#define NOTA_D2  73
#define NOTA_DS2 78
#define NOTA_E2  82
#define NOTA_F2  87
#define NOTA_FS2 93
#define NOTA_G2  98
#define NOTA_GS2 104
#define NOTA_A2  110
#define NOTA_AS2 117
#define NOTA_B2  123
#define NOTA_C3  131
#define NOTA_CS3 139
#define NOTA_D3  147
#define NOTA_DS3 156
#define NOTA_E3  165
#define NOTA_F3  175
#define NOTA_FS3 185
#define NOTA_G3  196
#define NOTA_GS3 208
#define NOTA_A3  220
#define NOTA_AS3 233
#define NOTA_B3  247
#define NOTA_C4  262
#define NOTA_CS4 277
#define NOTA_D4  294
#define NOTA_DS4 311
#define NOTA_E4  330
#define NOTA_F4  349
#define NOTA_FS4 370
#define NOTA_G4  392
#define NOTA_GS4 415
#define NOTA_A4  440
#define NOTA_AS4 466
#define NOTA_B4  494
#define NOTA_C5  523
#define NOTA_CS5 554
#define NOTA_D5  587
#define NOTA_DS5 622
#define NOTA_E5  659
#define NOTA_F5  698
#define NOTA_FS5 740
#define NOTA_G5  784
#define NOTA_GS5 831
#define NOTA_A5  880
#define NOTA_AS5 932
#define NOTA_B5  988
#define NOTA_C6  1047
#define NOTA_CS6 1109
#define NOTA_D6  1175
#define NOTA_DS6 1245
#define NOTA_E6  1319
#define NOTA_F6  1397
#define NOTA_FS6 1480
#define NOTA_G6  1568
#define NOTA_GS6 1661
#define NOTA_A6  1760
#define NOTA_AS6 1865
#define NOTA_B6  1976
#define NOTA_C7  2093
#define NOTA_CS7 2217
#define NOTA_D7  2349
#define NOTA_DS7 2489
#define NOTA_E7  2637
#define NOTA_F7  2794
#define NOTA_FS7 2960
#define NOTA_G7  3136
#define NOTA_GS7 3322
#define NOTA_A7  3520
#define NOTA_AS7 3729
#define NOTA_B7  3951
#define NOTA_C8  4186
#define NOTA_CS8 4435
#define NOTA_D8  4699
#define NOTA_DS8 4978

// tempo das notas
#define t4 2000		// tempo de uma nota de 4 tempos é 2 segundos
#define t2 1000				// tempo de uma nota de 2 tempos é 1 segundos
#define t1 500		// 1 tempo
#define t05 250			// 1/2 tempo
#define t025 125	// 1/4 de tempo

#define pausa 125		// 'pausa' será de 1/4 de tempo

int ritmo = 2;		// veloçidade do 'ritmo'

int musica[] = {
  NOTA_C4, NOTA_C4,		// inserção das notas 
  NOTA_D4, NOTA_C4, NOTA_F4,
  NOTA_E4, NOTA_C4, NOTA_C4,
  NOTA_D4, NOTA_C4, NOTA_G4,
  NOTA_F4, NOTA_C4, NOTA_F4,
  NOTA_C5, NOTA_A4, NOTA_F4,
  NOTA_E4, NOTA_D4, NOTA_AS4, NOTA_AS4,
  NOTA_A4, NOTA_F4, NOTA_G4,
  NOTA_F4   
};

int duracoes[] = {		// tempo da notas
  t05, t05,
  t1, t1, t1,
  t2, t05, t05,
  t1, t1, t1,
  t2, t05, t05,
  t1, t1, t1,
  t1, t1, t05, t05,
  t1, t1, t1,
  t2
};

void setup(){
  pinMode(som, OUTPUT);		// definindo a porta de 'som'
}

void loop(){
  for(int nota = 0; nota < (sizeof(musica)/sizeof(int)); nota++){
    int duracaoNota = duracoes[nota] / ritmo;
    tone(som, musica[nota], duracaoNota);		// recebendo posição nota e duração
    delay(duracaoNota * 1.3);		// criando um tempo entre uma nota e outra
    noTone(som);
  }
  delay(5000);		// antes de começar novamente terá uma espera de 5 segundos
}