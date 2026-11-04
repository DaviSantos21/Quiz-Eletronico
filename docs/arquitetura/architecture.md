# Arquitetura do Software — Quiz Eletrônico

## 1. Introdução

Este documento apresenta a arquitetura de software do projeto de Quiz Eletrônico, um sistema embarcado desenvolvido em C++ para a plataforma ESP32.

O sistema tem como finalidade apresentar perguntas e alternativas ao usuário, permitir a seleção de respostas, controlar a navegação entre as questões e apresentar os resultados ao final do questionário.

A arquitetura estabelece a organização lógica do software, suas principais responsabilidades e a relação entre os componentes.

## 2. Objetivos da Arquitetura

A arquitetura do sistema tem como objetivos:

- Organizar o código em componentes com responsabilidades específicas.
- Separar o gerenciamento dos dados da lógica de funcionamento.
- Facilitar a manutenção e a evolução do software.
- Definir uma estrutura clara para a execução do programa.
- Permitir a implementação incremental das funcionalidades.

## 3. Tecnologias e Ferramentas

O desenvolvimento do projeto utilizará as seguintes tecnologias e ferramentas:

| Tecnologia | Finalidade |
|---|---|
| C++ | Linguagem de programação. |
| ESP32 | Plataforma de hardware do sistema embarcado. |
| PlatformIO | Ambiente de desenvolvimento e gerenciamento do projeto. |
| Visual Studio Code | Editor de código-fonte. |
| Git | Controle de versão. |
| GitHub | Hospedagem do repositório e documentação. |

## 4. Organização do Sistema

O software será organizado em componentes lógicos, cada um responsável por uma parte do funcionamento do quiz.

### 4.1 Gerenciamento de Perguntas

Responsável por organizar, armazenar e disponibilizar as perguntas e suas respectivas alternativas.

### 4.2 Controle de Estados

Responsável por controlar os estados do programa e determinar as transições entre as diferentes etapas de execução.

### 4.3 Gerenciamento de Respostas

Responsável por receber as alternativas selecionadas pelo usuário e registrar suas respostas.

### 4.4 Gerenciamento da Pontuação

Responsável por verificar os acertos e atualizar a pontuação durante a execução do questionário.

### 4.5 Interface do Usuário

Responsável pela apresentação das perguntas, alternativas e resultados, além de permitir a interação do usuário com o sistema.

## 5. Estrutura de Dados

As informações das perguntas serão representadas por uma estrutura (`struct`) em C++.

Cada pergunta possuirá um enunciado, quatro alternativas e o índice correspondente à alternativa correta.

As perguntas serão organizadas em uma coleção para facilitar o acesso durante a execução.

Documento relacionado: [Modelo de Dados](data-model.md).

## 6. Fluxo de Execução

O funcionamento do sistema será controlado por uma máquina de estados.

Inicialmente, o sistema realizará sua inicialização e apresentará a primeira pergunta. Após a seleção de uma alternativa, a resposta será registrada e verificada.

Em seguida, o sistema avançará para a próxima pergunta ou apresentará o resultado final, caso todas as questões tenham sido respondidas.

Documento relacionado: [Máquina de Estados](state-machine.md).

## 7. Variáveis de Controle

O sistema utilizará variáveis para controlar informações importantes durante a execução, como:

- Índice da pergunta atual.
- Alternativa selecionada pelo usuário.
- Pontuação acumulada.
- Quantidade total de perguntas.
- Estado atual do programa.
- Histórico de respostas.

Documento relacionado: [Variáveis de Controle](control-variables.md).

## 8. Diagramas do Sistema

A arquitetura será complementada por representações gráficas que facilitarão a compreensão da organização e do funcionamento do software.

Os diagramas previstos são:

- Fluxograma geral do sistema.
- Diagrama da máquina de estados.

Documento relacionado: [Fluxograma do Sistema](system-flowchart.md).

## 9. Estratégia de Implementação

O desenvolvimento será realizado de maneira incremental, implementando e testando as funcionalidades por etapas.

A implementação seguirá uma sequência que contempla:

1. Definição e organização das estruturas de dados.
2. Implementação do controle de estados.
3. Implementação do gerenciamento de perguntas e respostas.
4. Implementação do cálculo da pontuação.
5. Integração com a interface do usuário.
6. Testes e validação do funcionamento geral.

## 10. Possíveis Evoluções

A arquitetura poderá ser ampliada futuramente para contemplar novas funcionalidades, como:

- Reiniciar o questionário.
- Adicionar limite de tempo para responder.
- Organizar perguntas por categorias.
- Armazenar resultados.
- Implementar diferentes modos de questionário.
- Aprimorar a interface do usuário.

## 11. Considerações Finais

A arquitetura definida estabelece a base para a implementação do Electronic Quiz System.

A separação das responsabilidades e a documentação das principais decisões técnicas permitem que o desenvolvimento seja realizado de maneira organizada, facilitando a manutenção, os testes e a inclusão de novas funcionalidades.