# Data Model — Quiz Eletrônico

## 1. Objetivo

Definir como as informações das perguntas serão organizadas e armazenadas pelo sistema.

## 2. Estrutura da pergunta

Cada pergunta será representada por uma estrutura (`struct`) em C++.

Uma pergunta deverá conter:

- Texto do enunciado.
- Lista de alternativas.
- Índice da alternativa correta.

## 3. Definição da estrutura

```cpp
struct Pergunta {
    String texto;
    String alternativas[4];
    int indiceCorreto;
};
```

## 4. Descrição dos atributos

| Atributo | Tipo | Descrição |
|---|---|---|
| texto | String | Enunciado da pergunta. |
| alternativas | String[4] | Quatro alternativas disponíveis. |
| indiceCorreto | int | Índice da alternativa correta. |

## 5. Exemplo de utilização

```cpp
Pergunta pergunta1 = {
    "Qual é a função de um transistor?",
    {
        "Armazenar dados permanentemente.",
        "Amplificar ou controlar sinais elétricos.",
        "Produzir energia elétrica.",
        "Converter energia térmica."
    },
    1
};
```

O índice 1 representa a segunda alternativa, pois os índices dos vetores começam em zero.

## 6. Organização das perguntas

As perguntas poderão ser armazenadas em um vetor de estruturas.

```cpp
Pergunta perguntas[10];
```

Nesse exemplo, o sistema possui espaço para dez perguntas.

## 7. Considerações

O modelo poderá ser ampliado futuramente para incluir categorias, níveis de dificuldade, identificadores e explicações das respostas.