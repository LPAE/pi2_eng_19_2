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
![Buzzer](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/Buzzer2.png)
![Hc-05](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/HC-05.png)
![4N25](https://github.com/LPAE/pi2_eng_19_2/blob/master/Victor_Lompa_e_Gabriel_Ayres/Imagens/4N25.png)



### Display 16x2

## Implementação

## Operação

## Referências bibliográficas
