#include <LiquidCrystal.h>		// importando biblioteca 'LiquidCrystal.h'

LiquidCrystal lcd(7, 6, 5, 4,3, 2);	 // criando o objeto da classe chamado 'lcd' e passando os parâmetro de configuração

byte coracao[8]={B00000, B01010, B10101, B10001, B01010, B00100, B00000, B00000};	// carácteres que formam um 'CORAÇÃO'

byte bateriaL[8]={B01110, B11011, B10001, B10001, B10001, B10001, B10001, B11111};		// carácteres que formam uma bateria 'LOW'

byte bateriaM[8]={B01110,B11011,B10001,B10001,B11111,B11111,B11111,B11111};		// carácteres que formam uma bateria 'MEDIAN'

byte bateriaF[8]={B01110,B11111,B11111,B11111,B11111,B11111,B11111,B11111};			// carácteres que formam uma bateria 'FULL'

void setup(){
  lcd.begin(16, 2);		// método 'begin' precisa dos parâmetros relacionados ao tamanho do display
  lcd.createChar(1, coracao);		// criando o carácter
  lcd.createChar(2, bateriaL);
  lcd.createChar(3, bateriaM);
  lcd.createChar(4, bateriaF);
}

void loop(){
  lcd.clear();
  lcd.setCursor(0, 0);		// a bateria estará na coluna '0' e linha de '0'
  lcd.write(2);		// imprimindo 'bateriaL'
  lcd.setCursor(0, 1);		// coração estará na coluna '0' e linha '1'
  lcd.write(1);		// fazendo impressão do coração com 'write'
  delay(3000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.write(3);		// imprimindo 'bateriaM'
  lcd.setCursor(0, 1);
  lcd.write(1);
  delay(3000);
  lcd.setCursor(0, 0);
  lcd.write(4);		// imprimindo 'bateriaF'
  lcd.setCursor(0, 1);
  lcd.write(1);
  delay(3000);
  
}