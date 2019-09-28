# Projeto Integrador 2 2019_2
IFSC | Instituto Federal de Educação, Ciência e Tecnologia de Santa Catarina

Câmpus Florianópolis Departamento Acadêmico de Eletrônica

Curso de Engenharia Eletrônica

Alunos:

• Gabriel Romero Siqueira dos Santos

• Jean Eifler

## Sumário
1. Introdução
2. Proposta
3. Concepção
4. Design
5. Implemetação
6. Operação
7. Referências

## 1. Introdução
### Indústria 4.0

    A indústria 4.0 surge para buscar melhorar a eficiência de produção, podendo se dar de várias formas. Os processos buscam ser autônomos, havendo tecnologias de monitoramento e com tomadas de decisão em tempo real, diminuindo assim a dependência de seres humanos em território fabril, que podem consultar o funcionamento a distância.

    Os processos automatizados visam interagir o máximo possível entre si, de forma que as possibilidades para seu comércio são gigantescas, como por exemplo os dispositivos utilizados na Internet das Coisas, que nada mais é do que a paralelização industrial com as rotinas domésticas em busca de maior conforto e segurança.

    As análises de desempenho são todas feitas automaticamente, uma vez que é possível para o sistema analisar e gerenciar todas as informações obtidas ao longo de determinado tempo e com isso buscar melhores resultados para ambas as partes envolvidas em qualquer relação comercial.

    A eficiência é tamanha que não é mais incomum indústrias trabalharem no escuro, simplesmente por não haver necessidade de material humano dentro dela, isso gera novas tendências nos modelos de negócios onde só haverá espaço de trabalho para quem for destaque.

    A indústria inteligente surgiu de forma veloz, acompanhando o crescimento da capacidade humana de produzir informação, é um modelo que tende a passar despercebido tal qual um sistema embarcado e encaminha para ser o grande modelo de produção dos próximos anos.

## 2. Proposta 
O projeto será realizado através do método CDIO (Concepção -> Design -> Implementar -> Operar).
#### Concepção:
Explanar as necessidades do cliente, técnologias disponíveis, estratégias e normas para planejar o projeto.
#### Design:
Desenvolver as ideias no papel para visualizar o que será executado.
#### Implementar:
Dar vida ao design transformando-o em produto e desenvolvimentos de testes.
#### Operar:
Entrega do produto testado e validado, caso necessário manutenções e recolhimento do sistema.

Através do CDIO é possível identificar detalhadamente as habilidades que um engenheiro deve ter.

## 3. Concepção
O desafio proposto é implantar meios de destrancar uma fechadura eletrônica não energizada em uma pequena porta de madeira usada para teste.

O primeiro obstáculo encontrado para fazer a fechadura funcionar, é a construção de uma fonte para alimentá-la.

As soluções para destrancar a fechadura encontradas foram:
- Teclado matricial;
    - A função do teclado no projeto é possibilitar que o usuário implemente uma senha, troque a senha, e destranque a fechadura entrando com a senha correta. 
        - OBS: Por medidas de segurança, somente será possível trocar a senha se o usuário entrar com a senha correta atual.
- Técnologia RFID (Identificação por Radiofrequência);
    - O RFID no projeto facilitará ao usuário destrancar a fechadura através da leitura de um chip que poderá estar, por exemplo, num cartão.
- App de celular.
    - O aplicativo para smartphones é acrescentado ao projeto a fim de modernizar sutilmente, afinal, atualmente, quando o celular é uma opção de usar como recurso, facilita ao usuário.
        - A comunicação entre o app mobile e o circuito é realizada através de módulos bluetooth e wi-fi.

Recursos Visuais:
- LEDs que informem se a fechadura está trancada ou destrancada.
- Display:
    - mostrar ocultamente passo a passo da senha digitada;
    - Informar:
        - Senha *CORRETA* ou *INCORRETA*;
        - Fechadura *ABERTA* ou *FECHADA*.

Recurso Auditivo:
- Buzzer que emitirá som quando:
    - Tecla do teclado matricial for pressionada;
        - informando ao usuário que um digito foi selecionado.
    - Fechadura abrir ou fechar;
        - informando ao usuário que a fechadura mudou de estado.


Para medidas de segurança do cliente é implementado um alarme.

O Arduino comandará todos os processos e será responsável de enviar e receber informações da fechadura.

O Arduino Mega 2560  é a plataforma a ser utilizada para controlar o sistema.

A placa de prototipagem é baseada no microcontrolador microcontrolador ATmega2560, possui 54 pinos de entrada e saída de sinais digitais, 16 entrada analógicas e 4 portas de comunicação serial.
- 15 saídas digitais podem ser usadas como saídas PWM (Pulse Width Modulation), Modulação de Largura de Pulso.

## 4. Design
O design consiste em visualizar o plano das ideias no papel e entender os elementos do projeto, pois já foram definidas, na etapa do concepção, a resolução para abrir a fechadura.

#### As especificações dos elementos a seguir foram retiradas do fornecedor FILIPEFLOP

### TECLADO MATRICIAL DE MEMBRANA
Especificações:
- Teclas: 16;
- Conector: 8 pinos (2,54mm);
- Montagem: Auto-Adesivo;
- Limites de Operação: 35VDC, 100mA;
- Isolação: 100MΩ, 100V;
- Tempo de contato: 5ms;
- Durabilidade: 1 milhão de ciclos por tecla;
- Temperatura de Funcionamento: 0-70°C;
- Tamanho: 69 x 77 x 0,8mm;
- Comprimento Cabo: 86mm;
- Peso: 10g;
- Lado posterior do Teclado auto-adesivo.

### LEITOR RFID RDM6300 - 125khz
Especificações:
- Módulo RFID RDM6300;
- Tensão de operação: 5V DC;
- Corrente: <50mA;
- Frequencia 125KHz;
- Interface: TTL RS232;
- Antena externa;
- Dimensões antena: 46 x 32 x 3mm;
- Dimensões módulo: 38.5 x 19 x 9mm;

### MÓDULO BLUETOOTH RS232 HC-05
Especificações:
- Protocolo Bluetooth: v2.0+EDR;
- Firmware: Linvor 1.8;
- Frequência: 2,4GHz Banda ISM;
- Modulação: GFSK;
- Emissão de energia: <=4dBm, Classe 2;
- Sensibilidade: <=84dBm com 0,1% BER;
- Velocidade Assíncrono: 2,1Mbps(Max)/160Kbps;
- Velocidade Síncrono: 1Mbps/1Mbps;
- Segurança: Autentificação e Encriptação;
- Perfil: Porta Serial Bluetooth;
- Suporta modo Escravo (Slave) e Mestre (Master);
- CSR chip: Bluetooth v2.0;
- Banda de Onda: 2,4Hhz-2,8Ghz, Banda ISM;
- Tensão: 3,3v (2,7-4.2v);
- Corrente: Pareado 35mA; Conectado 8mA;
- Temperatura: -40 ~ +105°C;
- Alcance: 10m;
- Baud Rate: 4800;9600;19200;38400;57600;115200;230400;460800;921600;1382400;
- Dimensões: 26,9 x 13 x 2,2mm;
- Peso: 9,6g.

O módulo BT RS232 HC-05 é um método de comunicação com o Arduino fácil e barato, e é facilmente configurável.


### ETHERNET SHIELD W5100
O shield quando encaixado na placa, basta apenas plugar na rede para tornar o arduino online, também possuí um slot para cartão micro-SD para armazenar arquivos, útil para guardar informações caso a esteja sem rede ethernet.

### DISPLAY GRÁFICO 2.4 "TFT - ILI9341

### PLANTA

## 5. Implemetação
## 6. Operação
## 7. Referências
