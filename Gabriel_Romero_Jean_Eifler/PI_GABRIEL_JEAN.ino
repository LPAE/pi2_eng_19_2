#include <Keypad.h> //BIBLIOTECA TECLADO
#include <SoftwareSerial.h> //BIBLIOTECA BLUETOOTH

//************ VARIÁVEIS ************//

char buf;
int position = 0;
int releFechadura = 7; //módulo relé
uint8_t buffer[14];
uint8_t* buffer_at;
uint8_t* buffer_end = buffer + sizeof(buffer);

String checksum;
boolean tagfound = false;

const char* senha = "159875";  // defina a senha aqui, ela deve conter seis dígitos

const byte LINHAS = 4; // quantidade de linhas do teclado
const byte COLUNAS = 4; // quantidade de colunas do teclado

char digitos[LINHAS][COLUNAS] = {
{'1','2','3','A'},
{'4','5','6','B'},
{'7','8','9','C'},
{'*','0','#','D'}}; // todos os caracteres do teclado


//*********** MAIN ARDUINO ***********//

void setup(){ 
         byte pinosLinha[LINHAS] = { 38, 40, 42, 44 }; // pinos de conexão das linhas do teclado no arduino 
         byte pinosColuna[COLUNAS] = { 46, 48, 50, 52 }; // pinos de conexão das colunas do teclado no arduino
         estadoPorta(true); // diz se a porta está ou não trancada
         pinMode(releFechadura,OUTPUT);
         pinMode(37, OUTPUT);
         Serial.begin(9600);             // Inicializa a comunicação Serial
         Serial1.begin(9600);            // Inicializa a comunicação Serial1, necessária para o módulo RFID
}

void loop(){
         RFID();     //Chama a função responsável por fazer a leitura das Tag's
         BT();       //Chama a função responsável por fazer a leitura do app
         TECLADO();  //Chama a função responsável por fazer a leitura do teclado matricial
}


//************ FECHADURA **************//

void estadoPorta(int trancado)
{
  if (trancado){ // trancamento da porta
  digitalWrite(releFechadura, LOW);
  }

  else{ // abertura da porta
  digitalWrite(releFechadura, HIGH);
  delay(100);
  digitalWrite(releFechadura, LOW);
  estadoPorta(true); // tranca a porta novamente 
  }
}

//************ TECLADO **************//

Keypad keypad = Keypad(makeKeymap(digitos), pinosLinha, pinosColuna, LINHAS, COLUNAS); // objeto de leitura das teclas com os parâmetros lidos

void TECLADO(){
        char digito = keypad.getKey(); // faz a leitura das teclas
        if (digito != 0){
            if(digito == '*'){
                position = 0;
            }
            
            if (digito == senha[position]){ // verifica se o dígito apertado corresponde ao equivalente da senha
                position ++;
            }
          
            else { // retorna a leitura para a primeira posição de leitura da senha quando o dígito apertado não corresponde ao correto 
                position = 0;
            }
          
            if (position == 6){ // altera estado da porta  
                estadoPorta(false);
            }
        }
}


//************ BLUETOOTH ************//

void BT(){
   if(Serial.available() > 0){
        buf = Serial.read();
        if (buf == 'L'){  // L significa o sinal para abrir a porta
            estadoPorta(false); // abre a porta
        }
    }
 }


//************ RFID RDM6300 ************//

void RFID(){
    if (Serial1.available()){
        delay(20);
        buffer_at = buffer;
 
        while ( buffer_at < buffer_end ){
            *buffer_at++ = Serial1.read();
        }
        tagfound = true;
        Serial1.end();
        Serial1.begin(9600);
    }
 
    if (tagfound){
        buffer_at = buffer;
        uint32_t result = 0;
 
        // Skip the preamble
        ++buffer_at;
        // Accumulate the checksum, starting with the first value
        uint8_t checksum = rfid_get_next();
        // We are looking for 4 more values
        int i = 4;
        while(i--){
            // Grab the next value
            uint8_t value = rfid_get_next();
            // Add it into the result
            result <<= 8;
            result |= value;
            // Xor it into the checksum
            checksum ^= value;
        }
        // Pull out the checksum from the data
        uint8_t data_checksum = rfid_get_next();

        if ( checksum == 171 ){ // 171 == identificação da tag
            estadoPorta(false); // abre a prota
        }
        tagfound = false;
    }
}
 
uint8_t rfid_get_next(void){
// sscanf needs a 2-byte space to put the result but we
// only need one byte.
         uint16_t hexresult;
// Working space to assemble each byte
         static char byte_chars[3];
// Pull out one byte from this position in the stream
         snprintf(byte_chars,3,"%c%c",buffer_at[0],buffer_at[1]);
         sscanf(byte_chars,"%x",&hexresult);
         buffer_at += 2;
         return static_cast<uint8_t>(hexresult);
}
