
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
5. [Operacionalização](#Operacionalização)
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
![Croqui](https://github.com/LPAE/pi2_eng_19_2/blob/master/Cicero_Junior_Vitor_Hugo/Img/Croqui_pi.jpg)

| Tecnologias      | Dispositivos           |
| -----------------|:----------------------:|
| Wi-Fi            | esp8266-01             |
| Bluetooth        | HC-05                  |
| Radiofrequência  | RFID RDM6300 125KHz    |
| Display          | LCD 2.4"TFT - ILI9341  |
| Microcontrolador | Arduino Mega 2560 Rev3 |

1. O módulo wi-fi esp8266-01 é o dispositivo ideal para o projeto, pois, sua conexão com a internet pode ser feita via wi-fi facilitando a sua instalação e portabilidade.

2. O display gráfico escolhido também possui tecnologia touchscreen, dessa forma, ele será usado como display e teclado em nosso projeto.

3. Entre as opções recomendadas para o projeto, o microcontrolador Arduino Mega mostrou-se a melhor opção devido ao grande número de portas de entrada e saída.


