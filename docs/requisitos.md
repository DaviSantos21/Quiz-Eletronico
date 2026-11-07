# Requisitos do Sistema

## 1. Introdução

Este documento apresenta os requisitos funcionais e não funcionais do **Quiz Eletrônico**, um quiz eletrônico desenvolvido com ESP32, cujo objetivo é proporcionar uma experiência interativa de aprendizagem e autoavaliação de conhecimentos.

## 2. Requisitos Funcionais

Os requisitos funcionais descrevem as funcionalidades e operações que o sistema deve oferecer.

| ID | Requisito | Descrição |
|---|---|---|
| RF01 | Iniciar quiz | O sistema deve permitir iniciar uma partida. |
| RF02 | Exibir perguntas | O sistema deve apresentar uma pergunta por vez. |
| RF03 | Exibir alternativas | O sistema deve apresentar as alternativas disponíveis para cada pergunta. |
| RF04 | Selecionar alternativa | O sistema deve permitir selecionar uma alternativa utilizando botões físicos. |
| RF05 | Confirmar resposta | O sistema deve permitir confirmar a alternativa selecionada. |
| RF06 | Navegar pelas perguntas | O sistema deve permitir avançar entre as perguntas. |
| RF07 | Exibir progresso | O sistema deve informar o progresso do participante durante o quiz. |
| RF08 | Verificar resposta | O sistema deve comparar a resposta selecionada com a resposta correta. |
| RF09 | Apresentar feedback | O sistema deve informar se a resposta está correta ou incorreta. |
| RF10 | Calcular pontuação | O sistema deve calcular a quantidade de respostas corretas e incorretas. |
| RF11 | Exibir resultado | O sistema deve apresentar a pontuação final do participante. |
| RF12 | Reiniciar quiz | O sistema deve permitir iniciar uma nova partida. |

## 3. Requisitos Não Funcionais

Os requisitos não funcionais estabelecem critérios de qualidade, desempenho e limitações que o sistema deve respeitar.

| ID | Requisito | Descrição |
|---|---|---|
| RNF01 | Usabilidade | A interface deve ser simples e intuitiva para o público em geral. |
| RNF02 | Desempenho | O sistema deve responder rapidamente aos comandos dos botões. |
| RNF03 | Confiabilidade | O sistema deve registrar e verificar corretamente as respostas. |
| RNF04 | Legibilidade | As informações devem ser apresentadas de forma legível no display. |
| RNF05 | Manutenibilidade | O código deve ser organizado em módulos para facilitar futuras alterações. |
| RNF06 | Eficiência | O software deve utilizar adequadamente os recursos de memória e processamento do ESP32. |
| RNF07 | Compatibilidade | O sistema deve ser desenvolvido para funcionar na plataforma ESP32. |
| RNF08 | Funcionamento offline | O sistema deve funcionar sem depender de conexão com a internet. |

## 4. Limitações do Projeto

Na primeira versão, o sistema terá as seguintes limitações:

- As perguntas e alternativas serão previamente cadastradas no programa.
- A interação será realizada por meio de botões físicos.
- O sistema não dependerá de conexão com a internet.
- Não haverá cadastro de usuários ou ranking de participantes.

## 5. Critérios de Aceitação

O sistema será considerado funcional quando for capaz de:

- Iniciar uma partida.
- Exibir perguntas e alternativas.
- Permitir a seleção e confirmação de respostas.
- Verificar as respostas selecionadas.
- Calcular e apresentar a pontuação final.
- Permitir o reinício do quiz.