
# Projeto Integrador II 2019_2

Instituto federal de educação, ciência e tecnologia de Santa Catarina - Câmpus Florianópolis
Departamento Acadêmico de Eletrônica
Curso de graduação em engenharia eletrônica

Alunos:

* Conrado Becker Gressler
* José Henrique Schmitt Fidelis

## Sumário

1. Introdução
2. Concepção
3. Design
4. Implementação
5. Operacionalização
6. Referências

## Introdução

### Indústria 4.0

Antes da globalização e da evolução dos meios de comunicação, indústrias, países e pessoas utilizavam de métodos analógicos e de certa forma, rudimentares, quando comparados com a internet. Devido ao desenvolvimento na área de divulgação de informações que surgiu com a vinda desta e com sua presença se tornando cada vez mais usual e necessária, novas formas de utiliza-la assim como outros meios de comunicação similares entre o usuário e as máquinas acabaram por tomar conta da rotina de milhares de pessoas.
Essas ferramentas começaram a ser implementadas cada vez mais nas empresas e meios de produção de larga escala com o intuito de, cada vez mais, facilitar e acelerar os processos que ja eram automatizados como, por exemplo, sincronizar as confecções de produtos entre fábricas de maneira remota.
A indústria 4.0 é reconhecida pela implementação dessas novas tecnologias ditas “inteligentes” para aprimorar os meios de produção que são regidos por máquinas, criando uma comunicação entre dispositivos com o intuito de automatizar processos da melhor forma possível.
A quarta revolução industrial favorece o crescimento de áreas voltadas para programação e desenvolvimento de componentes eletrônicos, alterando o tipo de profissional necessário para realizar certas atividades e mudando os meios de produção com inovações tecnológicas que surgem da interação e necessidade das pessoas ao redor do mundo. Além de promover a competitividade entre empresas devido ao alcance global dos meios de comunicação.
Os desafios agora são achar meios para que nossas tecnologias mantenham uma sincronia adequada, pois qualquer erro na comunicação entre elas pode dificultar ou até mesmo arruinar processos inteiros causando inumeros prejuízos. Como por exemplo uma tranca eletrônica com mal funcionamento e falhas em sua conexão com a rede pode deixar uma casa mal protegida ou o proprietário trancado do lado de fora.

## Concepção

A ideia básica é uma fechadura eletrônica capás de abrir de multiplas formas diferentes e que indique seu status através de LEDs, display e som. Os componentes vitais são a fechadura em si, sua fonte que transforma de corrente alternada para contínua, seus sensores e seu processador de dados.
Queremos seguir com ideias simples para abrir uma fechadura eletrônica, logo nosso foco não será e uso de celulares ou computadores para abrir a tranca. Nossa ideia será o uso de cartões de acesso lidos por um sensor para usuários com mais prioridade e senha através de um teclado numérico para os demais usuários, além da clássica chave física.
Para evitar tentativas de invasão através da senha, tentaremos deixa-la facilmente alteravél pelo dono da tranca através de uma memória interna (onde a senha é guardada) que pode ser retirada e alterada. Além disso, uma camera será posicionada para tirar uma foto de quem está na frente da tranca sempre que uma senha incorreta for colocada e o sistema avisará através de LEDs quando há uma foto nova na memória.
Além disso utilizaremos um arduino para fazer todos os processamentos. Ele precisará de uma interfaces para acessar a memória que contem a senha e guarda as fotos e outra para operar a fechadura eletrônica e ler seus status.
A leitura dos status da tranca será util para identificar arrombamentos e avisar o dono caso a tranca esteja com mal funcionamento ou esteja aberta por muito tempo (indicando que foi esquecida). A sinalização desses fatores aparecerá em um display, sinalizada com LED e principalmente som através de buzzer.
