# **Projeto Integrador 2 2019_2**

Instituto Federal de Educação, Ciência e Tecnologia de Santa Catarina.

Campus Florianópolis. 

Departamento Acadêmico de Eletrônica Curso de Engenharia Eletrônica.

Alunos:

* Natália Besen
* Rafael Dutra Ribas Filho

# **Sumário** 

1. Introdução
2. Concepção
3. Desenho
4. Implementação
5. Operacionalização
6. Referências

# **Introdução**

A Indústria 4.0 ou quarta revolução industrial é um conceito que engloba a implementação de diversas inovações tecnológicas, tendo como base a IoT (internet das coisas) e Big Data Analytics. Visando uma indústria e processos produtivos mais inteligentes e otimizados serão utilizadas  principalmente tecnologias como a inteligência artificial, manufatura aditiva, biologia sintética e sistemas cyber-físicos.

A quarta revolução industrial busca uma virtualização dos processos, a fim de torná-los monitoráveis de forma remota. Por meio da utilização dos sistemas cyber-físicos, que são como “cópias virtuais” da indústria inteligente, e inúmeros sensores uma fábrica poderá ser controlada por meio de um simples smartphone. Tais sistemas aliados a uma espécie de inteligência artificial também são responsáveis pela tomada de algumas decisões de acordo com a necessidade em tempo real da indústria, tornando os processos produtivos mais descentralizados, eficientes e ágeis.

Para obter essa capacidade de operação em tempo real, a obtenção, análise e tratamento de dados necessita ser instantânea. E o que permite que tal ocorra são os dois principais pilares dessa revolução, o conceito de IoT, que consiste na conexão em rede de objetos físicos e ambientes entre si e com o usuário, e Big Data Analytics, que relaciona-se com a enorme quantidade de dados gerados e o processamento imediato dessas informações. 

Assim, a indústria 4.0 busca reformular a maneira como são feitos os processos industriais e seu controle, tornando-os rápidos, eficazes e personalizados. Dentro dessa filosofia, será realizado a gestão e controle do acionamento de uma fechadura elétrica utilizando a abordagem CDIO.    

# **Concepção**

Na unidade curricular de projeto integrador II, recebemos como desafio a construção sistema de controle capaz de abrir uma fechadura elétrica, utilizando diversas tecnologias para facilitar o acesso e a comunicação com o usuário. As tecnologias propostas para o destravamento da porta foram sensor RFID e teclado numérico e para a comunicação com o usuário display gráfico, buzzer e interface por computador e celular.

Para o nosso projeto utilizaremos o Arduino para o controle dessas tecnologias, utilizaremos o sensor RFID para acesso a porta por meio de cartões adequados para tal. Para selecionar os cartões que terão acesso ao ambiente ou deixarão de ter, o usuário possuirá um cartão-mestre para realizar esse controle, além de opções para troca de cartão-mestre em caso de perda, por exemplo.Para facilitar a passagem, na parte interna do ambiente a porta será aberta apenas com um botão, pois a segurança necessita ser feita apenas na entrada. 

A abertura via teclado será feita por meio de uma senha configurada pelo usuário, que poderá ser alterada digitando um conjunto de caracteres padrão seguidos da senha atual e a nova à ser programada.

A trava terá três principais estados e a comunicação com o usuário por meio de led, buzzer e display lcd informará o estado que essa se encontra. Quando aberta,ocorrerá um breve aviso sonoro, o led fica verde e o display apresentará a palavra “aberto”. Enquanto a fechadura estiver fechada o led apresenta um vermelho intermitente e o display caracteriza esse estado solicitando uma senha.O led com vermelho contínuo seguido de um breve aviso sonoro anuncia o erro de senha digitada no teclado.

A interface via computador ou smartphone será criada com o intuito de manter o usuário atualizado de todas as ações que estão ocorrendo em sua porta, quem entrou no ambiente, novos cartões ou senhas cadastradas, disparos do alarme para acesso negado, porta aberta por muito tempo, entre outros.

Também será desenvolvido um sistema de segurança para o caso de senha ou crachá incorreto consecutivamente, bloqueando o acesso até que sejam inseridos uma senha de segurança e o cartão-mestre seja detectado pelo sensor.

Os leds e o display também serão utilizados no momento de configuração de senhas ou cartões, indicando o período de mudança com alternação de cores no led e a palavra “configuração” no display e a confirmação das alterações com a cor verde no LED e “alterações confirmadas” no display.


