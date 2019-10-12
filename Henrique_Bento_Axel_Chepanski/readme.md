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
  
![](https://cdn.solarbotics.com/products/photos/2fa0f430f0a959610188e8b8b014829e/50452-IMG_5106.jpg?w=800)

## 4.8 Resistores (componentes adicionais) 
Resistores:  220 Ω, 110 Ω.

Especificações:

* Tolerância: 5%

* Potência: ¼ W

![](https://images-na.ssl-images-amazon.com/images/I/41PGLUlslDL._SX342_.jpg)

## 4.9 Componentes e Conexões

![](https://github.com/LPAE/pi2_eng_19_2/blob/master/Henrique_Bento_Axel_Chepanski/imgpi/PI2_esquematico_bb.png)

