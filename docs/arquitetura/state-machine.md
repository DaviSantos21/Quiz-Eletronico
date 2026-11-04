# State Machine — Quiz Eletrônico

## 1. Objetivo

Definir os estados de funcionamento do sistema e as transições que ocorrem durante a execução do quiz.

## 2. Estados do sistema

| Estado | Descrição |
|---|---|
| INICIO | Inicialização do sistema. |
| TELA_PERGUNTA | Exibição do enunciado e das alternativas. |
| VERIFICAR_RESPOSTA | Verificação da alternativa selecionada. |
| TELA_RESULTADO | Apresentação da pontuação final. |

## 3. Fluxo de estados

O funcionamento geral seguirá esta sequência:

1. O sistema inicia.
2. A primeira pergunta é apresentada.
3. O usuário seleciona uma alternativa.
4. O sistema verifica a resposta.
5. O sistema avança para a próxima pergunta.
6. Quando todas as perguntas forem respondidas, o resultado final será apresentado.

## 4. Transições

| Estado atual | Condição | Próximo estado |
|---|---|---|
| INICIO | Inicialização concluída | TELA_PERGUNTA |
| TELA_PERGUNTA | Resposta selecionada | VERIFICAR_RESPOSTA |
| VERIFICAR_RESPOSTA | Existem perguntas restantes | TELA_PERGUNTA |
| VERIFICAR_RESPOSTA | Todas as perguntas respondidas | TELA_RESULTADO |

## 5. Representação em C++

```cpp
enum Estado {
    INICIO,
    TELA_PERGUNTA,
    VERIFICAR_RESPOSTA,
    TELA_RESULTADO
};

Estado estadoAtual = INICIO;
```

## 6. Considerações

A máquina de estados será responsável por controlar o fluxo de execução do quiz.

Cada estado deverá possuir suas próprias responsabilidades, evitando que toda a lógica do programa fique concentrada em uma única função.

Novos estados poderão ser adicionados conforme a evolução do projeto, como PAUSADO, AGUARDANDO_RESPOSTA ou REINICIAR.