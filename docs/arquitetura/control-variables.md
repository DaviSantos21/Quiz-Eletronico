# Control Variables — Quiz Eletrônico

## 1. Objetivo

Identificar as variáveis responsáveis por armazenar e controlar as informações necessárias durante a execução do quiz.

## 2. Variáveis principais

| Variável | Tipo | Valor inicial | Finalidade |
|---|---|---|---|
| perguntaAtual | int | 0 | Identifica a pergunta atual. |
| respostaUsuario | int | -1 | Armazena a alternativa selecionada. |
| pontuacao | int | 0 | Contabiliza os acertos. |
| totalPerguntas | int | 10 | Define a quantidade de perguntas. |
| estadoAtual | Estado | INICIO | Controla o estado do programa. |

## 3. Registro das respostas

Para permitir o armazenamento das respostas selecionadas pelo usuário, será utilizado um vetor.

```cpp
int respostasUsuario[10];
```

Cada posição corresponderá a uma pergunta.

O valor armazenado representará o índice da alternativa selecionada.

## 4. Inicialização das variáveis

```cpp
int perguntaAtual = 0;
int respostaUsuario = -1;
int pontuacao = 0;
int totalPerguntas = 10;

int respostasUsuario[10];

Estado estadoAtual = INICIO;
```

## 5. Responsabilidades

- **perguntaAtual:** controla a navegação entre as perguntas.
- **respostaUsuario:** recebe a alternativa escolhida.
- **pontuacao:** registra a quantidade de respostas corretas.
- **totalPerguntas:** determina quando o quiz deve terminar.
- **respostasUsuario:** mantém o histórico das escolhas.
- **estadoAtual:** determina qual parte do programa será executada.

## 6. Considerações

Os valores iniciais das variáveis deverão ser definidos durante a inicialização do sistema.

A quantidade de perguntas deverá ser compatível com o tamanho do vetor utilizado para armazená-las.

O modelo poderá ser ampliado para incluir temporizadores, controle de tentativas e estatísticas de desempenho.