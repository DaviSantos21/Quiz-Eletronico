# Planejamento

## 1. Visão Geral

O **Quiz Eletrônico** é um sistema de quiz eletrônico desenvolvido com o microcontrolador ESP32. Seu propósito é oferecer uma ferramenta interativa para testar conhecimentos, estimular a aprendizagem e permitir a autoavaliação dos participantes.

O sistema apresentará perguntas e alternativas em um display, permitindo que o participante interaja por meio de botões físicos.

## 2. Problema

A avaliação de conhecimentos pode ser realizada por diferentes métodos, mas nem sempre esses métodos oferecem uma experiência interativa e dinâmica.

Diante disso, surge a proposta de desenvolver um dispositivo eletrônico capaz de apresentar perguntas, receber respostas e fornecer resultados de maneira automatizada.

## 3. Solução Proposta

Desenvolver um sistema embarcado utilizando ESP32 para executar um quiz eletrônico.

O dispositivo deverá apresentar perguntas e alternativas, receber as escolhas do participante, verificar as respostas e calcular a pontuação final.

## 4. Objetivo Geral

Desenvolver um quiz eletrônico utilizando ESP32, proporcionando uma experiência interativa de aprendizagem e autoavaliação de conhecimentos.

## 5. Público-Alvo

O sistema será destinado ao público em geral, podendo ser utilizado em atividades educativas, momentos de aprendizagem e testes de conhecimentos.

## 6. Escopo do Projeto

### 6.1 Incluído na primeira versão

- Apresentação de perguntas e alternativas.
- Seleção de alternativas por botões físicos.
- Confirmação e verificação das respostas.
- Navegação entre perguntas.
- Apresentação de feedback.
- Cálculo e exibição da pontuação final.
- Possibilidade de reiniciar o quiz.

### 6.2 Fora do escopo inicial

- Cadastro de participantes.
- Sistema de ranking.
- Conexão com a internet.
- Cadastro de perguntas diretamente pelo dispositivo.

## 7. Contexto Tecnológico

O projeto será desenvolvido como um sistema embarcado, utilizando o ESP32 como unidade principal de processamento.

As principais tecnologias e ferramentas previstas são:

- ESP32: microcontrolador responsável pela execução do sistema.
- C++: linguagem de programação.
- Arduino Framework: framework para desenvolvimento do software embarcado.
- VS Code: ambiente de desenvolvimento.
- PlatformIO: ferramenta de gerenciamento e compilação do projeto.
- Git e GitHub: controle de versão e hospedagem do código.

## 8. Resultado Esperado

Ao final do desenvolvimento, espera-se obter um dispositivo eletrônico funcional capaz de executar uma partida de quiz, desde a apresentação das perguntas até a exibição dos resultados, utilizando uma interface física simples e intuitiva.