/* ******* Controle de acesso por senha  *******
   
   Criado por: Carolina de Farias e Luiz Gustavo Erthal
   Rev.: 03
   Data: 11.12.2019



   Guia de conexão:

   TECLADO 
   Arduino:
   LINHA 1 TECLADO: Pino Digital 11
   LINHA 2 TECLADO: Pino Digital 10
   LINHA 3 TECLADO: Pino Digital 9
   LINHA 4 TECLADO: Pino Digital 8

   COLUNA 1 TECLADO: Pino Digital 7
   COLUNA 2 TECLADO: Pino Digital 6
   COLUNA 3 TECLADO: Pino Digital 5
   COLUNA 4 TECLADO: Pino Digital 4
   
   SINALIZAÇÃO
   LED VERMELHO: Pino Digital 12
   LED VERDE: Pino Digital 13
   BUZZER: Pino Digital 2
   MÓDULO RELÊ: Pino Digital 3 (na simulação do Tinkercad temos um led azul no lugar do módulo relê, quando ligamos o módulo não precisamos usar o resistor)7

   RFID 
   RST_PIN: Pino Digital 49
   MISO_PIN: Pino Digital 50
   MOSI_PIN: Pino Digital 51
   SCK_PIN: Pino Digital 52
   SDA_PIN: Pino Digital 53

    BLUETOOTH:
   TX: RX ARD
   RX: TX ARD
   VCC: 5V ARD
   GND: GND ARD

  
    LCD:
   SDA: SDA 20 ARDUINO
   SCL: SCL 21 ARDUINO
   VCC: 5V ARDUINO
   GND: GND ARDUINO
 
  

      
 *************************** */

// Inclusão da biblioteca do módulo teclado
#include <Keypad.h>

#include <SPI.h>
#include <MFRC522.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define SS_PIN 53
#define RST_PIN 49

LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3,POSITIVE );
 
char st[20];

/******** DEFINIÇÃO DE SENHA *********** */

char* senha = "123  ";  // defina a senha aqui, ela deve conter seis dígitos

/******** CONFIGURAÇÕES TECLADO *********** */

const byte LINHAS = 4; // quantidade de linhas do teclado
const byte COLUNAS = 4; // quantidade de colunas do teclado

char digitos[LINHAS][COLUNAS] = {
{'1','2','3','A'},
{'4','5','6','B'},
{'7','8','9','C'},
{'*','0','#','D'}}; // todos os caracteres do teclado v 

byte pinosLinha[LINHAS] = { 11, 10, 9, 8 }; // pinos de conexão das linhas no arduino 
byte pinosColuna[COLUNAS] = { 7, 6, 5, 4 }; // pinos de conexão das colunas no arduino 

Keypad keypad = Keypad( makeKeymap(digitos), pinosLinha, pinosColuna, LINHAS, COLUNAS ); // objeto de leitura das teclas com os parâmetros lidos

/******** VARIÁVEIS AUXILIARES *********** */

int position = 0;
int ledVermelho = 12;
int ledVerde = 13;
int releFechadura = 3; //led azul substituir por módulo relé
int buzzer = 2 ;
int tempoBuzz = 50;
int tempoAberto = 1000;
int erro = 0;

/*************************** */

String IDtag = ""; //Variável que armazenará o ID da Tag
bool Permitido = false; //Variável que verifica a permissão 
 
//Vetor responsável por armazenar os ID's das Tag's cadastradas
String TagsCadastradas[] = {"9b52c31b", 
                            "2bcf791b",
                            "ID_3"};
 
MFRC522 LeitorRFID(SS_PIN, RST_PIN);    // Cria uma nova instância para o leitor e passa os pinos como parâmetro
/*************************** */

char buf;

void setup()  //Main arduino
{ 
  
estadoPorta(true); // diz se a porta está ou não trancada


pinMode(ledVermelho,OUTPUT); 
pinMode(ledVerde,OUTPUT);
pinMode(releFechadura,OUTPUT);
pinMode(buzzer,OUTPUT); // define os pinos de saída do arduino

 Serial.begin(9600);             // Inicializa a comunicação Serial
 SPI.begin();                    // Inicializa comunicacao SPI 
 LeitorRFID.PCD_Init();          // Inicializa o leitor RFID
 Serial.println("Aproxime a sua tag");
 Serial.println();               
 lcd.begin(16,2);                // Define o número de colunas e linhas do LCD
 lcd.setBacklight(HIGH);
 mensageminicial();              // Chama a funcão com a mensagem inicial 

   //Define o pino 37 como saida
  pinMode(ledVerde, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  while(Serial.available() > 0)
  {
    buf = Serial.read();
    //Caso seja recebido o caracter L, acende o led
    if (buf == 'L')
    {  
      digitalWrite(ledVermelho, LOW);
      digitalWrite(ledVerde, HIGH);
      digitalWrite(buzzer, HIGH);
      delay(tempoBuzz);
      digitalWrite(buzzer, LOW); // acionamento do buzzer ao apertar qualquer tecla

      digitalWrite(releFechadura, HIGH);
      delay(200);
      digitalWrite(releFechadura, LOW);
      digitalWrite(ledVermelho, HIGH);
      digitalWrite(ledVerde, LOW);
      lcd.clear();
    lcd.setCursor(0,0);                 // Primeira frase na coluna 0 e linha 0
    lcd.print("Ola usuario");
    lcd.setCursor(0,1);                 // Segunda frase na coluna 0 e linha 1
    lcd.print("Acesso liberado!");
    mensageminicial();
     
       
    }
    //Caso seja recebido o caracter D, apaga o led
     if (buf == 'D')
    {
      digitalWrite(ledVerde, LOW);
       digitalWrite(ledVermelho, HIGH);
     lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Ola usuario");
    lcd.setCursor(0,1);
    lcd.print("Acesso negado!");
    delay(3000);
    mensageminicial(); 
    }
  }
  
  Leitura();  //Chama a função responsável por fazer a leitura das Tag's

char digito = keypad.getKey(); // faz a leitura das teclas

Serial.print(digito);

if (digito !=0)
{
  digitalWrite(buzzer, HIGH);
  delay(tempoBuzz);
  digitalWrite(buzzer, LOW); // acionamento do buzzer ao apertar qualquer tecla



 

if (digito == senha[position]) // verifica se o dígito apertado corresponde ao equivalente da senha
{
position ++;


}
else { // retorna a leitura para a primeira posição de leitura da senha quando o dígito apertado não corresponde ao correto 
position = 0;
erro++;
if( erro ==6 ){
   tone(buzzer,55);

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Ola usuario");
    lcd.setCursor(0,1);
    lcd.print("Acesso negado!");
     
    delay(1000);   

     mensageminicial(); 
    //Desligando o buzzer      
    noTone(buzzer);
    erro = 0;
   
  
}




}
if (position == 3) // altera estado da porta  
{
estadoPorta(false);
}


delay(100);


}



}




//trancado=0  
void estadoPorta(int trancado)
{
  
if (trancado) // trancamento da porta
{
digitalWrite(ledVermelho, HIGH);
digitalWrite(ledVerde, LOW);
digitalWrite(releFechadura, LOW); // importante: para uso com rele de acionamento da fechadura LOW deve ser subsstituído por HIGH

}

else // abertura da porta
{
 

digitalWrite(ledVermelho, LOW);
digitalWrite(ledVerde, HIGH);
 digitalWrite(buzzer, HIGH);
delay(tempoBuzz*10);
 lcd.clear();
    lcd.setCursor(0,0);                 // Primeira frase na coluna 0 e linha 0
    lcd.print("Ola usuario");
    lcd.setCursor(0,1);                 // Segunda frase na coluna 0 e linha 1
    lcd.print("Acesso liberado!");     
    digitalWrite(releFechadura, HIGH); // importante: para uso com rele de acionamento da fechadura HIGH deve ser subsstituído por LOW
    delay(200);
    digitalWrite(releFechadura,LOW);


digitalWrite(buzzer, LOW); // buzzer indica o acerto da senha 
    

delay(tempoAberto);
mensageminicial();
//position = 0;

estadoPorta(true); // tranca a porta novamente 
}

}



void Leitura(){
 
        IDtag = ""; //Inicialmente IDtag deve estar vazia.
        
        // Verifica se existe uma Tag presente
        if ( !LeitorRFID.PICC_IsNewCardPresent() || !LeitorRFID.PICC_ReadCardSerial() ) {
            delay(50);
            return;
        }
        
        // Pega o ID da Tag através da função LeitorRFID.uid e Armazena o ID na variável IDtag
        for (byte i = 0; i < LeitorRFID.uid.size; i++) {        
            IDtag.concat(String(LeitorRFID.uid.uidByte[i], HEX));
        }        
        
        //Compara o valor do ID lido com os IDs armazenados no vetor TagsCadastradas[]
        for (int i = 0; i < (sizeof(TagsCadastradas)/sizeof(String)); i++) {
          if(  IDtag.equalsIgnoreCase(TagsCadastradas[i])  ){
              Permitido = true; //Variável Permitido assume valor verdadeiro caso o ID Lido esteja cadastrado
          }
        }       
 
        if(Permitido == true) {
          acessoLiberado(); //Se a variável Permitido for verdadeira será chamada a função acessoLiberado()        
        }
      else {acessoNegado(); //Se não será chamada a função acessoNegado()
      }
 
        delay(2000); //aguarda 2 segundos para efetuar uma nova leitura
}
 
void acessoLiberado(){
  Serial.println("Tag Cadastrada: " + IDtag); //Exibe a mensagem "Tag Cadastrada" e o ID da tag não cadastrada
    efeitoPermitido();  //Chama a função efeitoPermitido()
    Permitido = false;  //Seta a variável Permitido como false novamente
    
}
 
void acessoNegado(){
  Serial.println("Tag NAO Cadastrada: " + IDtag); //Exibe a mensagem "Tag NAO Cadastrada" e o ID da tag cadastrada
  efeitoNegado(); //Chama a função efeitoNegado()
}
 
void efeitoPermitido(){  
  int qtd_bips = 2; //definindo a quantidade de bips
  for(int j=0; j<qtd_bips; j++){
    digitalWrite(buzzer, HIGH);
    digitalWrite(releFechadura,HIGH);
    delay(200);
    digitalWrite(releFechadura, LOW);
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledVermelho, LOW);   
    delay(tempoBuzz*10);
    lcd.clear();
    lcd.setCursor(0,0);                 // Primeira frase na coluna 0 e linha 0
    lcd.print("Ola usuario");
    lcd.setCursor(0,1);                 // Segunda frase na coluna 0 e linha 1
    lcd.print("Acesso liberado!");
    int a = 1;
   
    //Desligando o led verde.      
    digitalWrite(buzzer, LOW);
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledVermelho, HIGH);
    //delay(3000);
    digitalWrite(releFechadura, LOW);
    if(a == 1){
      mensageminicial();}
  
   
  }  
}
 
void efeitoNegado(){  
  int qtd_bips = 1;  //definindo a quantidade de bips
  for(int j=0; j<qtd_bips; j++){   
    //Ligando o buzzer com uma frequência de 500 hz e ligando o led vermelho.
    tone(buzzer,55);
    delay(1000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Ola usuario");
    lcd.setCursor(0,1);
    lcd.print("Acesso negado!");
    delay(3000);
    mensageminicial(); 
          noTone(buzzer);
    
    digitalWrite(releFechadura,LOW);
    digitalWrite(ledVermelho, HIGH);     
    delay(500);   
  }  
}

//nesta funcao o display LCD apresenta a sua mensagem inicial
void mensageminicial()
{
  lcd.clear();
  lcd.print("Aproxime o seu");
  lcd.setCursor(0,1);
  lcd.print("cartao do leitor");
}
