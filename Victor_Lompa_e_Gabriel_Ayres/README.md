Instituto Federal de Educação, Ciência e Tecnologia de Santa Catarina - Campus Florianópolis

Departamento Acadêmico de Eletrônica Curso de Engenharia Eletrônica

Projeto Integrador II

Alunos:

* Victor Lompa Schwider
* Gabriel Ayres Rodrigues

## Sumário

1. Introdução
2. Concepção
3. Design
4. Implementação
5. Operação
6. Referências

## Introdução 

O termo indústria 4.0 é de origem alemã e remete à chamada quarta revolução industrial. É caracterizada por novas tecnologias do mundo digital, que incrementam a digitalização já presente na indústria e têm o potencial de redefini-la. Ela representa uma mudança na maneira de viver, trabalhar e se relacionar, visando um maior alcance, rapidez e impacto. Leva o nome de quarta revolução visto que se encaminha para a automação total das indústrias.

O progresso em relação à última revolução industrial é definido pelas àreas da informação e computação. Um fator diferencial para as duas é o atual poder nos sistemas embarcados, que torna realidade o conceitos como a Internet das Coisas. Diante disso novas promessas de mercado surgem, resultando no crescimento de algunas indústrias enquanto outras tendem à obsolescência. 

Neste contexto de automação, buscar e implementar tecnologias que facilitem e agilizem tarefas pode ser fundamental para acompanhar as mudanças nos paradigmas tecnológicos. Pensando nisso, nosso projeto tem como objetivos integrar os conhecimentos adquiridos durante o curso com a industria 4.0. Para alcançar esses objetivos o projeto foi definido como o desenvolvimento de uma fechadura eletrônica e a implementação de diferentes tecnologias.

## Concepção 

A concepção é a etapa em que são definidos os requisitos do projeto e as possíveis propostas para satisfazê-los. A fechadura deve apresentar para o usuário uma resposta visual e sonora da operação. Deve ser o controlada das três seguintes formas: Via computador, celular e diretamente na fechadura (sem o uso da chave). 

Para a interface são utilizados um display gráfico TFT (ILI9431) e um buzzer (sirene). O acesso com celular é feito com o módulo bluetooth (HC-05) e a partir do computador com o módulo ethernet (W5100). O acesso diretamente pela fechadura é feito usando o  TouchScreen do display TFT e também pelos TAGs cadastrados no módulo RFID RDM6300 (Módulo de identificação por radiofrequência).  Todos os módulos e componentes são controlados pela placa de prototipagem Arduino MEGA, sendo que essa e todos os acima citados foram disponibilizados pelo IFSC. 

Em parceria com a unidade curricular de Eletrônica 1 foram desenvolvidos circuitos eletrônicos para fazer algumas conexões do sistema — a conexão entre o Arduino e a própria fechadura, por exemplo. Essas são detalhadas na etapa seguinte.

## Design

![Design3](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/Esbo%C3%A7o%203.jpg)

O shield ethernet foi projetado para que pudesse ser conectado diretamente em cima do arduino portanto, na tentantiva de não tornar o projeto muito grande, montamos um esquemático que pudesse encaixar no espaço que não foi ultilizado pelo W5100 e assim aproveitar e planejar melhor o espaço e os pinos do arduino que temos disponível.

O display TFT, assim como o shield ethernet, foi projetado para se encaixar diretamente em cima do arduino e, no nosso caso, ele poderia ser encaixado em cima do ethernet pois usa os mesmo pinos porém, pensando no resultado final, analisamos a possibilidade de ultilizar jumpers para afastar o LCD do arduino e incliná-lo a uma angulação boa para que o usuário final possa digitar a senha de forma mais agradável.

Para armazenar e proteger todos os dispositivos e ligações elétricas e eletrônicas, desenvolvemos um compartimento com as medidas dos componentes do projeto. Assim, o projeto se torna de facil transporte e de maior segurança.

Em resumo, tudo que precisamos pode ser listado em uma tabela simples que vincula o objetivo a ser alcançado com a tecnologia implementada.

OBJETIVO | TECNOLOGIA | QUANTIDADE
---------|----------|---------
Segurança do Arduino| Octoacoplador | 1
Acesso Rápido | Sensor RFID | 1
Acesso com senha | Display TFT | 1 
Interface | Display TFT | 1
Sinalização | Buzzer | 1
Controle | Arduino Mega 2560 | 1
Acesso Remoto | Módulo Bluetooth | 1

## Implementação

O design do projeto nos possibilitou uma ideia mais nítida do projeto final em termos de conexão e dimensão do mesmo. Para nos auxiliar na hora 

Para que seja possível implementar estas tecnologias com o arduino e usá-las para este projeto, devemos entender o funcionamento de nossos componentes e aprender a programá-los.

### Buzzer - Sinalização

![Buzzer](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/Buzzer2.png)

É um dispositivo que emite um som contínuo quando alimentado com 5V. Em nosso caso, um de seus 2 (dois) pinos irá diretamente no GND e outro será alimentado por uma porta digital do arduino, nos dando a possibilidade de configurar se ele ficará ativo e por quanto tempo ele ficará ativo adicionando um delay no código.

### HC-05 - Módulo Bluetooth

![Hc-05](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/HC-05.png)

É um módulo feito para arduino e outros microprocessadores que faz conexão bluetooth por meio de portas seriais. Pode ser uma ótima forma de comunicação sem fio entre arduino e dispositivos que possuam bluetooth como computadores e celulares visto que pode enviar e receber informações com algumas linhas de código e por um preço acessível. 

Possui um total de 6 (seis) pinos mas, como usaremos ele apenas para enviar informações referentes à abertura e fechamento da porta e não para receber, usaremos 4 (quatro) desses pinos: Rx, Tx e os pinos de alimentação VCC e GND.

### 4N25 - Octoacoplador

![4N25](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/4N25.png) ![4N25.2](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/4N25.2.png)

Para isolar o circuito do arduino com portas que podem fornecer no máximo 50mA do circuito da fechadura que precisa de uma corrente mais alta, podendo drenar até 2.72A para abrir, usamos um Octoacoplador constituido de um diodo emissor de luz infravermelho e um fototransistor de silício NPN que receberá o o infravermelho e será polarizado assim que o diodo for alimentado com os 5V da porta digital que conectaremos do Arduino, acionando o circuito de alta corrente e abrindo a fechadura.

### RDM6300 - Leitor RFID

![RDM6300](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/RDM6300.jpg)

O Módulo RDM6300 faz a leitura de TAGs e cartões RFID na frequência de 125KHz ultilizando para a comunicação com os microprocessadores portas seriais. É alimentado com 5V, possibilitando que seja alimentado diretamente pelo arduino. 

Sua lógica de programação no arduino consiste basicamente em aguardar o recebimento de algum valor vindo do módulo, observar se o tamanho da informação recebida é consistente com o valor esperado de uma TAG 125KHz e decodificar o valor recebido para poder compará-lo com os valores aceitos para a abertura da porta.

### ILI9341 - Display LCD

![ILI9341](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/ILI9341.jpg)

O ILI9341 é um display pixels TFT (transístor de película fina) LCD (display de cristal líquido) para microprocessadores que possui Touchscreen e uma resolução 240x320 RGB. Apesar de o seu funcionamento ser um pouco mais complexo, sua programação é simples e, como foi projetado para microprocessadores como o arduino, seus pinos encaixam perfeitamente com as portas do arduino, facilitando sua instalação.

### W5100 - Shield Ethernet

![W5100](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/ETHERNET.jpg)

Este shield permite que o arduino se conecte via internet, fornecendo acesso à rede (IP) nos protocolos TCP ou UDP. Foi projetado para ser compatível em pinos com as versões mais tradicionais de arduino, incluindo o arduino MEGA que é o que nos interessa. Para programá-lo, diversos sites e softwares oferecem aplicativos já feitos pensando nestes módulos, o que facilita nosso trabalho em termos de linha de código. Não é preciso pensar em suas dimensões em termos de largura, apenas de altura visto que ele irá em cima do arduino e, usando um paquímetro, descobrimos que ele e o arduino conectados possuem 33 (trinta e três) milímetros de altura.

### Código - A programação

O código abaixo foi utilizado para o funcionamento de todos os módulos de nosso projeto. Dentro do código, alguns comentários descrevem o funcionameto do mesmo para auxiliar o leitor.

```
#include "Adafruit_GFX.h"
#include <SoftwareSerial.h>
#include <MCUFRIEND_kbv.h>
MCUFRIEND_kbv tft;
#include <TouchScreen.h>
int tecla;
char valorb;
int dig=0;
String tentativa;
String senha= String(44);
const int XP=6, XM=A2, YP=A1,YM=7;
const int TS_LEFT=907,TS_RT=136,TS_TOP=942,TS_BOT=139;
TouchScreen ts = TouchScreen(XP, YP, XM, YM, 300);
TSPoint tp;
boolean call = false;
#define MINPRESSURE 410
#define MAXPRESSURE 1200
#define PRETO       0x0000
#define AZUL        0x001F
#define VERMELHO    0xF800
#define VERDE       0x07E0
#define CIANO       0x07FF
#define MAGENTA     0xF81F
#define AMARELO     0xFFE0
#define BRANCO      0xFFFF
// display is 240x320 pixels
//RDM6300
const int BUFFER_SIZE = 14; // RFID DATA FRAME FORMAT: 1byte head (value: 2), 10byte data (2byte version + 8byte tag), 2byte checksum, 1byte tail (value: 3)
const int DATA_SIZE = 10; // 10byte data (2byte version + 8byte tag)
const int DATA_VERSION_SIZE = 2; // 2byte version (actual meaning of these two bytes may vary)
const int DATA_TAG_SIZE = 8; // 8byte tag
const int CHECKSUM_SIZE = 2; // 2byte checksum
SoftwareSerial ssrfid = SoftwareSerial(A12,A15); 
SoftwareSerial blue = SoftwareSerial(A13,A14);
uint8_t buffer[BUFFER_SIZE]; // used to store an incoming data frame 
int buffer_index = 0;
//

void abre(){ 
  pinMode(36,OUTPUT); // Esta função abre a porta (aciona o 4N25) e aciona o buzzer
  pinMode(42,OUTPUT);
  digitalWrite(36, HIGH);
  digitalWrite(42, HIGH);
  delay(30);
  digitalWrite(36, LOW);
  delay(1000);
  digitalWrite(42, LOW);
}

void setup (){
  uint16_t ID = tft.readID(); // Leitura do código de identificação do controlador
  tft.begin(ID); // Inicialização da tela
  homepage(); // Chamada da função responsável por renderizar o nosso painel de acesso 
  Serial.begin(9600); 
 ssrfid.begin(9600);
 blue.begin(9600);
 blue.listen();
}
void homepage() {
  tft.setRotation(1);
  tft.fillScreen(PRETO);
  tft.setCursor(132, 10);
  tft.setTextColor(VERDE);
  tft.setTextSize(3);
  tft.print("LPAE");
  tft.setCursor(21,35);
  tft.setTextColor(VERDE);
  tft.setTextSize(2);
  tft.print("Laboratorio de Pesquisa");
  tft.setCursor(25,55);
  tft.setTextColor(VERDE);
  tft.setTextSize(2);
  tft.print("Avancada em Eletronica");
  //tft.fillRect(140,100,45,45,VERMELHO); Usados para o teste do touch, explicado em void loop
  //tft.fillRect(185,100,45,45,VERDE);
  tft.setCursor(60,140);
  tft.setTextColor(AMARELO);
  tft.setTextSize(2);
  tft.print("Toque para digitar");
  tft.setCursor(125,165);
  tft.setTextColor(AMARELO);
  tft.setTextSize(2);
  tft.print("a senha");
  call=false;
  
}

/*void loop() //Esse é o loop de teste para o touch
{             //Para usá-lo, descomentar as duas linhas comentadas em homepage                   
  uint16_t xpos, ypos;  //screen coordinates
  tp = ts.getPoint();   //tp.x, tp.y are ADC values

  pinMode(XM, OUTPUT);
  pinMode(YP, OUTPUT);
  if (tp.z > MINPRESSURE && tp.z < MAXPRESSURE) {
  if ((tp.y>440 && tp.y<600) && (tp.x>440 && tp.x<600)){
      tft.fillScreen(VERMELHO);
  }else if ((tp.y>600 && tp.y<750) && (tp.x>440 && tp.x<600)) { 
      tft.fillScreen(VERDE);
  }else if ((tp.y>440 && tp.y<600) && (tp.x>280 && tp.x<430)){
      homepage();
  }
  }
}*/
void teclado(){
  call = true;
  tft.setRotation(1);
  tft.fillScreen(PRETO);
  tft.drawRect(30,16,260,45,BRANCO);
  tft.fillRect(80,70,40,40,VERMELHO);
  tft.fillRect(80,125,40,40,VERMELHO); 
  tft.fillRect(80,180,40,40,VERMELHO);
  tft.fillRect(140,70,40,40,VERMELHO);
  tft.fillRect(140,125,40,40,VERMELHO);
  tft.fillRect(140,180,40,40,VERMELHO);
  tft.fillRect(200,70,40,40,VERMELHO);
  tft.fillRect(200,125,40,40,VERMELHO);
  tft.fillRect(200,180,40,40,VERMELHO);
  tft.drawCircle(45,90,15,BRANCO);
  tft.drawCircle(275,90,15,BRANCO);
  tft.drawLine(267,82,283,98,VERMELHO);
  tft.drawLine(267,98,283,82,VERMELHO);
  tft.drawCircle(45,145,15,BRANCO);
  tft.setTextSize(4);
  tft.setTextColor(BRANCO);
  tft.setCursor(90,75);
  tft.print("1");
  tft.setCursor(150,75);
  tft.print("2");
  tft.setCursor(210,75);
  tft.print("3");
  tft.setCursor(90,130);
  tft.print("4");
  tft.setCursor(150,130);
  tft.print("5");
  tft.setCursor(210,130);
  tft.print("6");
  tft.setCursor(90,185);
  tft.print("7");
  tft.setCursor(150,185);
  tft.print("8");
  tft.setCursor(210,185);
  tft.print("9");
  
}
void boasvindas ()
{ 
  pinMode(53, OUTPUT);
  tft.setRotation(1);
  tft.fillScreen(PRETO);
  tft.setCursor(25,75);
  tft.setTextColor(VERDE);
  tft.setTextSize(4);
  tft.print("Boas-vindas");
  tft.setCursor(75,107);
  tft.print("ao LPAE");
  abre();
  delay(5000);
  homepage();
}
void loop(){
  valorb = blue.read();
  if(valorb == 'X'){
    boasvindas();
  }
  uint16_t xpos, ypos;  //screen coordinates
  tp = ts.getPoint();   //tp.x, tp.y are ADC values

  pinMode(XM, OUTPUT);
  pinMode(YP, OUTPUT);
  if ((tp.z > MINPRESSURE && tp.z < MAXPRESSURE) && call==false) {
  if ((tp.y>200 && tp.y<800) && (tp.x>280 && tp.x<430)){
      teclado();
  }
  }
  // COLUNAS (limites y) 320 420    477 575  620 700       755 795
  // LINHAS  (limites x) 600 700   430 540   245 340
  if ((tp.z > MINPRESSURE && tp.z < MAXPRESSURE) && call==true) {
  if (tp.x<700 && tp.x>600){
    if(tp.y<420 && tp.y>320){
      tecla = 1;
    }else if(tp.y<575 && tp.y>477){
      tecla = 2;
    }else if(tp.y<700 && tp.y>620){
      tecla = 3;
    }else if(tp.y<835 && tp.y>795){
      tecla=10;
      dig =5;
    }
  }else if (tp.x<540 && tp.x>430){
    if(tp.y<420 && tp.y>320){
      tecla = 4;
    }else if(tp.y<575 && tp.y>477){
      tecla = 5;
    }else if(tp.y<700 && tp.y>620){
      tecla = 6;
    }
  }else if (tp.x<340 && tp.x>245){
    if(tp.y<420 && tp.y>320){
      tecla = 7;
    }else if(tp.y<575 && tp.y>477){
      tecla = 8;
    }else if(tp.y<700 && tp.y>620){
      tecla = 9;
    }
  }
  }
   if ((tp.z > MINPRESSURE && tp.z < MAXPRESSURE) && (call==true && tecla>0)) { 
   tft.setCursor(32+23*dig,18);
   tft.setTextSize(4);
   tft.setTextColor(BRANCO);
   if(tecla<10){
   tft.print("#");
   }
   //tft.print(String(tecla)); // Printa as teclas, usado para teste do touch 
   tentativa=tentativa + String(tecla);
   dig=dig+1;
   if(dig==6){
    if(tentativa == senha){
    tft.fillCircle(45,90,14,VERDE);
    pinMode(52,OUTPUT);
    digitalWrite(52,HIGH);
    delay(1000);
    digitalWrite(52,LOW);
    dig=0;
    boasvindas();
   }else {
    tft.fillCircle(45,145,14,VERMELHO);
    delay(1000);
    tft.fillCircle(45,145,14,PRETO);
    tft.fillRect(32,18,254,40,PRETO);
    tft.setCursor(32,18);
    dig=0;
   }tentativa= '\0';
   }
   
   delay(300);
   tecla=0;
  }                                              // Fim do código do display, começo do código do RFID
   if (ssrfid.available() > 0){
    bool call_extract_tag = false;
    
    int ssvalue = ssrfid.read(); // read 
    if (ssvalue == -1) { // no data was read
      return;
    }
    if (ssvalue == 2) { // RDM630/RDM6300 found a tag => tag incoming 
      buffer_index = 0;
      pinMode(52,OUTPUT);
      digitalWrite(52,HIGH);
      delay(100);
      digitalWrite(52,LOW);
      boasvindas();
    } else if (ssvalue == 3) { // tag has been fully transmitted       
      call_extract_tag = true; // extract tag at the end of the function call
    }
    if (buffer_index >= BUFFER_SIZE) { // checking for a buffer overflow (It's very unlikely that an buffer overflow comes up!)
      Serial.println("Error: Buffer overflow detected!");
      return;
    }
    
    buffer[buffer_index++] = ssvalue; // everything is alright => copy current value to buffer
    if (call_extract_tag == true) {
      if (buffer_index == BUFFER_SIZE) {
        unsigned tag = extract_tag();
      } else { // something is wrong... start again looking for preamble (value: 2)
        buffer_index = 0;
        return;
      }
    }    
  }    
}
unsigned extract_tag() {
    uint8_t msg_head = buffer[0];
    uint8_t *msg_data = buffer + 1; // 10 byte => data contains 2byte version + 8byte tag
    uint8_t *msg_data_version = msg_data;
    uint8_t *msg_data_tag = msg_data + 2;
    uint8_t *msg_checksum = buffer + 11; // 2 byte
    uint8_t msg_tail = buffer[13];
}
long hexstr_to_value(char *str, unsigned int length) { // converts a hexadecimal value (encoded as ASCII string) to a numeric value
  char* copy = malloc((sizeof(char) * length) + 1); 
  memcpy(copy, str, sizeof(char) * length);
  copy[length] = '\0'; 
  // the variable "copy" is a copy of the parameter "str". "copy" has an additional '\0' element to make sure that "str" is null-terminated.
  long value = strtol(copy, NULL, 16);  // strtol converts a null-terminated string to a long value
  free(copy); // clean up 
  return value;
}
```

## Operação

Para que não seja preciso uma protoboard para as conexões que se tornariam frágeis e não duradouras, desenvolvemos uma placa para o projeto, seguindo o esquemática apresentado anteriormente. A primeira ideia surgiu como sendo uma PCB simples com seu esquemático criado pelo software KiCad.

![Esquemático](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/Esquem%C3%A1tico.PNG)

Após a impressão e corrosão da PCB, observamos que as trilhas precisariam ser muito mais grossas devido à alta corrente da fechadura que passaria por ela, então abandonamos o esquemático inicial e optamos por produzir a placa usando uma placa universal, que se mostrou mais fácil em questão de organização já que contém o espaço entre-pinos ideal para o nosso trabalho. 

![PCB](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/PCB.jpg)
![Esquem](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/Esquemático.PNG)

Pensando em nosso compartimento, medimos o comprimento e a largura do display TFT ara que seja possível cortar uma janela que permita o contato com o display e, usando um paquímetro, encontramos 60 (sessenta) milimetros de comprimento e 42 (quarenta e dois) milímetros de largura, tal como 12 (doze) milímetros de altura, que precisam de uma margem de erro visto que usaremos jumpers para afastá-lo e posicioná-lo de forma adequada no compartimento. Para a altura do compartimento,foi preciso medir a maior altura possível que é a do módulo bluetooth visto que ele permanece de pé na placa.

![peça](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/peça.PNG)

Para a modelagem da peça que porteriormente formaria nosso compartimento, contamos com a ajuda de monitores do curso de Design de Produtos do Instituto Federal de Santa Catarina. Dadas as medidas, obtivemos um modelo planificado da estrutura do compartimento que foi colado em um material similar ao papelão porém mais resistente e cortado.

![peça2](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/peça2.jpeg)

Após o corte, a peça foi lixada para um melhor acabamento e pintada com tinta preta. As partes que precisariam ser dobradas foram desgastadas com estilete e levemente umidecidas para facilitar a operação, evitando tensionar muito o materia. Alguns ajustes foram necesários em questão de imprecisão no corte, para isso, usamos estilete e alicate de corte, lixando e pintando novamente com tinta preta. Por fim, o compartimento foi selado com cola quente.

![peça4](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/peça4.jpeg)

O código por trás do arduino foi criado com base em diversas referências citadas e em códigos de exemplo que são instalados junto às bibliotecas de cada componente.

## Referências
Indústria 4.0: https://www.youtube.com/watch?v=ISk64bJ35yM&feature=emb_title

Shield Ethernet: https://www.baudaeletronica.com.br/ethernet-shield-w5100-para-arduino.html

Módulo Bluetooth: https://www.filipeflop.com/blog/tutorial-arduino-bluetooth-hc-05-mestre/

Módulo RFID: https://www.mschoeffler.de/2018/01/05/arduino-tutorial-how-to-use-the-rdm630-rdm6300-rfid-reader/

Octoacoplador: http://www.vishay.com/docs/83725/4n25.pdf

