# PROJETO INTEGRADOR II - 2019_2

Instituto Federal de Educação, Ciência e Tecnologia de Santa Catarina - Campus Florianópolis - Departamento Acadêmico de Eletrônica (DAELN) - Curso de Engenharia Eletrônica

Alunos:

* Carolina de Farias
* Luiz Gustavo Erthal
  
## SUMÁRIO

1. Introdução
2. Concepção
3. Design
4. Implementação
5. Operacionalização
6. Referências

## 1. INTRODUÇÃO

O mundo vive hoje em um momento de transição quando se trata de produtividade na indústria. A isto, tem-se dando o nome de Indústria 4.0¹. Desde o movimento de máquinas a vapor e água na primeira revolução industrial, até os dias atuais com a mecanizaçâo das linhas de produção, inteligência artificial, digitalização de diversos processos e _IoT_, a conectividade tem feito sua diferença.

A Indústria 4.0 nos oferece uma maior qualidade de informações e aproximação dos dados. Ela conecta o mundo físico das máquinas ao digital, que permite uma melhor colaboração dos diversos departamentos que constituem a indústria, como a fábrica, parceiros,vendedores e consumidores².

No Brasil, uma estimativa feita pela ABDI (Agência Brasileira de Desenvolvimento Industrial) estima que a redução de custos industriais no Brasil, a partir da migração da indústria para o conceito 4.0, será de, no mínimo, R$73 bilhões ao ano.³

## 2. CONCEPÇÃO

O cerne do projeto visa transformar algo extremamente comum e simples, como uma fechadura, em algo ainda mais seguro, tecnológico e conectado. A fechadura eletrônica além de garantir ainda mais comodidade ao usúario, também apresenta _features_ interessantes ao mercado e a acessibilidade aos mais diversos usos. 

Além de contar com o básico de uma chave, a fechadura também pode ser aberta utilizando uma senha de seis digitos, _tags_ que utilizam a tecnologia RFID (_radio frequency identification_), e um aplicativo para aparelhos móveis, como _smartphones_ e _tablets_, para pessoas com pouca mobilidade que, por algum motivo, não alcancem o aparelho ou a fechadura. 

Ademais, a fechadura também mostrará informações por meios visuais, a partir de um _display_ LCD e de um servidor, que pode ser acessador pela _internet_, além de informações sonoras. 

| REQUISITOS | TECNOLOGIA EMPREGADA | PREÇO |
| --------- | -------- | ------ |
| CONTROLE DE ACESSO - SENHA | TECLADO MATRICIAL | R$ 8,90 |
| CONTROLE DE ACESSO - RFID  | MODULO RFID MRFC522 | R$ 24,90 |
| INTERFACE DIGITAL - HTML | MODULO ETHERNET W5100 | R$ 57,00 |
| INTERFACE DIGITAL - APP | MODULO BLUETOOTH RS232 HC-05| R$ 39,90 |
| INTERFACE VISUAL - TELA | DISPLAY LCD I2C | R$ 22,90 |
| INTERFACE SONORA | BUZZER | R$ 9,90 |
| MICROCONTROLADOR | ARDUINO MEGA | R$ 94,90 |

**OS PREÇOS PODEM VARIAR DE ACORDO COM SUA REGIÃO**

## 3. DESIGN

![Esquemático](https://github.com/LPAE/pi2_eng_19_2/blob/master/Carol_Farias_Luiz_Erthal/esquematico.png)

### 3.1 ARDUINO

O cérebro do projeto. É por este microcontrolador que tudo ocorrerá. Será no arduino em que estará o código de controle de acesso, e o mesmo emitirá e receberá os mais diversos sinais de todos os sensores utilizados, sincronizando a informação e executando-a.

Modelo: Arduino MEGA.

![mega](https://github.com/LPAE/pi2_eng_19_2/blob/master/Carol_Farias_Luiz_Erthal/images/mega.jpg)

### 3.2 DISPLAY LCD

Interface gráfica onde poderá ser lido informações, mensagens ou avisos.

A utilizacão do módulo I2C simplifica o projeto, já que com ele, se utiliza apenas quatro terminais de saída. 

Modelo: Display LCD 16x2 com módulo I2C

![display](https://github.com/LPAE/pi2_eng_19_2/blob/master/Carol_Farias_Luiz_Erthal/images/display.jpg)

### 3.3 SENSOR RFID

Com esta tecnologia, é possível abrir a fechadura utilizando uma _tag_ ou cartão de acesso, sem necessidade de uma chave ou senha.

Foi utilizado o modelo MFRC522, pois, além de ser mais enxuto, ele apresenta um alcance maior de leitura e é possível cadastrar as tags por ele, sem precisar recorrer ao código.

Modelo: Módulo Leitor RFID MFRC522

![rfid](https://github.com/LPAE/pi2_eng_19_2/blob/master/Carol_Farias_Luiz_Erthal/images/rfid.jpg)

### 3.4 TECLADO NÚMERICO

Teclado númerico simples, com números de zero a nove, onde será possível digitar uma senha específica de cada fechadura e ser concedido o acesso.

Modelo: Teclado Matricial 4x3

![keyboard](https://github.com/LPAE/pi2_eng_19_2/blob/master/Carol_Farias_Luiz_Erthal/images/keyboard.jpg)

### 3.5 LEDs

Informação visual para informar a situação do portão. Exemplo: vermelho para trancado, verde para aberto.

### 3.6 BUZZER

Serve como informação sonora da utilização da fechadura eletrônica, como, por exemplo, um alarme.

![buzzer](https://github.com/LPAE/pi2_eng_19_2/blob/master/Carol_Farias_Luiz_Erthal/images/buzzer.jpg)

### 3.7 SENSOR BLUETOOTH

Com este módulo, o portão eletrônica é capaz de informar os dados de entrada que forma utilizados na fechadura. A informação pode ser vista por meio de um _app_ da fechadura.

Modelo: Módulo bluetooth RS232 HC-05

![bluetooth](https://github.com/LPAE/pi2_eng_19_2/blob/master/Carol_Farias_Luiz_Erthal/images/bluetooth.png)

### 3.8 MÓDULO ETHERNET

Com o módulo ethernet, é possível implementar um servidor único para a fechadura, que recebe as informações enviadas pelo microcontrolador em HTML.

![ethernet](https://github.com/LPAE/pi2_eng_19_2/blob/master/Carol_Farias_Luiz_Erthal/images/ethernet.jpg)

## 4. IMPLEMENTAÇÃO

## 5. OPERACIONALIZAÇÃO

## 6. CONCLUSÕES

## 7. REFERÊNCIAS

¹[What is industry 4.0? - Forbes](https://www.forbes.com/sites/bernardmarr/2018/09/02/what-is-industry-4-0-heres-a-super-easy-explanation-for-anyone/#1127c6ff9788) | Acessado em: 11/09/2019

²[What is industry 4.0? - Epicor](https://www.epicor.com/en-ae/resource-center/articles/what-is-industry-4-0/) | Acessado em: 11/09/2019

³[Indústria 4.0 - Governo Federal do Brasil](http://www.industria40.gov.br/) | Acessado em: 11/09/2019