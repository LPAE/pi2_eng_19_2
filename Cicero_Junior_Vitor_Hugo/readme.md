
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

O acionamento poderá ser realizado através de 4 modos diferentes, sendo eles, conexão via [wi-fi](#Wi-fi) e [bluetooth](#Bluetooth), [teclado matricial](#Teclado) e [radiofrequência](#Radiofrequência). Desse modo dando uma maior liberdade para os usuários manipularem a fechadura da maneira que melhor convir, aumentando sua eficiência.

Para uma maior interação do usuário com o sistema de controle de acesso, o sistema terá 3 LEDs e um [display](#Display) que através de textos e sinais luminosos irão informar ao usuário o status do sistema e da fechadura. 

### Wi-fi

O módulo Wi-fi esp8266-01 será usado para se comunicar com aplicativo para celular atraves do acesso via internet, no aplicativo será possivel a abertura remota da fechadura eletronica.

### Bluetooth


### Teclado

O teclado Matricial utilizado sera um 4x4 com letras e numeros, possibilitando alterar e criar novas senhas para o acionamento da fechadura.

### Radiofrêquencia

O leitor RFID possibilita o acesso de usuarios sem a senha, apenas com o cartão cadastrado.

### Display

