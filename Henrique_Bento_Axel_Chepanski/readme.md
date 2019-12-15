 # 1. INDÚSTRIA 4.0
A indústria 4.0 também chamada de 4° revolução industrial, refere-se a implementação de tecnologias baseadas na troca de dados, controle e automação nos processos de manufatura nas indústrias. Dentre estas tecnologias o uso de conceitos como big data, conectividade, inteligência artificial, internet das coisas, machine learning entre outros são a base para a criação das denominadas “fábricas inteligentes”.
O termo “indústria 4.0” foi citado pela primeira vez na Feira de Hannover em 2011, a mais importante feira industrial na Alemanha e, desde seu surgimento a implementação de seus processos tornou-se exponencialmente difundido pelo mundo.
É necessária a utilização de seis princípios que devem ser seguidos para a elaboração de uma produção inteligente, sendo eles: controle da produção em tempo real, virtualização, descentralização, modularidade, interoperabilidade e orientação de serviço. A implementação da indústria 4.0 e seus princípios vêm gerando mudanças significativas no mercado sob a forma da criação de novos modelos de negócios, sendo estes baseados na customização de seus produtos conforme a exigência do cliente. 
Devido às constantes mudanças do mercado, a demanda por profissionais qualificados na utilização das novas tecnologias serão necessárias, porém devido a grande automação nas indústrias inteligentes grande parte dos trabalhos manuais se tornarão dispensáveis, cabendo ao empregado uma melhor capacitação em outras áreas. Especializações no desenvolvimento de softwares e eletrônica aplicada serão os mais requisitados no novo mercado de trabalho, áreas estas que precisam estar recebendo constante manutenção.

 # 2. PROPOSTA
 Utilizando de conceitos provenientes da indústria 4.0, definimos como projeto a elaboração de uma fechadura eletrônica. A realização e o desenvolvimento da proposta será feita de acordo com a metodologia orientada à projetos denominada “Abordagem CDIO”, composta de 4 etapas: Concepção, Design, Implementação e Operação. A descrição de cada etapa será contextualizada no decorrer do trabalho.
 # 3. CONCEPÇÃO
 A fechadura eletrônica é uma ferramenta de segurança, e como tal deve proporcionar proteção e confiança ao usuário. Seguindo esse pensamento, nesta etapa nós desenvolvedores devemos nos apropriar do contexto, definir os requisitos e meios para alcançar nossos objetivos, sendo estes:

* O controle da fechadura por senha;
 
  Será utilizado um teclado matricial que permitirá ao usuário destrancar a fechadura somente quando a senha correta for utilizada.

* O controle de fechadura através de digital;
  
  O acesso será feito através de um sensor de digital utilizando uma ou mais digitais cadastradas no módulo de comando.

* O controle da fechadura por meio de cartões de acesso;
 
  Utilizando um sensor RFID (Identificação por Radiofrequência) para identificar cartões eletrônicos pré cadastrados no módulo de comando.

* Sinalização por alarme;
  
  Para a sinalização sonora (alarme) será utilizado um buzzer que produzirá sons a baixa frequência. Ele será ativado quando a fechadura for forçada a abrir ou quando a senha/digital estiver incorreta.

* Deverá possuir um display;
  
  Terá como função a exposição de dados (apresentação dos algarismos da senha e dispositivos conectados, informar se o acesso foi liberado e etc).

* O sistema deve possuir interface com celulares e computadores;
  
  A conexão será feita por um módulo bluetooth.

* Módulo de comando para as interfaces e sensores;
 
  Utilizaremos como módulo de comando o Arduino Mega, nele o controle dos sensores e interface será feita por instruções pré programadas. 

* Uma fonte de alimentação;
  
  A fechadura funcionará com uma alimentação em corrente contínua de 12V (a fonte de alimentação será criada por nós desenvolvedores).

Como destacado acima, o propósito final é a criação de um sistema de controle dinâmico por meio da utilização de várias plataformas de acesso, facilitando a comunicação com o usuário e proporcionando  uma maior segurança ao mesmo. Tendo como esse objetivo, iremos especificar as tecnologias que serão utilizadas e suas aplicações no decorrer do projeto.

REQUISITOS | TIPO DE TECNOLOGIA | QUANTIDADE
---------|----------|---------
 Controle por senha. | Teclado matricial | 1
 Controle por digital.| Sensor biométrico | 1
 Controle por cartão. | Sensor RFID | 1
 Interface digital.| Módulo Bluetooth e Ethernet | 1
 Sinalização por alarme.|Display | 1
 Exposição de dados.| Sensor RFID | 1
  Módulo de comando.|Arduino Mega 2560 | 1
 Fonte de alimentação.| Fonte 12V | 1
 # 4. DESIGN
 No design especificaremos os modelos para cada tipo de tecnologia, suas conexões com módulo de comando e os componentes adicionais necessários para o funcionamento do circuito.
  


MODELO:| PREÇO (R$): |
---------|----------|
 Teclado matricial de Membrana 16 Teclas. | 9,90 |
 Leitor Biométrico impressão digital Dymore FPM10A DY50 | 55,90 | 
Leitor RFID RDM6300 125KHz.|19,99 |
  Módulo Bluetooth RS 232 HC-05. | 39,90 | 
 Shield Ethernet W5100. | 56,90 |
  Buzzer Ativo 5V. | 3,90 | 
 Display gráfico 2.4 TFT - ILI9341. |51,00 |
  Arduino Mega 2560.| 94,90 | 
 Resistor 220Ω 5% 1/4W. | 0,10 |
  Resistor 100Ω 5% 1/4W.| 0,10| 
## 4.1 Teclado Matricial
Teclado matricial de Membrana 16 Teclas.

Especificações:

* Tamanho: 77,0x70,0x0,8mm;

* Comprimento Cabo: 86mm;

* Peso: 10g;

* Conector: 8 pinos (2,54mm);

* Montagem: Auto-Adesivo

* Limites de Operação: 35VDC, 100mA;

* Isolação: 100MΩ, 100V;

* Tempo de contato: 5ms;

* Durabilidade: 1 milhão de ciclos por tecla;

* Temperatura de Funcionamento: 0-70°C.
  
![](https://www.curtocircuito.com.br/pub/media/catalog/product/cache/ecd051e9670bd57df35c8f0b122d8aea/t/e/teclado_matricial_-_membrana_-_4x4_1.jpg)

## 4.2 Sensor Biométrico
Leitor Biométrico impressão digital Dymore FPM10A DY50. 

Especificações: 

* Tensão de alimentação: 3.3V;

* Corrente de alimentação: <120mA;

* Pico de corrente: <140mA;

* Tempo de imagem da impressão digital: <1.0 segundos;

* Dimensões da janela: 14 x 18 mm;

* Modo de correspondência: modo de correspondência (1: 1);

* Modo de pesquisa (1: N);

* Arquivo principal: 256 bytes;

* Arquivo de modelos: 512 bytes;

* Capacidade de armazenamento: 162 bytes;

* Nível de segurança: cinco (do mais baixo para o mais alto: 1,2,3,4,5);

* Taxa de falsa aceitação (FAR): <0,001% (nível de segurança 3);

* Taxa de falsa rejeição (FRR): <1,0% (nível de segurança 3);

* Tempo de pesquisa: <1,0 segundos (1: 500, a média);

* Interface PC: UART (nível lógico TTL) ou USB2.0/USB1.1;

* Comunicação baud rate (UART): (9600 x N) bps onde N = 1 ~ 12 (valor padrão N = 6, ie 57600bps);

* Ambiente de funcionamento:

 - [ ] Temperatura: -20 graus Celsius - +50 graus Celsius

 - [ ] Humidade relativa: 40% HR-85% RH (sem condensação);

* Ambiente de armazenamento:

- [ ] Temperatura: -40 graus Celsius - +85 graus Celsius;

- [ ] Humidade relativa: < 85% H (sem condensação);

* Dimensões (C x L x A): 56 x 20 x 21.5 mm.
  
  ![](https://http2.mlstatic.com/D_NQ_NP_945939-MLB31099711565_062019-W.jpg)

## 4.3 Sensor RFID
Leitor RFID RDM6300 125KHz.

Especificações:

 * Módulo RFID RDM630;

* Tensão de operação: 5V DC;

* Corrente: <50mA;

* Frequência 125KHz;

* Interface: TTL RS232;

* Antena externa;

* Dimensões antena: 46 x 32 x 3mm;

* Dimensões módulo: 38.5 x 19 x 9mm.

![](https://www.boxelectronica.com/797-large_default/rdm6300-125khz-cardreader-mini-module.jpg)

## 4.4 Sensor Bluetooth
Módulo Bluetooth RS232 HC-05.

Especificações:

* Protocolo Bluetooth: 3.0;

* Frequência: 2,4GHz Banda ISM;

* Modulação: GFSK;

* Emissão de energia: <=4dBm, Classe 2;

* Sensibilidade: <=84dBm com 0,1% BER;

* Velocidade Assíncrono: 2,1Mbps(Max)/160Kbps;

* Velocidade Síncrono: 1Mbps/1Mbps;

* Segurança: Autentificação e Encriptação;

* Perfil: Porta Serial Bluetooth;

* Suporta modo Escravo (Slave) e Mestre (Master);

* CSR chip: Bluetooth v2.0;

* Banda de Onda: 2,4Hhz-2,8Ghz, Banda ISM;

* Tensão: 3,3v (2,7-4.2v);

* Corrente: Pareado 35mA; Conectado 8mA;

* Temperatura: -40 ~ +105°C;

* Alcance: 10m;

* Baud Rate: 4800;9600;19200;38400;57600;115200;230400;460800;921600;1382400;

* Dimensões: 26,9 x 13 x 2,2mm;

* Peso: 9,6g.

![](https://uploads.filipeflop.com/2017/07/02-30.png)

## 4.4 Ethernet
Ethernet Shield W5100.

Especificações:

* Tensão de operação 5V (fornecida pela placa Arduino);

* Controlador Ethernet: W5100 com buffer interno 16K;

* Velocidade de conexão: 10/100Mb;

* Conexão com o Arduino na porta SPI;

* Dimensões(CxLxA): 68x53x10mm.

![](https://www.baudaeletronica.com.br/media/catalog/product/cache/1/image/800x/9df78eab33525d08d6e5fb8d27136e95/e/t/ethernet-shield-w5100.jpg)

## 4.5 Buzzer
Buzzer Ativo 5V.

Especificações:

* Buzzer tipo ativo;

* Tensão de operação: 4 à 8VDC;

* Corrente de operação: 30mA;
  
* Saída de som mínima (a 10cm): 85dB;
  
* Frequência de ressonância: 2300±300 Hz;

* Temperatura de operação: -27 a +70 °C;

* Material: ABS;

* Cor: Preto;

* Dimensões: 11,8 x 9mm.


![](https://www.soldafria.com.br/image/cache/catalog/buzzer-12_mm-com-oscilador-interno-550x550.jpg)

## 4.6 Display Gráfico
Display gráfico 2.4 TFT - ILI9341.

Especificações:

 * Driver: ILI9341;

 * Tensão de trabalho: 5,0 V;

 * Tensão lógica: 3,3 - 5,0 V;

 * Corrente do backlight: 80 mA (máx);

 * Dimensão do visor: 2.4 polegadas;

 * Resolução: 240 x 320 pixels;

 * Cor: 18 bits (262 mil tons diferentes);

 * Backlight Branco;

 * Touch Screen Resistivo;

 * Dimensão do visor: 1,6 pol;
 
 * Dimensão total: 71 x 52 x 8 mm (C x L x A).

![](https://contestimg.wish.com/api/webimage/5b1f90d41845392332b24da0-large.jpg?cache_buster=d5b49a140ba864d4801892a4d64bcf9e)

## 4.7 Arduino
Arduino Mega 2560

Especificações:

* Microcontrolador: ATmega2560;

* Tensão de Operação: 5V;

* Tensão de Entrada: 7-12V;

* Portas Digitais: 54 (15 podem ser usadas como PWM);

* Portas Analógicas: 16;

* Corrente Pinos I/O: 40mA;

* Corrente Pinos 3,3V: 50mA;

* Memória Flash: 256KB (8KB usado no bootloader);

* SRAM: 8KB;

* EEPROM: 4KB;

* Velocidade do Clock: 16MHz.
  
![](http://pabtronics.in/wp-content/uploads/2019/05/arduino-mega2560-1-1.jpg)

## 4.8 Módulo Relé 
* Tensão de operação da bobina: 5VDC;
* Quantidade de relés: 2 relés;
* Acionamento: Baixa tensão;
* Tensão máxima de saída do relé: DC 30V/10A, AC 250V/10A;
* Interface que pode ser controlada por: (8051, AVR, PIC, DSP, ARM,     MSP430, lógica TTL);
* Tensão de sinal: 5VCD (IN1, IN2);
* Corrente de comutação: 10A;
* Modelo do Relé: SRD-05VDC-SL-C;
* LED's de indicação de funcionamento;
* Dimensões: 50mm x 3,9mm X 17mm;
* Peso: 28g
  
![](https://uploads.filipeflop.com/2013/02/imagem003.png)

## 4.9 Componentes e Conexões

![](https://github.com/LPAE/pi2_eng_19_2/blob/master/Henrique_Bento_Axel_Chepanski/imgpi/esquematico%20final%20pi2.PNG?raw=true)

O display TFT e o shield ethernet não estão presentes na ligação no esquematico porque são shields que são enxaixados na placa principal o arduino MEGA 2560.

# 5 IMPLEMENTAÇÃO
 
Nessa parte do projeto será colocado em prática os modelos anteriormente definidos na etapa do design, utilizando o Arduino como microcontrolador e implementando os algoritmos necessários em C++ para o correto funcionamento dos componentes. Também será descrita a programação e a plataforma utilizada no emprego de um App em razão do uso do módulo bluetooth, assim como o site implementado para o uso do shield ethernet.
 
## 5.1 App
 
 Um dos requisitos definidos no início do projeto é a criação de uma interface de controle empregando como meio de conexão o bluetooth. Com o intuito de atingir esse objetivo utilizamos como ferramenta o software web “App inventor” na criação de um aplicativo android.
	App inventor é software open source criado pelo Massachusetts Institute of Technology (MIT), e como citado acima ele permite a criação de aplicativos android por meio de uma interface de blocos simples e de fácil compreensão. As imagens a seguir são relativas às interfaces do app e sua programação envolvida.

### 5.1.2 Programação

## 5.2 Display Shield display LCD TFT 2.4 

A característica da programação utilizada no display baseia se na utilização de funções que facilitam e diminuem o tamanho do código. A programação utilizada está descrita abaixo:
 
### 5.2.1 Códigos Arduino

```
    //Setup TFT
    uint16_t ID = tft.readID();
    tft.begin(ID);
    tft.setRotation(3);
    telaInicial();
    
    // voids TFT
     void telaInicial() {
     tft.fillScreen(PRETO);
     tft.setCursor(0, 0);
     tft.setTextColor(VERDE);
    tft.setTextSize(2);
    tft.println("Precione:'A' para         altenticar a senha.");
    tft.println();
    tft.println("Precione:'*' para encerrar processo.");
    tft.println();
    tft.println("Precione:'#' para alterar senha.");
    //Setup RFID
    tft.println();
    tft.println("125khz RFID pronto");
    tft.println();
    tft.println("Esperando por uma Tag...");
    tft.println();
    if (finger.verifyPassword()) {
    tft.print("Sensor biometrico            encontrado!");
    } else {
    tft.print("Sensor biometrico não        encontrado!");
    while (true) {
      delay(1);
    }
    }  
    }

      void escreveSenha() {

    tft.fillScreen(PRETO);
    tft.fillRect(20, 50, 300, 30, BRANCO);
    tft.setCursor(20, 50);
    tft.setTextColor(PRETO);
    tft.setTextSize(3);
    tft.print("Senha: ");
    tft.print(senhaqueaparece);

}
void escreveSenha2() {

  tft.setCursor(130, 50);
  tft.setTextColor(PRETO);
  tft.setTextSize(3);
  tft.print(senhaqueaparece);


}
void escrevenovaSenha() {

  tft.fillScreen(PRETO);
  tft.fillRect(0, 50, 1000, 30, BRANCO);
  tft.setCursor(0, 50);
  tft.setTextColor(PRETO);
  tft.setTextSize(3);
  tft.print("Nova Senha: ");
  tft.print(senhaqueaparece);

}
void escrevenovaSenha2() {

  tft.setCursor(200, 50);
  tft.setTextColor(PRETO);
  tft.setTextSize(3);
  tft.print(senhaqueaparece);


}
void processoEncerrado() {

  tft.fillScreen(PRETO);
  tft.setCursor(40, 100);
  tft.setTextColor(VERMELHO);
  tft.setTextSize(3);
  tft.print("Encerrado");

}

void tagdetectada() {
  
  tft.fillScreen(PRETO);
  tft.setCursor(20, 0);
  tft.setTextColor(VERDE);
  tft.setTextSize(3);
  tft.print("Tag detectada");
  tft.setCursor(20, 70);
  tft.print("ID: ");
  tft.print(tag);
  tft.setCursor(20, 150);
  tft.print("Acesso Liberado");
}

```
## 5.3 Teclado Matricial 

A implementação do teclado matricial foi feita utilizando a biblioteca “keypad.h”, e a programação envolvida é de fácil acesso devido a grande quantidade de conteúdo disponível na internet. O código desenvolvido está descrito abaixo:

# 5.3.2 Código Arduino 

```
//Loop teclado matricial
  char tecla_pressionada = teclado.getKey();
  if (tecla_pressionada == 'A')
  {
    Serial.println();
    Serial.print("Digite a senha: ");
    escreveSenha();
    while (true)
    {
      char digito = teclado.getKey();
      if (digito)
      {
        senhaqueaparece += "*";
        escreveSenha2();
        Serial.print("*");
        temporaria += digito;
        if (digito == '*')
        {
          Serial.println();
          Serial.print("Processo encerrado");
          processoEncerrado();
          temporaria = "";
          senhaqueaparece = "";
          delay(3000);
          telaInicial();
          break;

        }
      }
      if (temporaria.length() >= 6)
      {
        if (temporaria == senhateclado)
        {
          Serial.println();
          Serial.print("Senha correta");
          temporaria = "";
          senhaqueaparece = "";
          tft.fillScreen(PRETO);
          tft.setCursor(10, 100);
          tft.setTextColor(VERDE);
          tft.setTextSize(3);
          tft.print("Acesso Autorizado");
          delay(3000);
          telaInicial();
          break;

        }
        else
        {
          Serial.println();
          Serial.print("Senha incorreta");
          temporaria = "";
          senhaqueaparece = "";
          // Caso contrário
          tft.fillScreen(PRETO);
          tft.setCursor(40, 100);
          tft.setTextColor(VERMELHO);
          tft.setTextSize(3);
          tft.print("Acesso Negado");
          digitalWrite(42, LOW);
          delay(100);
          digitalWrite(42, HIGH);
          delay(100);
          digitalWrite(42, LOW);
          delay(100);
          digitalWrite(42, HIGH);
          delay(100);
          digitalWrite(42, LOW);
          delay(100);
          digitalWrite(42, HIGH);
          delay(3000);
          telaInicial();
          break;

        }

      }
    }
  }

 if (tecla_pressionada == '#')
  {
    Serial.println();
    Serial.print("Digite a senha: ");
    escreveSenha();

    while (true)
    { char digito = teclado.getKey();
      if (digito)
      {
        senhaqueaparece += "*";
        escreveSenha2();
        Serial.print("*");
        temporaria += digito;
        if (digito == '*')
        {
          Serial.println();
          Serial.print("Processo encerrado");
          processoEncerrado();
          temporaria = "";
          senhaqueaparece = "";
          delay(3000);
          telaInicial();
          break;
        }
      }
      if (temporaria.length() >= 6)
      {
        if (temporaria == senhateclado)
        {
          Serial.println();
          Serial.print("Digite a nova senha: ");
          tft.fillScreen(PRETO);
          tft.setCursor(10, 100);
          tft.setTextColor(VERDE);
          tft.setTextSize(3);
          tft.print("Troca Autorizada");
          senhateclado = "";
          temporaria = "";
          senhaqueaparece = "";
          delay(1000);
          escrevenovaSenha();

          while (true)
          {

            char digito2 = teclado.getKey();
            if (digito2)
            { senhaqueaparece += "*";
              escrevenovaSenha2();
              Serial.print("*");
              senhateclado += digito2;
            }
            if (senhateclado.length() >= 6)
            {

              Serial.println();
              Serial.print("Senha alterada");
              tft.fillScreen(PRETO);
              tft.setCursor(40, 100);
              tft.setTextColor(VERDE);
              tft.setTextSize(3);
              tft.print("Senha Alterada");
              temporaria = "";
              senhaqueaparece = "";
              delay(1000);
              telaInicial();
              break;
            }
          }
          break;
        }
        else
        {
          Serial.println();
          Serial.print("Senha incorreta ");
          tft.fillScreen(PRETO);
          tft.setCursor(40, 100);
          tft.setTextColor(VERMELHO);
          tft.setTextSize(3);
          tft.print("Acesso Negado");
          senhateclado = "";
          temporaria = "";
          senhaqueaparece = "";
          delay(1000);
          telaInicial();
          break;
        }
      }
    }
  }`

```
## 5.4  RFID 

Inicialmente na implementação do RFID houve problemas em relação às portas de comunicação a RX e a TX, foi utilizado uma biblioteca que simulava essas funções em portas comuns, porém no Arduino MEGA há limitações de quais destas podem ser utilizadas. Com essas colocações foi decidido utilizar as portas TX1 e RX1 hardware que para serem empregadas devem ser iniciadas como “Serial1.begin”.

### 5.4.1 Código Arduino

```
//Loop RFID
  while (Serial1.available() > 0) {
    c = Serial1.read();
    tag += c;
  }
  tag = tag.substring(1, 13);
  while (tag.length() > 0) {
    Serial.println("Tag detectada");
    Serial.print("ID: ");
    Serial.println(tag);
    if (tag) {
      if (tag == tag1)
      {
        tagdetectada();
        Serial.println("Acesso liberado");
        digitalWrite(49, HIGH);
        tagdetectada();
        delay(3000);
        digitalWrite(49, LOW);
        telaInicial();

      }
      else
      {
        Serial.print("Acesso negado");
        // Caso contrário
        tft.fillScreen(PRETO);
        tft.setCursor(40, 100);
        tft.setTextColor(VERMELHO);
        tft.setTextSize(3);
        tft.print("Acesso Negado");
        digitalWrite(42, LOW);
        delay(100);
        digitalWrite(42, HIGH);
        delay(100);
        digitalWrite(42, LOW);
        delay(100);
        digitalWrite(42, HIGH);
        delay(100);
        digitalWrite(42, LOW);
        delay(100);
        digitalWrite(42, HIGH);
        delay(3000);
        telaInicial();
      }
    }
    tag = "";
    delay(2000);
    Serial.println("Esperando por uma Tag...");
    tag = "";
  }
  delay(1000);
  tag = "";
}

```
## 5.5 Sensor Biométrico 

Devido a segurança e confiabilidade o sensor biométrico foi um extra considerado pela equipe e finalmente aplicado. O código envolvido é complexo e longo, mas seguindo os exemplos dos módulos anteriores existe uma grande quantidade de conteúdo disponível digitalmente.

### 5.5.1 Código Arduino 

```
//Loop leitor biométrico
  botao.button_loop();

  if ( botao.pressed() ) {
    gravar = true;
  }

  if (gravar) {
    modoGravacaoID(0);
    gravar = false;
  }

  getFingerprintIDez();

//Funções leitor biomeétrico
uint8_t modoGravacaoID(uint8_t IDgravar) {

  int p = -1;
  Serial.print("Esperando uma leitura válida para gravar #");
  Serial.println(IDgravar);
  tft.fillScreen(PRETO);
  tft.setCursor(0, 100);
  tft.setTextColor(VERDE);
  tft.setTextSize(3);
  tft.print("Esperando uma leitura válida para gravar #");
  tft.println(IDgravar);
  delay(2000);
  while (p != FINGERPRINT_OK) {
    p = finger.getImage();
    switch (p) {
      case FINGERPRINT_OK:
        Serial.println("Leitura concluída");
        tft.fillScreen(PRETO);
        tft.setCursor(40, 100);
        tft.setTextColor(VERDE);
        tft.setTextSize(3);
        tft.print("Leitura concluída");
        break;
      case FINGERPRINT_NOFINGER:
        Serial.println(".");
        tft.setCursor(40, 150);
        tft.setTextColor(VERDE);
        tft.setTextSize(3);
        tft.print(".");
        delay(200);
        break;
      case FINGERPRINT_PACKETRECIEVEERR:
        Serial.println("Erro comunicação");
        tft.fillScreen(PRETO);
        tft.setCursor(40, 100);
        tft.setTextColor(VERDE);
        tft.setTextSize(3);
        tft.print("Erro comunicação");
        delay(3000);
        telaInicial();
        break;
      case FINGERPRINT_IMAGEFAIL:
        Serial.println("Erro de leitura");
        tft.fillScreen(PRETO);
        tft.setCursor(40, 100);
        tft.setTextColor(VERDE);
        tft.setTextSize(3);
        tft.print("Erro de leitura");
        delay(3000);
        telaInicial();
        break;
      default:
        Serial.println("Erro desconhecido");
        tft.fillScreen(PRETO);
        tft.setCursor(40, 100);
        tft.setTextColor(VERDE);
        tft.setTextSize(3);
        tft.print("Erro desconhecido");
        delay(3000);
        telaInicial();
        break;
    }
  }

  // OK successo!

  p = finger.image2Tz(1);
  switch (p) {
    case FINGERPRINT_OK:
      Serial.println("Leitura convertida");
      tft.fillScreen(PRETO);
      tft.setCursor(40, 100);
      tft.setTextColor(VERDE);
      tft.setTextSize(3);
      tft.print("Leitura convertida");
      break;
    case FINGERPRINT_IMAGEMESS:
      Serial.println("Leitura suja");
      tft.fillScreen(PRETO);
      tft.setCursor(10, 100);
      tft.setTextColor(VERDE);
      tft.setTextSize(3);
      tft.print("Leitura suja");
      return p;
    case FINGERPRINT_PACKETRECIEVEERR:
      Serial.println("Erro de comunicação");
      tft.fillScreen(PRETO);
      tft.setCursor(10, 100);
      tft.setTextColor(VERDE);
      tft.setTextSize(3);
      tft.print("Erro de comunicação");
      delay(3000);
      telaInicial();
      return p;
    case FINGERPRINT_FEATUREFAIL:
      Serial.println("Não foi possível encontrar propriedade da digital");
      tft.fillScreen(PRETO);
      tft.setCursor(0, 100);
      tft.setTextColor(VERDE);
      tft.setTextSize(3);
      tft.print("Não foi possível encontrar propriedade da digital");
      delay(3000);
      telaInicial();
      return p;
    case FINGERPRINT_INVALIDIMAGE:
      Serial.println("Não foi possível encontrar propriedade da digital");
      tft.fillScreen(PRETO);
      tft.setCursor(0, 100);
      tft.setTextColor(VERDE);
      tft.setTextSize(3);
      tft.print("Não foi possível encontrar propriedade da digital");
      delay(3000);
      telaInicial();
      return p;
    default:
      Serial.println("Erro desconhecido");
      tft.fillScreen(PRETO);
      tft.setCursor(40, 100);
      tft.setTextColor(VERDE);
      tft.setTextSize(3);
      tft.print("Erro desconhecido");
      delay(3000);
      telaInicial();
      return p;
  }

  Serial.println("Remova o dedo");
  tft.fillScreen(PRETO);
  tft.setCursor(40, 100);
  tft.setTextColor(VERDE);
  tft.setTextSize(3);
  tft.print("Remova o dedo");
  delay(2000);
  p = 0;
  while (p != FINGERPRINT_NOFINGER) {
    p = finger.getImage();
  }
  Serial.print("ID ");
  tft.fillScreen(PRETO);
  tft.setCursor(10, 100);
  tft.setTextColor(VERDE);
  tft.setTextSize(3);
  tft.print("ID:");
  tft.print(IDgravar);
  Serial.println(IDgravar);
  p = -1;
  Serial.println("Coloque o Mesmo dedo novamente");
  tft.fillScreen(PRETO);
  tft.setCursor(10, 100);
  tft.setTextColor(VERDE);
  tft.setTextSize(3);
  tft.print("Coloque o Mesmo dedo novamenteo");
  while (p != FINGERPRINT_OK) {
    p = finger.getImage();
    switch (p) {
      case FINGERPRINT_OK:
        Serial.println("Leitura concluída");
        tft.fillScreen(PRETO);
        tft.setCursor(10, 100);
        tft.setTextColor(VERDE);
        tft.setTextSize(3);
        tft.print("Leitura concluída");
        break;
      case FINGERPRINT_NOFINGER:
        Serial.print(".");
        tft.setCursor(10, 150);
        tft.setTextColor(VERDE);
        tft.setTextSize(3);
        tft.print(".");
        delay(200);
        break;
      case FINGERPRINT_PACKETRECIEVEERR:
        Serial.println("Erro de comunicação");
        tft.fillScreen(PRETO);
        tft.setCursor(10, 100);
        tft.setTextColor(VERDE);
        tft.setTextSize(3);
        tft.print("Erro de comunicação");
        delay(3000);
        telaInicial();
        break;
      case FINGERPRINT_IMAGEFAIL:
        Serial.println("Erro de Leitura");
        tft.fillScreen(PRETO);
        tft.setCursor(10, 100);
        tft.setTextColor(VERDE);
        tft.setTextSize(3);
        tft.print("Erro de Leitura");
        delay(3000);
        telaInicial();
        break;
      default:
        Serial.println("Erro desconhecido");
        tft.fillScreen(PRETO);
        tft.setCursor(10, 100);
        tft.setTextColor(VERDE);
        tft.setTextSize(3);
        tft.print("Erro desconhecido");
        delay(3000);
        telaInicial();
        break;
    }
  }

  // OK successo!

  p = finger.image2Tz(2);
  switch (p) {
    case FINGERPRINT_OK:
      Serial.println("Leitura convertida");
      tft.fillScreen(PRETO);
      tft.setCursor(10, 100);
      tft.setTextColor(VERDE);
      tft.setTextSize(3);
      tft.print("Leitura convertida");
      break;
    case FINGERPRINT_IMAGEMESS:
      Serial.println("Leitura suja");
      tft.fillScreen(PRETO);
      tft.setCursor(10, 100);
      tft.setTextColor(VERDE);
      tft.setTextSize(3);
      tft.print("Leitura suja");
      delay(3000);
      telaInicial();
      return p;
    case FINGERPRINT_PACKETRECIEVEERR:
      Serial.println("Erro de comunicação");
      tft.fillScreen(PRETO);
      tft.setCursor(10, 100);
      tft.setTextColor(VERDE);
      tft.setTextSize(3);
      tft.print("Erro de comunicação");
      delay(3000);
      telaInicial();
      return p;
    case FINGERPRINT_FEATUREFAIL:
      Serial.println("Não foi possível encontrar as propriedades da digital");
      tft.fillScreen(PRETO);
      tft.setCursor(10, 100);
      tft.setTextColor(VERDE);
      tft.setTextSize(3);
      tft.print("Não foi possível encontrar as propriedades da digital");
      delay(3000);
      telaInicial();
      return p;
    case FINGERPRINT_INVALIDIMAGE:
      Serial.println("Não foi possível encontrar as propriedades da digital");
      tft.fillScreen(PRETO);
      tft.setCursor(10, 100);
      tft.setTextColor(VERDE);
      tft.setTextSize(3);
      tft.print("Não foi possível encontrar as propriedades da digital");
      delay(3000);
      telaInicial();
      return p;
    default:
      Serial.println("Erro desconhecido");
      tft.fillScreen(PRETO);
      tft.setCursor(10, 100);
      tft.setTextColor(VERDE);
      tft.setTextSize(3);
      tft.print("Erro desconhecido");
      delay(3000);
      telaInicial();
      return p;
  }

  // OK convertido!
  Serial.print("Criando modelo para #");  Serial.println(IDgravar);

  p = finger.createModel();
  if (p == FINGERPRINT_OK) {
    Serial.println("As digitais batem!");
    tft.fillScreen(PRETO);
    tft.setCursor(10, 100);
    tft.setTextColor(VERDE);
    tft.setTextSize(3);
    tft.print("As digitais batem!");
  } else if (p == FINGERPRINT_PACKETRECIEVEERR) {
    Serial.println("Erro de comunicação");
    tft.fillScreen(PRETO);
    tft.setCursor(10, 100);
    tft.setTextColor(VERDE);
    tft.setTextSize(3);
    tft.print("Erro de comunicação");
    delay(3000);
    telaInicial();
    return p;
  } else if (p == FINGERPRINT_ENROLLMISMATCH) {
    Serial.println("As digitais não batem");
    tft.fillScreen(PRETO);
    tft.setCursor(10, 100);
    tft.setTextColor(VERDE);
    tft.setTextSize(3);
    tft.print("As digitais não batem");
    delay(3000);
    telaInicial();
    return p;
  } else {
    Serial.println("Erro desconhecido");
    tft.fillScreen(PRETO);
    tft.setCursor(10, 100);
    tft.setTextColor(VERDE);
    tft.setTextSize(3);
    tft.print("Erro desconhecido");
    delay(3000);
    telaInicial();
    return p;
  }

  Serial.print("ID "); Serial.println(IDgravar);
  p = finger.storeModel(IDgravar);
  if (p == FINGERPRINT_OK) {
    Serial.println("Armazenado!");
    tft.fillScreen(PRETO);
    tft.setCursor(10, 100);
    tft.setTextColor(VERDE);
    tft.setTextSize(3);
    tft.print("Armazenado!");
    delay(2000);
    telaInicial();

  } else if (p == FINGERPRINT_PACKETRECIEVEERR) {
    Serial.println("Erro de comunicação");
    tft.fillScreen(PRETO);
    tft.setCursor(0, 100);
    tft.setTextColor(VERDE);
    tft.setTextSize(3);
    tft.print("Erro de comunicação");
    delay(3000);
    telaInicial();
    return p;
  } else if (p == FINGERPRINT_BADLOCATION) {
    Serial.println("Não foi possível gravar neste local da memória");
    tft.fillScreen(PRETO);
    tft.setCursor(0, 100);
    tft.setTextColor(VERDE);
    tft.setTextSize(3);
    tft.print("Não foi possível gravar neste local da memória");
    delay(3000);
    telaInicial();
    return p;
  } else if (p == FINGERPRINT_FLASHERR) {
    Serial.println("Erro durante escrita na memória flash");
    tft.fillScreen(PRETO);
    tft.setCursor(0, 100);
    tft.setTextColor(VERDE);
    tft.setTextSize(3);
    tft.print("Erro durante escrita na memória flash");
    delay(3000);
    telaInicial();
    return p;
  } else {
    Serial.println("Erro desconhecido");
    tft.fillScreen(PRETO);
    tft.setCursor(10, 100);
    tft.setTextColor(VERDE);
    tft.setTextSize(3);
    tft.print("Erro desconhecido");
    delay(3000);
    telaInicial();
    return p;
  }
}

int getFingerprintIDez() {
  uint8_t p = finger.getImage();
  if (p != FINGERPRINT_OK)  return -1;

  p = finger.image2Tz();
  if (p != FINGERPRINT_OK)  return -1;

  p = finger.fingerFastSearch();
  if (p != FINGERPRINT_OK)  return -1;

  //Encontrou uma digital!
  if (finger.fingerID == 0) {
    Serial.print("Modo Administrador!");
    tft.fillScreen(PRETO);
    tft.setCursor(10, 100);
    tft.setTextColor(VERDE);
    tft.setTextSize(2);
    tft.print("Modo Administrador!");

    numID++;

``` 
## 5.6 Shield Ethernet

O shield ethernet foi uma das tecnologias solicitadas no projeto na qual o conhecimento sobre essa tecnologia era muito limitado, com algumas dificuldades e desconhecimento da parte de HTML a linguagem para configuração da página WEB a implementação foi realizada com base em alguns projetos disponibilizados online realizando algumas alterações.

### 5.6.1 Código Arduino

void setup() {
```
  //Setup WIFI
  //Inicializa Ethernet Shield
  Ethernet.begin(mac, ip, gateway, subnet);
  server.begin();

  Serial.println("PI2 controle Fechadura");
}

//Loop WIFI
  EthernetClient client = server.available();
  if (client) {
    while (client.connected())
    {
      if (client.available())
      {
        char c = client.read();
        if (readString.length() < 100) {
          readString += c;
        }
        if (c == 'n')
        {
          //Controle do rele1
          Serial.println(readString);
          //Liga o Rele 1
          if (readString.indexOf("?ligar") > 0)
          {
            digitalWrite(pinTrava, HIGH);
            Serial.println("Rele 1 Ligado");
            ligado = false;
            delay(2000);
            tft.fillScreen(PRETO);
            tft.setCursor(10, 100);
            tft.setTextColor(VERDE);
            tft.setTextSize(3);
            tft.print("Acesso Autorizado");
            digitalWrite(pinTrava, LOW);
            digitalWrite(42, LOW);
            delay(500);
            digitalWrite(42, HIGH);
            delay(1000);
            digitalWrite(pinTrava, HIGH);
            telaInicial();
            Serial.println("Rele 1 Desligado");
            ligado = true;

          }

          //Controle do rele2
          Serial.println(readString);
          //Liga o Rele 2
          if (readString.indexOf("?2_ligar") > 0)
          {
            digitalWrite(42, LOW);
            Serial.println("Rele 2 Ligado");
            ligado_2 = false;
            delay(2000);

            digitalWrite(42, HIGH);
            Serial.println("Rele 2 Desligado");
            ligado_2 = true;

          }
          readString = "";

          client.println("HTTP/1.1 200 OK");
          client.println("Content-Type: text/html");
          client.println();
          client.println("<html>");
          client.println("<head>");
          client.println("<title>PI2 - Controle de fechadura</title>");
          client.println("<meta http-equiv='Content-Type' content='text/html; charset=ISO-8859-1'>");
          client.println("<meta name='viewport' content='width=720, initial-scale=0.5' />");
          client.println("<link rel='stylesheet' type='text/css' href='http://img.filipeflop.com/files/download/automacao/automacao_residencial.css' />");
          client.println("<script type='text/javascript' src='http://img.filipeflop.com/files/download/automacao/automacao_residencial.js'></script>");
          client.println("</head>");
          client.println("<body>");
          client.println("<div id='div1'>Fechadura</div>");
          client.println("<div id='div2'>Buzzer</div>");
          client.print("<div id='rele'></div><div id='estado' style='visibility: hidden;'>");
          client.print(ligado);
          client.println("</div>");
          client.println("<div id='botao'></div>");
          client.println("<div id='botao_2'></div>");
          client.print("<div id='rele_2'></div><div id='estado_2' style='visibility: hidden;'>");
          client.print(ligado_2);
          client.println("</div>");
          client.println("</div>");
          client.println("<script>AlteraRele1()</script>");
          client.println("<script>AlteraRele2()</script>");
          client.println("</div>");
          client.println("</body>");
          client.println("</head>");

          delay(1);
          client.stop();
        }
      }
    }
  }
}
```

## 5.7 Acionamento da fonte

Essa etapa do projeto foi realizada através de um módulo relé desenvolvido para ser utilizado com o arduino, esse módulo é de fácil implementação e utilizado em diversos projetos. As ligações a serem feitas podem ser observadas no esquemático na seção 4.9.

### 5.7.1 Código de acionamento da fechadura

```
digitalWrite(pinTrava, LOW);
delay(1000);
digitalWrite(pinTrava, HIGH);
```
# Conclusões
Para desenvolver esse projeto foi necessário planejamento para atingir todas as competências em tempo hábil, e o CDIO  foi de suma importância para separar as etapas e  obter objetivos claros para que o projeto fosse concluído com sucesso. Com o desenvolver do mesmo foi perceptível que atualmente existe muitas tecnologias e descrições sobre o que pode ser feito com elas, levando a um mundo de possibilidades e de caminhos alternativos que podem ser tomados para se realizar certos objetivos. Hoje com vontade e acesso a algumas tecnologias na sua própria casa, pode ser desenvolvido um projeto altamente funcional que antes só eram possíveis para as indústrias. Além de ser extremamente gratificante ver seu trabalho funcionando é possível deixá-lo com ainda mais funcionalidades.  

# Referências 

https://www.filipeflop.com/blog/automacao-residencial-com-arduino-acenda-lampadas-pela-internet/

https://www.brincandocomideias.com/

https://www.arduinoecia.com.br/leitor-rfid-rdm6300-125khz-arduino/

https://www.youtube.com/watch?v=-gWSZ6MKGPE

https://www.youtube.com/watch?v=31s4zZ9pD_g&t=444s

https://portal.vidadesilicio.com.br/primeiros-passos-shield-lcd-tft-24-touchscreen/
