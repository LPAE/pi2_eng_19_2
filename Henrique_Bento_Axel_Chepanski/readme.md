# Projeto Integrador 2 2019_2

Instituto Federal de Educação, Ciência e Tecnologia de Santa Catarina - Campus Florianópolis Departamento Acadêmico de Eletrônica Curso de Engenharia Eletrônica

Alunos:

- Henrique da Silva Bento
- Axel Patrick Chepanski Gonzaga

## Sumário 

1. Introdução

2. Concepção

3. Desenho 

4. Implementação 

5. Operacionalização

6. Referências

   

## 1 Introdução 

**INDÚSTRIA 4.0**

A indústria 4.0 também chamada de 4° revolução industrial, refere-se a implementação de tecnologias baseadas na troca de dados, controle e automação nos processos de manufatura nas indústrias. Dentre estas tecnologias o uso de conceitos como big data, conectividade, inteligência artificial, internet das coisas, machine learning entre outros são a base para a criação das denominadas “fábricas inteligentes”.O termo “indústria 4.0” foi citado pela primeira vez na Feira de Hannover em 2011, a mais importante feira industrial na Alemanha e, desde seu surgimento a implementação de seus processos tornou-se exponencialmente difundido pelo mundo. É necessária a utilização de seis princípios que devem ser seguidos para a elaboração de uma produção inteligente, sendo eles: controle da produção em tempo real, virtualização, descentralização, modularidade, interoperabilidade e orientação de serviço. A implementação da indústria 4.0 e seus princípios vêm gerando mudanças significativas no mercado sob a forma da criação de novos modelos de negócios, sendo estes baseados na customização de seus produtos conforme a exigência do cliente. Devido às constantes mudanças do mercado, a demanda por profissionais qualificados na utilização das novas tecnologias serão necessárias, porém devido a grande automação nas indústrias inteligentes grande parte dos trabalhos manuais se tornarão dispensáveis, cabendo ao empregado uma melhor capacitação em outras áreas. Especializações no desenvolvimento de softwares e eletrônica aplicada serão os mais requisitados no novo mercado de trabalho, áreas estas que precisam estar sempre em excelente funcionamento e recebendo constante manutenção.

## 2 CONCEPÇÃO

Definimos a elaboração do controle de uma fechadura eletrônica como projeto, utilizando os conceitos da indústria 4.0. Nesta etapa, nós desenvolvedores devemos nos apropriar do contexto, definir os requisitos e meios para alcançar seus objetivos, sendo estes:

- O controle da fechadura por senha;
- O controle de fechadura através de digital;
- O controle da fechadura por meio de cartões de acesso;
- Sinalização por alarme;Deverá possuir um display para exposição de dados;
- O sistema deve possuir interface com celulares e computadores;
- Módulo de comando para as interfaces e sensores (Arduino);
- Uma fonte de alimentação;

Como destacado acima, o propósito final é a criação de um sistema de controle dinâmico por meio da utilização de várias plataformas de acesso, facilitando a comunicação com o usuário e proporcionando  uma maior segurança ao mesmo. Tendo como esse objetivo, iremos especificar as tecnologias que serão utilizadas e suas aplicações no decorrer do projeto.



|       REQUISITOS        |   TIPO DE TECNOLOGIA   | QUANTIDADE |
| :---------------------: | :--------------------: | :--------: |
|   Controle por senha.   | Teclado matricial 4x4  |     1      |
|  Controle por digital.  |   Sensor biométrico    |     1      |
|  Controle por cartão.   |      Sensor RFID       |     1      |
| Sinalização por alarme. |         Buzzer         |     1      |
|   Exposição de dados.   | Display Gráfico 128x64 |     1      |
|   Módulo de comando.    |      Arduino Mega      |     1      |
|  Fonte de alimentação.  |       Fonte 12V        |     1      |

