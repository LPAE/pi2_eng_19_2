Instituto Federal de Educação, Ciência e Tecnologia de Santa Catarina - Campus Florianópolis

Departamento Acadêmico de Eletrônica Curso de Engenharia Eletrônica

Projeto Integrador II

Alunos:

* Victor Lompa Schwider
* Gabriel Ayres Rodrigues

# Sumário

1. Introdução
2. Concepção
3. Desenho
4. Implementação
5. Operacionalização
6. Referências

# Introdução 

O termo indústria 4.0 é de origem alemã e remete à chamada quarta revolução industrial. Essa é caracterizada por novas tecnologias do mundo digital, que incrementam a digitalização já presente na indústria e têm o potencial de redefinir a mesma.

O progresso em relação à última revolução industrial é definido pelas àreas da informação e computação. Um fator diferencial para as duas é o atual poder nos sistemas embarcados, que torna realidade o conceitos como a Internet das Coisas.

Diante disso novas promessas de mercado surgem, resultando no crescimento de algunas indústrias enquanto outras tendem à 
obsolescência. 

# Concepção 

Esse projeto visa aplicar os conhecimentos adquiridos durante o curso e introduzir o processo de desenvolvimento. Junto a isso, iremos ampliar nosso leque de conhecimento ao longo da unidade curricular ao trabalhar com os diversos dispositivos e tecnologias utilizadas para a montagem do produto final, isso é, uma fechadura eletrônica. 

Sendo um componente de segurança as fechaduras têm sua base nas ideias de controle e confiabilidade. Podemos concluir que as fechaduras eletrônicas superam as convencionais, pois apresentam vantagens nos dois focos. Para uma análise mais específica, vejamos primeiro a questão do controle; uma fechadura eletrônica pode ser acionada por sensores devidamente integrados, por comandos elétricos e, é claro, por uma chave convencional. Assim podemos evitar restrições no que diz respeito ao tempo da operação, distância e pessoal envolvido; o que nos leva à confiabilidade.

Como visto nos conceitos de indústria 4.0, sistemas eletrônicos são multifuncionais. Essa complexidade agrega solidez ao conjunto, tornando-o mais difícil de ser violado. Além disso, a versatilidade possibilita respostas superiores em relação à quebra da segurança. Alguns exemplos são: 
* Monitoramento do local, feito pelo registro de atividade, muitas vezes visual
* Maior resistência por menos espaço, isso é, um mecanismo acionado por eletricidade tem mais poder por espaço que um dependente de energia mecânica 
* Medidas ofensivas contra um possível invasor, comunicando a brecha com um simples alarme e/ou digitalmente para uma rede de pessoas. 

As vantagens acima caracterizam as tecnologias que serão usadas nesse projeto. O acionamento da fechadura será controlado por um Arduino MEGA, que enviará um sinal para a abertura da mesma caso o usuário insira a senha correta em um teclado matricial. A interface incluirá um Display 16x2 que informará o status da operação junto a um buzzer que responderá ao sucesso ou não. Ultilizando um conector bluetooth, o Arduino se comunicará com um aplicativo desenvolvido de dispositivos móveis para que possa ser feito o monitoramento de entrada e saída pelo usuário.

Em parceria com a unidade curricular de Eletrônica 1 serão desenvolvidos circuitos eletrônicos que fazem parte dos grupos citados acima, nisso está inclusa uma fonte de alimentação para o projeto. A seguir são especificadas as diferentes partes aqui comentadas, levando em conta a disponibilidade dos equipamentos no inventário do câmpus.

# Design
