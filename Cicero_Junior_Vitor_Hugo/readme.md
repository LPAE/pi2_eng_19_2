
# Projeto Integrador 2 2019_2

Instituto Federal de Educação, Ciência e Tecnologia de Santa Catarina - Câmpus Florianópolis

Departamento Acadêmico de Eletrônica

Curso de Engenharia Eletrônica

Alunos:

Cícero Eduardo Dick Junior

Vitor Hugo Cardoso

## Sumário

1. [Introdução](#Introdução)
2. [Concepção](#Concepção)
3. [Design](#Design)
4. [Implementação](#Implementação)
5. [Operação](#Operação)
6. [Referências](#Referências)

## Introdução

### Indústria 4.0

O conceito de indústria 4.0 surgiu em 2011 e vem se tornando cada vez mais popular nos meios de produção mundiais. Também chamado de ‘’Quarta Revolução Industrial’’, a proposta é criar fábricas inteligentes a partir dos sistemas cyber-físicos, da internet das coisas e de tecnologias inovadoras. Como resultado, espera-se criar formas de produção mais eficientes, autônomas, e customizáveis a gosto dos compradores.

Os princípios que regem a indústria 4.0, como citados a cima, são a internet das coisas e os sistemas cyber-físicos. A internet das coisas significa a comunicação entre as máquinas, permitindo que elas troquem informações entre si e tomem decisões á partir de simulações. Os sistemas cyber-físicos são responsáveis pelas simulações e pelo controle do ambiente á partir de sensores.

Essa nova organização permite que os clientes tenham mais flexibilidade de escolha nos produtos que irão adquirir. Além disso, permite melhor controle dos processos dentro de fábrica, fazendo com que recursos sejam utilizados de forma otimizada e que um alto padrão de qualidade seja mantido.

O mercado de trabalho também está sendo impactado pela indústria 4.0. A busca por sistemas cyber-físicos mais sofisticados e pessoas habilitadas para administrar os novos meios de produção exigem trabalhadores mais especializados e com maior conhecimento técnico.

Com todos os benefícios que ela proporciona, pode-se esperar que a indústria 4.0 seja dominante no futuro, mudando de vez o mercado e os meios de produção mundiais.

## Concepção

Este projeto visa resolver o problema do controle de uma fechadura eletrônica de modo a controlar acionamento, sensores, chaves de acesso, acesso remoto e comunicação com o usuário.

O acionamento poderá ser realizado através de 4 modos diferentes, sendo eles, conexão via [wi-fi](#Wi-fi) e [bluetooth](#Bluetooth), [teclado matricial](#Teclado) e [Radiofrequência](#Radiofrequência). Desse modo dando uma maior liberdade para os usuários manipularem a fechadura da maneira que melhor convir, aumentando sua eficiência.

Para uma maior interação do usuário com o sistema de controle de acesso, o sistema terá 3 LEDs e um [display](#Display) que através de textos e sinais luminosos irão informar ao usuário o status do sistema e da fechadura. 

### Wi-fi

Utilizando um módulo wi-fi será possível que o usuário se comunique por meio de aplicativo com a tranca, permitindo seu acionamento via internet de onde estiver.

### Bluetooth

A tecnologia bluetooth vai somar junto ao wi-fi, dando ao usuário outra alternativa para acionar a tranca através do celular. Assim, mesmo sem acesso à internet, o usuário poderá abrir a fechadura tranquilamente com seu celular ou outro dispositivo móvel.

### Teclado

Um teclado é necessário para que a tranca tenha uma forma mais simples e acessível para ser ativada, por meio de uma senha configurada pelo próprio usuário. A senha pode ser compartilhada pelo responsável diretamente com aqueles que deseja autorizar o acesso a tranca, facilitando para o emprego da fechadura em salas de empresas ou instituições de ensino.

### Radiofrequência

A senha é uma ótima forma de garantir acesso mais direto para a tranca, mas a tecnologia de radiofrequência é ainda melhor. Utilizando apenas um cartão cadastrado o usuário poderá ativar a fechadura.

### Display

Desejamos que a que a fechadura tenha uma interface otimizada para facilitar a comunicação com o usuário. Utilizando um display gráfico, é possível exibir o status do sistema de forma clara e objetiva.

## Design

Sabemos quais tecnologias vamos adotar para nosso projeto. É necessário agora nos apropriarmos dos dispositivos que melhor se adaptam para o nosso objetivo final. Desenvolvendo o desenho esquemático e croqui, podemos definir melhor os parâmetros e requisitos mais importantes para estes dispositivos a fim de obter o resultado ideal.
![Croqui](https://github.com/LPAE/pi2_eng_19_2/blob/master/Cicero_Junior_Vitor_Hugo/Img/Croqui_bb.png)

| Tecnologias      | Dispositivos           |
| -----------------|:----------------------:|
| Wi-Fi            | esp8266-01             |
| Bluetooth        | HC-05                  |
| Radiofrequência  | RFID RDM6300 125KHz    |
| Display          | LCD 2.4"TFT - ILI9341  |
| Microcontrolador | Arduino Mega 2560 Rev3 |
| Sinalização      | Buzzer 5V              |
| Acionamento      | Relé 5V                |

1. O módulo wi-fi esp8266-01 é o dispositivo ideal para o projeto, pois, sua conexão com a internet pode ser feita via wi-fi facilitando a sua instalação e portabilidade.

2. O display gráfico escolhido também possui tecnologia touchscreen, dessa forma, ele será usado como display e teclado em nosso projeto.

3. Entre as opções recomendadas para o projeto, o microcontrolador Arduino Mega mostrou-se a melhor opção devido ao grande número de portas de entrada e saída.

## Implementação

A fase de implementação é onde desenvolvemos o protótipo do projeto afim de verificar seu funcionamento na prática, utilizando das escolhas feitas nas fases anteriores como base. Assim, como já temos o hardware necessário e já verificamos como devemos integrá-los, devemos agora nos concentrar principalmente na programação e interface com o usuário. 

Inicialmente estudamos cada dispositivo separadamente, entendendo seu funcionamento e programação para, posteriormente, configurá-los como uma unidade. Possibilitar o funcionamento simultâneo de todos esses elementos foi a parte mais desafiadora. O resultado de nosso código está apresentado abaixo:

```
#include <Adafruit_GFX.h>
#include <MCUFRIEND_kbv.h>
#include <TouchScreen.h>
#include "WiFiEsp.h"
#include <RDM6300.h>

#define TAMANHOMAXSENHA 9
#define MINPRESSURE 300
#define MAXPRESSURE 2000
#define PRETO   0x0000
#define VERMELHO     0xF800
#define VERDE   0x07E0
#define BRANCO   0xFFFF

#define XP 6
#define XM A2
#define YP A1
#define YM 7

#define TS_LEFT 170
#define TS_RT 901
#define TS_TOP 932
#define TS_BOT  159

#define fechadura 10

TouchScreen ts = TouchScreen(XP, YP, XM, YM, 300);
Adafruit_GFX_Button botoes[12];
MCUFRIEND_kbv tft;

bool pressionado = false;
int posX;
int posY;
String senha = "";
String SENHAVALIDA = "01234";

// FIM DISPLAY
// INICIO WIFI
char ssid[] = "Vitor"; //VARIÁVEL QUE ARMAZENA O NOME DA REDE SEM FIO
char pass[] = "1234567890";//VARIÁVEL QUE ARMAZENA A SENHA DA REDE SEM FIO

int status = WL_IDLE_STATUS; //STATUS TEMPORÁRIO ATRIBUÍDO QUANDO O WIFI É INICIALIZADO E PERMANECE ATIVO
//ATÉ QUE O NÚMERO DE TENTATIVAS EXPIRE (RESULTANDO EM WL_NO_SHIELD) OU QUE UMA CONEXÃO SEJA ESTABELECIDA
//(RESULTANDO EM WL_CONNECTED)

WiFiEspServer server(80); //CONEXÃO REALIZADA NA PORTA 80

RingBuffer buf(8); //BUFFER PARA AUMENTAR A VELOCIDADE E REDUZIR A ALOCAÇÃO DE MEMÓRIA
// FIM WIFI
// RFID
uint8_t TAG[6]; // used for read comparisons
uint8_t A[6] = {0,114,8,218,45,141};

RDM6300 RDM6300(TAG);
//FIM RFID

bool obterToque(void){
    TSPoint p = ts.getPoint();
    pinMode(YP, OUTPUT);      
    pinMode(XM, OUTPUT);
    digitalWrite(YP, HIGH);   
    digitalWrite(XM, HIGH);
    bool pressed = (p.z > MINPRESSURE);
    if (pressed) {
        posX = map(p.y, TS_LEFT, TS_RT, 0, 320); 
        posY = map(p.x, TS_TOP, TS_BOT , 0, 240);
        return true;
    }
    return false; 
}



void setup() {
  pinMode(fechadura, OUTPUT); // Declara fechadura como OUTPUT
  digitalWrite(fechadura, HIGH);
  pinMode(11,OUTPUT); //Pino do buzzer

  // DISPLAY
  uint16_t ID = tft.readID();
  tft.begin(ID);
  tft.setRotation(1);
  iniciando ();
  //FIM DISPLAY
  //WIFI
  Serial3.begin(9600); //INICIALIZA A SERIAL PARA O ESP8266
  WiFi.init(&Serial3); //INICIALIZA A COMUNICAÇÃO SERIAL COM O ESP8266
  WiFi.config(IPAddress(192,168,43,110)); //COLOQUE UMA FAIXA DE IP DISPONÍVEL DO SEU ROTEADOR

  //INÍCIO - VERIFICA SE O ESP8266 ESTÁ CONECTADO AO ARDUINO, CONECTA A REDE SEM FIO E INICIA O WEBSERVER
  if(WiFi.status() == WL_NO_SHIELD){
    while (true);
  }
  while(status != WL_CONNECTED){
    status = WiFi.begin(ssid, pass);
  }
  server.begin(); //FIM - VERIFICA SE O ESP8266 ESTÁ CONECTADO AO ARDUINO, CONECTA A REDE SEM FIO E INICIA O WEBSERVER
  // FIM WIFI
  // RFID
   Serial2.begin(9600);
  //FIM RFID
  // bluetooth
  Serial1.begin(9600);     // Taxa de transmissão do Módulo
  //fim bluetooth
  telaInicial();
}

void iniciando (){
  tft.fillScreen(PRETO);
  tft.setCursor(10,100);
  tft.setTextColor(VERMELHO);
  tft.setTextSize(3);
  tft.print("INICIANDO SISTEMA");
}

void telaInicial(){
  senha = "";
  tft.fillScreen(PRETO);
  botoes[0].initButton(&tft,  60, 100, 30, 40, BRANCO, VERDE, PRETO, "1", 2);
  botoes[1].initButton(&tft, 110, 100, 30, 40, BRANCO, VERDE, PRETO, "2", 2);
  botoes[2].initButton(&tft, 160, 100, 30, 40, BRANCO, VERDE, PRETO, "3", 2);
  botoes[3].initButton(&tft, 210, 100, 30, 40, BRANCO, VERDE, PRETO, "4", 2);
  botoes[4].initButton(&tft, 260, 100, 30, 40, BRANCO, VERDE, PRETO, "5", 2);
  botoes[5].initButton(&tft, 60,  150, 30, 40, BRANCO, VERDE, PRETO, "6", 2);
  botoes[6].initButton(&tft, 110, 150, 30, 40, BRANCO, VERDE, PRETO, "7", 2);
  botoes[7].initButton(&tft, 160, 150, 30, 40, BRANCO, VERDE, PRETO, "8", 2);
  botoes[8].initButton(&tft, 210, 150, 30, 40, BRANCO, VERDE, PRETO, "9", 2);
  botoes[9].initButton(&tft, 260, 150, 30, 40, BRANCO, VERDE, PRETO, "0", 2);
  botoes[10].initButton(&tft, 85, 200, 80, 40, BRANCO, VERDE, PRETO, "Acesso", 2);
  botoes[11].initButton(&tft, 235, 200, 80, 40, BRANCO, VERDE, PRETO, "Apagar", 2);

  for (int i=0; i<12; i++){
    botoes[i].drawButton(false);
  }
  escreveSenha();
  
}

void TeclaPressionada(bool teclaTocada){
  for (int i=0; i<12; i++){
    botoes[i].press(teclaTocada && botoes[i].contains(posX,posY));
  }
  checkPressedButton();

}

void checkPressedButton(){
  for (int i=0; i<12; i++){
    if (botoes[i].justPressed()){
      checkPressed(i);
    }
  }
}

void esperaSoltar(){
  while (obterToque()){
    delayMicroseconds(50);
  }

}

void escreveSenha(){
  tft.fillRect(70, 30, 190, 30, BRANCO);
  tft.setCursor(74,35); 
  tft.setTextColor(PRETO); 
  tft.setTextSize(3);
  tft.print(senha+"_"); 
}


void apagarUltimocaractere(){
  if (senha.length()>0){
    senha.remove (senha.length () - 1);
  }
}
void checkPressed(int button){
    botoes[button].drawButton(true);
    esperaSoltar();
    botoes[button].drawButton();
    if(senha.length()<TAMANHOMAXSENHA || button == 10 || button == 11){
    switch (button){
        case 0:
          senha = senha + "1";
        break;
        case 1:
          senha = senha + "2";
        break;
        case 2:
          senha = senha + "3";
        break;
        case 3:
          senha = senha + "4";        
        break;
        case 4:
          senha = senha + "5";
        break; 
        case 5:
          senha = senha + "6";
        break;
        case 6:
          senha = senha + "7";
        break;
        case 7:
          senha = senha + "8";
        break;
        case 8:
          senha = senha + "9";
        break;
        case 9:
          senha = senha + "0";
        break;
        case 10:
        validarAcesso();
        break; 
        case 11:
        apagarUltimocaractere();
        break;  
    }
    escreveSenha();
    }
}

void validarAcesso(){

  if (senha == SENHAVALIDA){
     Acessoliberado ();
  }
  else{ // Caso contrário
     Acessonegado ();
  }
  
}

void loop() {
  //DISPLAY
  bool toque = obterToque();
  TeclaPressionada(toque);
  //FIM DISPLAY
  //WIFI
  WiFiEspClient client = server.available(); //ATENDE AS SOLICITAÇÕES DO CLIENTE

  if (client) { //SE CLIENTE TENTAR SE CONECTAR, FAZ
    buf.init(); //INICIALIZA O BUFFER
    while (client.connected()){ //ENQUANTO O CLIENTE ESTIVER CONECTADO, FAZ
      if(client.available()){ //SE EXISTIR REQUISIÇÃO DO CLIENTE, FAZ
        char c = client.read(); //LÊ A REQUISIÇÃO DO CLIENTE
        buf.push(c); //BUFFER ARMAZENA A REQUISIÇÃO

        //IDENTIFICA O FIM DA REQUISIÇÃO HTTP E ENVIA UMA RESPOSTA
        if(buf.endsWith("\r\n\r\n")) {
          sendHttpResponse(client);
         break;
        }
        if(buf.endsWith("GET /H")){ //SE O PARÂMETRO DA REQUISIÇÃO VINDO POR GET FOR IGUAL A "H", FAZ 
          Acessoliberado ();
        }
      }
   }
    client.stop(); //FINALIZA A REQUISIÇÃO HTTP E DESCONECTA O CLIENTE
  }
  //FIM WIFI
  //RFID
  while (Serial2.available() > 0){  //Aguarda a aproximacao da tag RFID  
    uint8_t c = Serial2.read();
    if (RDM6300.decode(c)){
      if (A[0] == TAG[0] && A[1] == TAG[1] && A[2] == TAG[2] && A[3] == TAG[3] && A[4] == TAG[4] && A[5] == TAG[5]){
        Acessoliberado ();
      } else Acessonegado ();
      delay(1000);
      TAG[3] = "0";
    }
  }
  //FIM RFID
  // BLUETOOTH
 //Armazena os valores de leitura de HC05 na variável readBluetooth
  int readBluetooth = Serial1.read();

  if(readBluetooth == 1){ // De acordo com o valor armazenado em readBluetooth
    Acessoliberado();
  }
  //FIM BLUETOOTH
}

void AbreFechadura (){
  digitalWrite(fechadura, LOW); //ACIONA RELÉ PARA ACIONAR FECHADURA
  delay (10); // 10 ms acionado pra abrir fechadura
  digitalWrite(fechadura, HIGH); 
}

void Acessoliberado (){

  tone(11,2000,400);
  tft.fillScreen(PRETO);
  tft.setCursor(10,100);
  tft.setTextColor(VERDE);
  tft.setTextSize(3);
  tft.print("Acesso Autorizado");
  AbreFechadura();
  delay(3000);
  telaInicial();
}
void Acessonegado (){

  tone(11,200,400);
  tft.fillScreen(PRETO);
  tft.setCursor(40,100);
  tft.setTextColor(VERMELHO); 
  tft.setTextSize(3); 
  tft.print("Acesso Negado"); 
  delay(3000); 
  telaInicial();
}

//MÉTODO DE RESPOSTA A REQUISIÇÃO HTTP DO CLIENTE
void sendHttpResponse(WiFiEspClient client){
  client.println("HTTP/1.1 200 OK"); //ESCREVE PARA O CLIENTE A VERSÃO DO HTTP
  client.println("Content-Type: text/html"); //ESCREVE PARA O CLIENTE O TIPO DE CONTEÚDO(texto/html)
  client.println("");
  client.println("<!DOCTYPE HTML>"); //INFORMA AO NAVEGADOR A ESPECIFICAÇÃO DO HTML
  client.println("<html>"); //ABRE A TAG "html"
  client.println("<head>"); //ABRE A TAG "head"
  client.println("<link rel='stylesheet' type='text/css' href='http://blogmasterwalkershop.com.br/arquivos/artigos/sub_wifi/webpagecss.css' />"); //REFERENCIA AO ARQUIVO CSS (FOLHAS DE ESTILO)
  client.println("<title>Abertura remota da fechadura</title>"); //ESCREVE O TEXTO NA PÁGINA
  client.println("</head>"); //FECHA A TAG "head"
  
  //AS LINHAS ABAIXO CRIAM A PÁGINA HTML
  client.println("<body>"); //ABRE A TAG "body"
  client.println("<p style='line-height:2'><font>Abertura remota da Fechadura</font></p>"); //ESCREVE O TEXTO NA PÁGINA
  
  client.println("<a href=\"/H\">Abrir Fechadura</a>"); //COMANDO PARA ACENDER O LED (PASSA O PARÂMETRO /H)
  
  client.println("<hr />"); //TAG HTML QUE CRIA UMA LINHA NA PÁGINA
  client.println("<hr />"); //TAG HTML QUE CRIA UMA LINHA NA PÁGINA
  client.println("</body>"); //FECHA A TAG "body"
  client.println("</html>"); //FECHA A TAG "html"
  delay(1); //INTERVALO DE 1 MILISSEGUNDO
}

```

O acesso via bluetooth exigiu a criação de um aplicativo para celulares. A abordagem escolhida para a criação do app, foi o uso da ferramenta *MIT App Inventor 2*. Por conta da simplicidade da ferramenta, esta etapa pode ser concluída com facilidade e rapidez e este foi o resultado:
### Interface do APP

<img src="https://github.com/LPAE/pi2_eng_19_2/blob/master/Cicero_Junior_Vitor_Hugo/Img/Interface_App_1.png" width="195" height="348"/><img src="https://github.com/LPAE/pi2_eng_19_2/blob/master/Cicero_Junior_Vitor_Hugo/Img/Interface_App_2.png" width="195" height="348"/>

### Programação do APP

A programação da ferramenta App Inventor é feita por meio dos blocos apresentados abaixo:

![](https://github.com/LPAE/pi2_eng_19_2/blob/master/Cicero_Junior_Vitor_Hugo/Img/App_prog_block_1.JPG)

O primeiro bloco é responsável pela tela de login, feita de forma bem simplificada. A ideia inicial era implementar uma ferramenta para gerar novas senhas e guardar em um banco de dados, mas não foi possível desenvolvê-la a tempo, por isso, escolhemos deixar o login e senha únicos e salvos dentro do app.

![](https://github.com/LPAE/pi2_eng_19_2/blob/master/Cicero_Junior_Vitor_Hugo/Img/App_prog_block_2.JPG)

O segundo bloco lida com a conexão do bluetooth e também com a comunicação entre o celular e o arduino para requisitar o acionamento da fechadura.

## Operação

Após a finalização do protótipo, criamos uma *case* capaz de comportar nosso projeto. O modelo escolhido foi uma caixa de acrílico feita sobmedida para os dispositivos utilizados no projeto. Ela possui 12cm de comprimento, 7cm de largura, 5cm de altura e conta com entrada para alimentação do arduino, entrada e saída de fios para o controle da fechadura e com um espaço específico para o display.

## Referências
