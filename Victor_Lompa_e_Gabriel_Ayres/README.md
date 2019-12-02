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

O termo indústria 4.0 é de origem alemã e remete à chamada quarta revolução industrial. É caracterizada por novas tecnologias do mundo digital, que incrementam a digitalização já presente na indústria e têm o potencial de redefini-la.

O progresso em relação à última revolução industrial é definido pelas àreas da informação e computação. Um fator diferencial para as duas é o atual poder nos sistemas embarcados, que torna realidade o conceitos como a Internet das Coisas.

Diante disso novas promessas de mercado surgem, resultando no crescimento de algunas indústrias enquanto outras tendem à 
obsolescência. 

O projeto tem como objetivos integrar os conhecimentos adquiridos durante o curso com a industria 4.0. Para alcançar esses objetivos o projeto foi definido como o desenvolvimento de uma fechadura eletrônica.

## Concepção 

A concepção é a etapa em que são definidos os requisitos do projeto e as possíveis propostas para satisfazê-los. 

A fechadura deve apresentar para o usuário uma resposta (visual e sonora) da operação. Deve ser o controlada das três seguintes formas: Via computador, celular e diretamente na fechadura (sem o uso da chave). 

Para a interface são utilizados um display gráfico (TFT ILI9431) e um buzzer (sirene). O acesso com celular é feito com o módulo bluetooth (HC-05) e a partir do computador com o módulo ethernet (W5100). O acesso diretamente pela fechadura é feito usando o  TouchScreen do display TFT e também pelos TAGs cadastrados no módulo RFID RDM6300 (Módulo de identificação por radiofrequência).  Todos os módulos e componentes são controlados pela placa de prototipagem Arduino MEGA, sendo que essa e todos os acima citados foram disponibilizados pelo IFSC. 

Em parceria com a unidade curricular de Eletrônica 1 foram desenvolvidos circuitos eletrônicos para fazer algumas conexões do sistema — a conexão entre o Arduino e a própria fechadura, por exemplo. Essas são detalhadas na etapa seguinte.

## Design

![Design3](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/Esbo%C3%A7o%203.jpg)

O shield ethernet foi projetado para que pudesse ser conectado diretamente em cima do arduino portanto, na tentantiva de não tornar o projeto muito grande, montamos um esquemático que pudesse encaixar no espaço que não foi ultilizado pelo W5100 e assim aproveitar e planejar melhor o espaço e os pinos do arduino que temos disponível.

![Esquemático](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/Esquem%C3%A1tico.PNG)

Após a impressão e corrosão da PCB, observamos que as trilhas precisariam ser muito mais grossas devido à alta corrente da fechadura que passaria por ela, então abandonamos o esquemático inicial e optamos por produzir a placa usando uma placa universal, que se mostrou mais fácil em questão de organização já que contém o espaço entre-pinos ideal para o nosso trabalho. 

![PCB](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/PCBesq.jpg)

O display TFT, assim como o shield ethernet, foi projetado para se encaixar diretamente em cima do arduino e, no nosso caso, ele poderia ser encaixado em cima do ethernet pois usa os mesmo pinos porém, pensando no resultado final, analisamos a possibilidade de ultilizar jumpers para afastar o LCD do arduino e incliná-lo a uma angulação boa para que o usuário final possa digitar a senha de forma mais agradável.
Para armazenar e proteger todos os dispositivos e ligações elétricas e eletrônicas, pensamos em um compartimento 

## Implementação
Para que seja possível implementar estas tecnologias com o arduino e usá-las para este projeto, devemos entender o funcionamento de nossos componentes e aprender a programá-los.

### Buzzer - Sinalização

![Buzzer](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/Buzzer2.png)

É um dispositivo que emite um som contínuo quando alimentado com 5V. Em nosso caso, um de seus 2 (dois) pinos irá diretamente no GND e outro será alimentado por uma porta digital do arduino, nos dando a possibilidade de configurar se ele ficará ativo e por quanto tempo ele ficará ativo adicionando um delay no código.

### HC-05 - Módulo Bluetooth

![Hc-05](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/HC-05.png)

É um módulo feito para arduino e outros microprocessadores que faz conexão bluetooth por meio de portas seriais. Pode ser uma ótima forma de comunicação sem fio entre arduino e dispositivos que possuam bluetooth como computadores e celulares visto que pode enviar e receber informações com algumas linhas de código e por um preço acessível. Possui um total de 6 (seis) pinos mas, como usaremos ele apenas para enviar informações referentes à abertura e fechamento da porta e não para receber, usaremos 4 (quatro) desses pinos: Rx, Tx e os pinos de alimentação VCC e GND.

### 4N25 - Octoacoplador

![4N25](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/4N25.png) ![4N25.2](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/4N25.2.png)

Para isolar o circuito do arduino com portas que podem fornecer no máximo 50mA do circuito da fechadura que precisa de uma corrente mais alta, podendo drenar até 2.72A para abrir, usamos um Octoacoplador constituido de um diodo emissor de luz infravermelho e um fototransistor de silício NPN que receberá o o infravermelho e será polarizado assim que o diodo for alimentado com os 5V da porta digital que conectaremos do Arduino, acionando o circuito de alta corrente e abrindo a fechadura.

### RDM6300 - Leitor RFID

![RDM6300](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/RDM6300.jpg)

O Módulo RDM6300 faz a leitura de tags e cartões RFID na frequência de 125KHz ultilizando para a comunicação com os microprocessadores portas seriais. É alimentado com 5V, possibilitando que seja alimentado diretamente pelo arduino. Sua lógica de programação no arduino consiste basicamente em aguardar o recebimento de algum valor vindo do módulo, observar se o tamanho da informação recebida é consistente com o valor esperado de uma tag 125KHz e decodificar o valor recebido para poder compará-lo com os valores de tag aceitos para a abertura da porta.

### ILI9341 - Display LCD

![ILI9341](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/ILI9341.jpg)

O ILI9341 é um display pixels TFT (transístor de película fina) LCD (display de cristal líquido) para microprocessadores que possui Touchscreen e uma resolução 240x320 RGB. Apesar de o seu funcionamento ser um pouco mais complexo, sua programação é simples e, como foi projetado para microprocessadores como o arduino, seus pinos encaixam perfeitamente com as portas do arduino, facilitando sua instalação. Para programá-lo,

### W5100 - Shield Ethernet

![W5100](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/ETHERNET.jpg)

Este shield permite que o arduino se conecte via internet, fornecendo acesso à rede (IP) nos protocolos TCP ou UDP. Foi projetado para ser compatível em pinos com as versões mais tradicionais de arduino, incluindo o arduino MEGA que é o que nos interessa. 

### Código - A programação
```
Aqui existe um Código
```

## Operação
Citar Blynk

## Referências bibliográficas
Indústria 4.0: 
Shield Ethernet: https://www.baudaeletronica.com.br/ethernet-shield-w5100-para-arduino.html
Módulo Bluetooth:
Módulo RFID: https://www.mschoeffler.de/2018/01/05/arduino-tutorial-how-to-use-the-rdm630-rdm6300-rfid-reader/
Display TFT:
Octoacoplador: http://www.vishay.com/docs/83725/4n25.pdf

