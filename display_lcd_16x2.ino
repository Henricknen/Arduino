#include <LiquidCrystal.h>		// importando biblioteca 'LiquidCrystal.h'

LiquidCrystal lcd(7, 6, 5, 4,3, 2);	 // criando o objeto da classe chamado 'lcd' e passando os parâmetro de configuração

void setup(){
  lcd.begin(16, 2);		// método 'begin' precisa dos parâmetros relacionados ao tamanho do display
  lcd.clear();	
    
}

void loop(){
  lcd.setCursor(0,0);		// 'setCursor' posiçiona em qual linha e coluna vai iniçiar
  lcd.print("Luis Henrique s f");
  lcd.setCursor(4,1);
  lcd.print("Arduino");		// o que será escrito apartir da colna 4 e linha 1 do display
  delay(3000);
  
  for(int pos = 0; pos < 3; pos++) {		// vai chamar 'scrollDisplayLeft' 3 vezes
    lcd.scrollDisplayLeft();	// vai dar uma animação de deslocamento para esquerda
    delay(100);
  }
  
  for(int pos = 0; pos < 6; pos++) {
    lcd.scrollDisplayRight();	// vai dar uma animação de deslocamento para direita
    delay(100);
  }
  
  for(int pos = 0; pos < 3; pos++) {		// volta para o ponto de origem
    lcd.scrollDisplayLeft();	
    delay(100);
  }
  delay(1000);
  lcd.noDisplay();		// vai desligar o 'display'
  delay(500);
  lcd.display();		// após meio segundos vai ligar o 'display' novamente
  delay(500);
  lcd.noDisplay();
  delay(500);
  lcd.display();
  delay(500);
  lcd.noDisplay();
  delay(500);
  lcd.display();
  delay(500);


  
  
  
  
  
  
  
  
  
}