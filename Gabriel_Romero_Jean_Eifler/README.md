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
- LEDs que informem se a fechadura está trancada ou destrancada
- Display:
    - mostrar ocultamente passo a passo da senha digitada;
    - Informar:
        - Senha *CORRETA* ou *INCORRETA*;
        - Fechadura *ABERTA* ou *FECHADA*.


Para medidas de segurança do cliente é implementado um alarme.

O arduíno comandará todos os processos e será responsável de enviar e receber informações da fechadura.

## 4. Design
## 5. Implemetação
## 6. Operação
## 7. Referências
