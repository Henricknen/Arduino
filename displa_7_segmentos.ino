#define tmp 1000		// define de tempo 1s egundo
int cont=0;		// variável 'cont' fará iniçiar a contagem em 0

int disp_pinos[8]={2,3,4,5,6,7,8,9};		// portas que está ultilizando do 'arduino'
int digitos[10][8]={		// matriz que controlará os digitos
  {1,1,1,1,1,1,0,0},// 0
  {0,1,1,0,0,0,0,0},// 1		// configuração de acordo com os digitos 1-'HIGH' 0-'LOW'
  {1,1,0,1,1,0,1,0},// 2
  {1,1,1,1,0,0,1,0},// 3
  {0,1,1,0,0,1,1,0},// 4
  {1,0,1,1,0,1,1,0},// 5
  {1,0,1,1,1,1,1,0},// 6
  {1,1,1,0,0,0,0,0},// 7
  {1,1,1,1,1,1,1,0},// 8
  {1,1,1,0,0,1,1,0},// 9
};

void setup(){
  for(int i=0;i<8;i++){		// percorre todas as portas
    pinMode(disp_pinos[i],OUTPUT);		// e configurando em 'OUTPUT'
  }
}

void loop(){
  digito(cont);
  delay(tmp);
  cont++;
  if(cont > 9)cont=0;
}

void digito(int d){		// fução controla qual digito será mostrado
  for(int i=0;i<8;i++){
    digitalWrite(disp_pinos[i],digitos[d][i]);
  }
}
