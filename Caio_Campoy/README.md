# Projeto Integrador II - Engenharia Eletrônica
#### Caio Felipe Campoy

# Sumário

1. Introdução
1. Concepção
1. Implementação
1. Operacionalização
1. Referências

# Introdução
## INDÚSTRIA 4.0
A indústria global está em um momento significatívo de mudanças e transformações devido à digitalização da manufatura.
Está transição é tão grande que está sendo denominada como Indústria 4.0, representando a quarta revolução do processo industrial.

Tal revolução é dada majoritariamente pela integração de sistemas inteligentes para controlar os processos de produção, aumentando consideravelmente a efecificiência de tais processos.

Com essa nova tendência em mente, esse projeto tem como objetivo utilizar os princípios da Indústria 4.0 para controlar e administrar a utilização de um porteiro eletrônico.

# Concepção

O processo de controle da fechadura será efetuado das seguintes formas:

* **Digitação de senha**

Será utilizado um teclado matricial para digitação de senha cadastrada pelo usuário.
O teclado é conectado diretamente ao barramento do microcontrolador, que terá acesso ao sistema de controle para validar a senha.

* **RFID (Identificação por Radiofrequência)**

O abrimento da fechadura é permitido por meio de cartão ou chaveiro magnético.

* **Aplicativo Móvel**

É permitida a abertura da fechadura por meio de um aplicativo android de duas formas distintas, sendo elas:

1. Conexão bluetooth:
O usuário cadastrado, conectado ao bluetooth, pode abrir diretamente a fechadura pelo app.

1. Conexão wi-fi:
O usuário cadastrado, conectado ao wi-fi, mediante confirmação de presença próxima ao portão, pode abrir a fechadura pelo app.
