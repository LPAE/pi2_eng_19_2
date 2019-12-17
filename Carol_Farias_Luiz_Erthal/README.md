# PROJETO INTEGRADOR II - 2019_2

Instituto Federal de Educação, Ciência e Tecnologia de Santa Catarina - Campus Florianópolis - Departamento Acadêmico de Eletrônica (DAELN) - Curso de Engenharia Eletrônica

Alunos:

* Carolina de Farias
* Luiz Gustavo Erthal

![cdio](https://github.com/LPAE/pi2_eng_19_2/blob/master/Carol_Farias_Luiz_Erthal/images/cdio.jpg)
  
## SUMÁRIO

1. Introdução
2. Concepção
3. Design
4. Implementação
5. Operacionalização
6. Conclusões
7. Referências

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
| Controle de acesso - SENHA | Teclado matricial | R$8,90 |
| Controle de acesso - RFID  | Módulo RFID MRFC522 | R$24,90 |
| Interface digital - HTML | Módulo Ethernet W5100 | R$57,00 |
| Interface digital - APP | Módulo bluetooth RS232 HC-05| R$39,90 |
| Interface visual - TELA | Display LCD I2C | R$22,90 |
| Interface sonora | Buzzer | R$9,90 |
| Microcontrolador | Arduino MEGA | R$94,90 |
|  | **TOTAL** | R$258,40 |

**OS PREÇOS PODEM VARIAR DE ACORDO COM SUA REGIÃO**

###### A pesquisa dos preços foi realizada em 14/12/2019

## 3. DESIGN

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

Com este módulo, a fechadura eletrônica é capaz de informar os dados de entrada que foram utilizados. A informação pode ser vista por meio de um _app_ da fechadura.

Modelo: Módulo bluetooth RS232 HC-05

![bluetooth](https://github.com/LPAE/pi2_eng_19_2/blob/master/Carol_Farias_Luiz_Erthal/images/bluetooth.png)

### 3.8 MÓDULO ETHERNET

Com o módulo ethernet, é possível implementar um servidor único para a fechadura, que recebe as informações enviadas pelo microcontrolador em HTML.

![ethernet](https://github.com/LPAE/pi2_eng_19_2/blob/master/Carol_Farias_Luiz_Erthal/images/ethernet.jpg)

## 4. IMPLEMENTAÇÃO

A seguir, o esquemático utilizado para a montagem do projeto. Lembrando que o módulo ethernet deve ser acoplado em cima do arduino, utilizando seus terminais.

O esquemático abaixo foi feito utilizando o _software_ Proteus.

![esquematico](https://github.com/LPAE/pi2_eng_19_2/blob/master/Carol_Farias_Luiz_Erthal/images/esquematico.png)

O case utilizado para o projeto foi de uma embalagem de celular. Além de ser maleável e resistente, ela acomodou bem o circuito já montado. 

![interno](https://github.com/LPAE/pi2_eng_19_2/blob/master/Carol_Farias_Luiz_Erthal/images/interno.jpeg)

É importante ressaltar que o projeto foi divido entre: controlador e acionador. Nos controladores, ficam os sensores e o próprio microcontrolador - arduino - utilizados. 

No circuito de acionamento atente-se à alguns detalhes de suma importância. A corrente da fechadura possuí um transitório alto, algo em torno de 2,22A, enquanto o arduino mega suporta um máximo de 40mA.<sup>4</sup>

Foi pensando em um circuito que separasse a referência da fonte e do arduino. No primeiro momento iria se utilizar um módulo relé para dar um pulso de corrente. Como alternativa, utilizou-se um opto acoplador (4N25) para se separar as referências e, para o pulso de correte, utilizou-se no projeto, um transistor IFR540s, funcionando, então, como uma chave.

![cima](https://github.com/LPAE/pi2_eng_19_2/blob/master/Carol_Farias_Luiz_Erthal/images/cima.jpeg)

Na parte superior do _case_ fica o teclado matricial para o usuário digitar sua senha, além do _display_ LCD que mostra as informações recebidas pelo controlador. 

LED's finalizam a parte visual do _case_. Uma luz vermelha fica acesa mostrando que a fechadura está fechada e uma luz verde acende nos intervalos em que a fechadura encontra-se aberta.

Em sua lateral, há o sensor RFID para uma simples aproximação. O módulo bluetooth, o qual se comunica com o app, mantém-se dentro do case, já que não se faz necessário mostrar ele.

![lateral](https://github.com/LPAE/pi2_eng_19_2/blob/master/Carol_Farias_Luiz_Erthal/images/lateral.jpeg)

## 5. OPERACIONALIZAÇÃO

Antes de qualquer coisa, informamos que o código completo está disponibilizado [aqui](https://github.com/LPAE/pi2_eng_19_2/blob/master/Carol_Farias_Luiz_Erthal/codigo_fechadura_versao_final.ino). Abaixo, encontra-se apenas algumas explicações de certas funções e parâmetros que o usúario pode modificar.


**Teclado** 
```
/******** DEFINIÇÃO DE SENHA *********** */

char* senha = "123456";  // defina a senha aqui, ela deve conter seis dígitos

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
```

Todo usúario pode utilizar uma senha completamente diferente para acionar a fechadura. Recomendamos que a senha tenha no mínimo seis caracteres. 

Caso o usuário queira colocar outros caracteres não númericos no seu sistema, é possível, além de escolher também outro teclado matricial mais completo, como por exemplo, um 4x4. 

As teclas devem ser definidas abaixo de `char digitos[LINHAS][COLUNAS]`

**Tags e Ethernet**
```
//Vetor responsável por armazenar os ID's das Tag's cadastradas
String TagsCadastradas[] = {"9b52c31b", 
                            "2bcf791b",
                            "ID_3"};
 
MFRC522 LeitorRFID(SS_PIN, RST_PIN);    // Cria uma nova instância para o leitor e passa os pinos como parâmetro
/*************************** */

char buf;

byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
IPAddress ip(192, 168, 25, 16); // esses parâmetros devem ser mudados para cada usuário
EthernetServer server(80);  
```

Para cada tag/cartão vendido no mercado há uma ID (identificação) única, que deve ser descrita no código do projeto. 
Felizmente, o usuário pode descobrir a ID de sua tag pelo próprio código do projeto o monitor serial ou no servidor web do módulo ethernet.

Para a visualização do servidor web, o usuário deve buscar informações únicas na rede. Recomendamos que o endereço mac mantenha-se o mesmo do código, já que ele apenas precisa ser algo único. 

Porém, é necessário descobrir o _IPAdress_ do módulo utilizado. 
Para usúario do Windows, seguir este passo a passo:
1. Acesse o prompt de comendo
2. Digite `ipconfig`
3. Anote o endereço de IP.

![ip](https://github.com/LPAE/pi2_eng_19_2/blob/master/Carol_Farias_Luiz_Erthal/images/ip.png)

**Funções**

É possível mudar algumas informações no código de acordo com a necessidade do usuário. 

Caso o mesmo queira mudar as mensagens escritas no _display_ LCD, basta mudar cada vez que aparece:
```
lcd.clear();
    lcd.setCursor(0,0);                 // Primeira frase na coluna 0 e linha 0
    lcd.print("Ola usuario");
    lcd.setCursor(0,1);                 // Segunda frase na coluna 0 e linha 1
    lcd.print("Acesso liberado!");
```
Além de alterar também a função de mensagem inicial:
```
void mensageminicial()
{
  lcd.clear();
  lcd.print("Aproxime o seu");
  lcd.setCursor(0,1);
  lcd.print("cartao do leitor");
}
```

Na função do servido web, o usuário também pode fazer modificações.
Além de alterar as mensagem pré-definidas, o mesmo pode pedir para alguma variável de seu interesse ser mostrada.
Neste caso, um pouco de conhecimento em HTML e programação se faz necessário.

```
 client.println("HTTP/1.1 200 OK");
                    client.println("Content-Type: text/html");
                    client.println("Connection: close");
                    client.println();
                    client.println(refresh = 3);
                    client.println("<!DOCTYPE html>");
                    client.println("<html>");
                    client.println("<head>");
                    client.println("<title>Servidor WEB - Fechadura Eletrônica </title>");
                    client.println("</head>");
                    client.println("<body>");
                    client.println("<h1>Alunos: Carol Farias e Luiz Gustavo Erthal</h1>
                    client.println("<h1>Log History</h1>");
                    client.println("<p>");
                    client.println(info);
                    client.println("</p>");               
                    client.println("</body>");
                    client.println("</html>");
                    break;
```

**Outros**


Pequenas alterações também podem ser feitas ao decorrer do código. Fica, por exemplo, a escolha do usuário o tempo do acionamento do buzzer `delay(3000)` ou até mesmo em `noTone(buzzer)`. Ressaltando que o tempo em _delay_ está em milisegundos.

A dupla recomenda que se explore o código, que é _open source_, para o aprimoramento do mesmo.

**Aplicativo**

Feito utilizando a programação em blocos do _My App Inventor_, _software_ livre desenvolvido pelo MIT, o aplicativo da fechadura eletrônica fornece outro meio inovador de controle do portão.

Seu código pode ser encontrado [aqui](https://github.com/LPAE/pi2_eng_19_2/blob/master/Carol_Farias_Luiz_Erthal/Codigo_aplicativo.pdf)

![app1](https://github.com/LPAE/pi2_eng_19_2/blob/master/Carol_Farias_Luiz_Erthal/images/app1.jpeg)

![app2](https://github.com/LPAE/pi2_eng_19_2/blob/master/Carol_Farias_Luiz_Erthal/images/app2.jpeg)

## 6. CONCLUSÕES

O intuito do projeto era de desenvolver uma fechadura com as tecnologias mais atuais do mercado. Utilizando o método de CDIO, foi possível vencer a maior barreira na área de desenvolvimento de projetos: gerenciamento de tempo.

Com quatro fases pré-estabelecidas e datas definidas, as implementações do projeto durante todo o semestre fluíram naturalmente. E talvez seja esse o maior conhecimento adquirido durante o Projeto Integrador II.

Por fim, o projeto da fechadura é algo que podemos visualizar na prática desde sua concepção até o projeto final. É um protótipo que pode muito bem ser aprimorado e vendido comercialmente futuramente.

## 7. REFERÊNCIAS

¹[What is industry 4.0? - Forbes](https://www.forbes.com/sites/bernardmarr/2018/09/02/what-is-industry-4-0-heres-a-super-easy-explanation-for-anyone/#1127c6ff9788) | Acessado em: 11/09/2019

²[What is industry 4.0? - Epicor](https://www.epicor.com/en-ae/resource-center/articles/what-is-industry-4-0/) | Acessado em: 11/09/2019

³[Indústria 4.0 - Governo Federal do Brasil](http://www.industria40.gov.br/) | Acessado em: 11/09/2019

<sup>4</sup>[Arduino Mega Datasheet](https://www.robotshop.com/media/files/pdf/arduinomega2560datasheet.pdf) | Acessado em: 15/12/2019.