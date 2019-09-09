
# Projeto Integrador 2 2019_2

Instituto Federal de Educação, Ciência e Tecnologia de Santa Catarina - Campus Florianópolis Departamento Acadêmico de Eletrônica Curso de Engenharia Eletrônica

Alunos: 

- João Pedro Dalvit Tonelo 
- Nycolas de Abreu Coelho

## SUMÁRIO

1. Introdução
2. Concepção
3. Desenho
4. Implementação
5. Operacionalização
6. Referências
7. Introdução

## INTRODUÇÃO

Ao longo do tempo observa-se movimentos ditos revoluções industriais, que mostraram ao mundo os avanços das tecnologias em diversas lugares. As três primeiras revoluções trouxeram a sociedade à mecanização, a força a vapor, produção em escala, eletricidade, combustão, automação, robótica, internet, eletrônicos, diminuindo por consequência: tempo, dinheiro e mão de obra.

É com base nos contextos acima que a quarta revolução industrial é denominada indústria 4.0, caracterizando-se no desenvolvimento e modificação de gerir pessoas e indústrias. Ela irá trazer a sociedade os sistemas cibernéticos, internet das coisas, inteligência artificial, entre outras coisas, facilitando a comunicação e tomadas de decisões.

A ideia da indústria 4.0 está relacionada com o cenário da globalização, no qual as empresas almejam por vantagens competitivas e para se diferenciar em suas áreas de atuação. Essas vantagens se baseiam em novas estratégias para acompanhar o mercado em constantes melhorias nos processos internos da empresa, com o intuito de aprimorar o nível de serviço prestado aos seus clientes e fornecedores, tudo com o menor tempo ao melhor custo possível e com o máximo de eficiência nos processos. (CNI, 2016)

Portanto, a quarta revolução industrial já está presente no mundo, ainda com pouca ênfase, mas ela será predominante em um futuro próximo, mudando a forma das pessoas de pensar e agir.

## CONCEPÇÃO

O estágio de concepção deste projeto é uma parte relevante para delimitar parâmetros de execução e design, é um momento para o projetista organizar suas ideias e objetivos com seu cliente. As tecnologias empregadas são de escolha dos projetistas, estes dependem de recursos financeiros e da logística de compra e recebimento de matérias, para finalização do projeto em tempo hábil. 
A porta automática ira ser simulada em um modelo de miniatura, totalmente funcional e fiel há um produto que poderá ser utilizado no futuro. Sobre esta miniatura serão implantados blocos para a realização das seguintes tarefas:

1.  Programação e controle de dados
2.  Controle com senha
3.  Controle com sensor RFID ( Radio-Frequency IDentification )
4.  Indicação sonora 
5.  Indicação luminosa
6.  Indicação em display 
7. Ativação do dispositivo

Serão necessárias algumas tecnologias para o desenvolvimento do projeto, são elas:

| Requisitos                      | Tecnologia                        | Quantidade |
| ------------------------------- | --------------------------------- | ---------- |
| Programação e controle de dados | Arduíno Mega                      | 1          |
| Controle com senha              | Teclado Matricial De Membrana 4x4 | 1          |
| Controle com sensor RFID        | RC522                             | 1          |
| Indicação sonora                | Buzzer 5V                         | 1          |
| Indicação luminosa              | LED                               | 2          |
| Indicação em display            | Display LCD 16x2                  | 1          |
| Ativaçãp do dispositivo         | Relé 5V                           | 1          |

### Programação e controle de dados
![Arduíno Mega](https://store-cdn.arduino.cc/usa/catalog/product/cache/1/image/520x330/604a3538c15e081937dbfbd20aa60aad/a/0/a000067_featured_1_.jpg)

Como todo projeto, este necessita de um "cérebro" para comandar todos os dados e ações que iremos tratar. O Arduíno é uma ferramenta multifuncional de programação, é barato e fácil de trabalhar, se encaixa perfeitamente com diversos tipos de sensores e tem uma ampla comunidade de usuários e fóruns na internet.
A escolha do Arduíno Mega é simples, ele possui uma grande quantidade de pinos I/O, o que irá facilitar o andamento deste projeto, visto que serão conectados 6 equipamentos ao mesmo.

### Controle com senha
![enter image description here](https://http2.mlstatic.com/teclado-matricial-de-membrana-16-teclas-4x4-arduino-pic-D_NQ_NP_603001-MLB28609022550_112018-F.jpg)

O Teclado matricial foi desenvolvido com a finalidade de facilitar a entrada de dados nos projetos. Este teclado possui 16 teclas, onde 10 teclas são numerais, 4 literais e 2 de caracteres.
O teclado será utilizado como uma das maneiras do usuário liberar a trava da porta, através de uma senha predefinida.

### Controle com sensor RFID
![enter image description here](https://images-na.ssl-images-amazon.com/images/I/71wuC+BKB4L._SL1500_.jpg)

**RFID** (**R**adio **F**requency **ID**entification ou Identificação por radiofrequência) é uma tecnologia que utiliza sinais de rádio e uma etiqueta (tag) RFID para leitura e gravação de dados, é amplamente utilizado diariamente pelas pessoas que utilizam transportes públicos e por grandes empresas para o controle de entrada e saída de funcionários.
Neste projeto ele será utilizado como uma maneira de liberar a trava da porta, apenas com a aproximação de uma tag ou cartão.

### Indicação sonora
![enter image description here](https://images-na.ssl-images-amazon.com/images/I/41AphP4CswL._SX342_.jpg)

O buzzer é um componente de geração de ruídos sonoros a partir da excitação elétrica de componentes eletromecânicos ou piezoelétricos. As principais aplicações do buzzer são alarmes, campainhas, despertadores, brinquedos e sistemas automatizados.
Ele será utilizado neste projeto como aviso sonoro caso seja aceita a senha do teclado, assim como do RFID, e caso sejam negados emitira um som característico.

### Indicação luminosa
![enter image description here](http://www.tecnotend.com.br/image/cache/data/Produtos/Prototipagem/led/led_2-500x500.JPG)

O LED Trata-se de um componente eletrônico capaz de emitir luz visível transformando energia elétrica em energia luminosa. 
Será utilizado dois LED's para indicar a situação da trava, se for liberada irá acender um LED verde, caso contrário um LED vermelho acenderá.

### Indicação em display
![enter image description here](https://uploads.filipeflop.com/2011/09/LCD-16x2-com-arduino.png)

Esse display LCD tem 16 colunas e 2 linhas, com backlight (luz de fundo) azul e letras na cor branca. É utilizado para apresentar informações do sistema ao usuário.
Será utilizado para informar se a senha ou RFID foram aceitos pelo programa, emitindo uma frase de "Bem vindo" no caso de acesso permitido, e uma frase "Tente novamente" no caso de acesso negado.

### Ativação do dispositivo
