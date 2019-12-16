# Projeto Integrador II 2019_2
Instituto federal de educação, ciência e tecnologia de Santa Catarina - Câmpus Florianópolis Departamento Acadêmico de Eletrônica Curso de graduação em engenharia eletrônica
Alunos: 
* Conrado Becker Gressler
* José Henrique Schmitt Fidelis
# Sumário
1. Introdução
2. Concepção
3. Design
4. Implementação
5. Operacionalização
6. Referências
# Introdução
## INDÚSTRIA 4.0
Antes da globalização e da evolução dos meios de comunicação, indústrias, países e pessoas utilizavam de métodos analógicos e de certa forma, rudimentares, quando comparados com a internet. Devido ao desenvolvimento na área de divulgação de informações que surgiu com a vinda desta e com sua presença se tornando cada vez mais usual e necessária, novas formas de utiliza-la assim como outros meios de comunicação similares entre o usuário e as máquinas acabaram por tomar conta da rotina de milhares de pessoas. Essas ferramentas começaram a ser implementadas cada vez mais nas empresas e meios de produção de larga escala com o intuito de, cada vez mais, facilitar e acelerar os processos que ja eram automatizados como, por exemplo, sincronizar as confecções de produtos entre fábricas de maneira remota. A indústria 4.0 é reconhecida pela implementação dessas novas tecnologias ditas “inteligentes” para aprimorar os meios de produção que são regidos por máquinas, criando uma comunicação entre dispositivos com o intuito de automatizar processos da melhor forma possível. A quarta revolução industrial favorece o crescimento de áreas voltadas para programação e desenvolvimento de componentes eletrônicos, alterando o tipo de profissional necessário para realizar certas atividades e mudando os meios de produção com inovações tecnológicas que surgem da interação e necessidade das pessoas ao redor do mundo. Além de promover a competitividade entre empresas devido ao alcance global dos meios de comunicação. Os desafios agora são achar meios para que nossas tecnologias mantenham uma sincronia adequada, pois qualquer erro na comunicação entre elas pode dificultar ou até mesmo arruinar processos inteiros causando inumeros prejuízos. Como por exemplo uma tranca eletrônica com mal funcionamento e falhas em sua conexão com a rede pode deixar uma casa mal protegida ou o proprietário trancado do lado de fora.
# Concepção
A ideia básica é uma fechadura eletrônica capás de abrir de multiplas formas diferentes e que indique seu status através de display e som. Os componentes vitais são a fechadura em si, sua fonte de alimentação, seus sensores e seu processador de dados. Nossa ideia será o uso de TAGs de acesso lidos por um Leitor RFID RDM6300 125KHz, senha através de touch no Display gráfico 2.4 “TFT - ILI9341 (que também será usado para mostrar os status da fechadura), acesso a um aplicativo utilisando o módulo de bluetooth HC-05 e uso de um site através do Ethernet Shield W5100. Utilizaremos um arduino MEGA para fazer todos os processamentos. Ele será colocado em uma case própria e seus componentes serão conectados diretamente a suas portas através de fios, ficando assim semelhante a ideia de um gabinete de computador. Para evitar tentativas de invasão através da senha, tentamos deixa-la facilmente alteravél pelo dono da tranca através de uma memória interna (onde a senha seria guardada) que pode ser retirada e alterada, todavia isso exigiria portas que um arduino MEGA que usamos não possui de fábrica. Pensamos tamém numa possível implementação de camêra, porém a ideia foi descargata pois o arduino MEGA não é capaz de alimentá-la. Cada um dos fatores será sinalizado por meio de display, LEDs e som através de um buzzer.
# Design
Começamos a pensar nas formas de encaixar os pinos do arduino nos componentes. Descobrimos que podemos implementar o Display e o Shield Ethernet diretamente sobre o arduino, sobrando assim mais espaço e pinos lógicos para os outros componentes.
# Implementação
A partir da planta encaixamos o display e o shield e conectamos todos os fios nas devidas portas lógicas. Depois de ter uma ideia de quanto espaço seria necessário para cada componente e seus fios, montamos a case através de lego (principalmente legos da linha MINDSTORMS). Por fim o projeto inspirado em um gabinete funcionou e todas as peças e fios ficaram protegidas e em posições favoráveis para a manipulação e manuntenção.
# Operacionalização
A princípio toda a parte física do projeto funcionou como o previsto. Infelizmente devido a diversas complicações, não fomos capazes de implementar uma programação para o arduino operar todos esses componenetes e simultaneamente. Diversos problemas com compilação, falha de hardware do display e dificuldades com a linguagem de programação do arduino, impediram a conclusão, mesmo após 44 horas de trabalho somente em cima da programação visando depurar as falhas apresentadas. Acreditamos que o projeto se desenvolveu de forma satisfatória, porém devido à limitação de tempo não foi possível entregar os resultados como prevíamos.
# Referências
- Site do LPAE: https://lpae.github.io/pi2_eng/ .
- Site do Arduino: https://www.arduino.cc/ .
- Fórum do Arduino para buscar respostas para bugs: https://forum.arduino.cc/   .
Topic: 2.4" TFT LCD Touch Screen - https://forum.arduino.cc/index.php?topic=550017.0 .
- Sites sobre o display: https://portal.vidadesilicio.com.br/primeiros-passos-shield-lcd-tft-24-touchscreen/ , https://www.filipeflop.com/blog/display-touch-arduino-shield/ .
- Sites sobre o bluetooth: https://www.filipeflop.com/blog/tutorial-arduino-bluetooth-hc-05-mestre/ , https://www.robocore.net/tutoriais/configurando-bluetooth-hc-05-via-arduino , https://www.embarcados.com.br/modulos-bluetooth-hc-05-e-hc-06/ .
- Sites sobre o RFID: https://www.arduinoecia.com.br/leitor-rfid-rdm6300-125khz-arduino/ , https://www.instructables.com/id/Arduino-Tutorials-RFID/ .
- Sites sobre o Ethernet: https://www.filipeflop.com/blog/tutorial-ethernet-shield-w5100/ , http://blogmasterwalkershop.com.br/arduino/arduino-utilizando-o-ethernet-shield-w5100-via-web-server/ , https://www.techtudo.com.br/listas/2018/03/cabo-rj-45-tem-diferentes-tipos-e-velocidades-veja-o-que-muda.ghtml .
