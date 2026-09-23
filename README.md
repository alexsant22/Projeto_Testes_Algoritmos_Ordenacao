# Testes de Algoritmos de Ordenação

Projeto da disciplina de Estruturas de Dados. Simula uma plataforma interativa em C para testar e comparar algoritmos de ordenação, medindo tempo de execução, número de comparações e de trocas para diferentes tamanhos e tipos de vetores.

## Visão geral

O programa funciona como um laboratório de linha de comando para analisar, na prática, o desempenho de diferentes algoritmos de ordenação — permitindo enxergar de forma concreta conceitos como Notação Big-O, recursividade e o impacto da estrutura de dados escolhida sobre a eficiência de um programa.

## Funcionalidades

- Seleção entre os algoritmos: Bubble Sort, Selection Sort, Insertion Sort, Merge Sort e Quick Sort.
- Geração de vetores aleatórios, ordenados ou invertidos, em tamanho definido pelo usuário.
- Painel de estatísticas com tempo de execução (ms), número de comparações e número de trocas.
- Modo passo a passo, que exibe o vetor a cada troca de posição.
- Comparação entre algoritmos executados sobre o mesmo conjunto de dados.

## Estrutura do projeto

```
projeto-ordenacao/
├── include/
│   ├── vetor.h        # Geração e liberação de vetores
│   ├── metricas.h      # Struct de métricas e cronômetro
│   └── algoritmos.h    # Assinaturas dos algoritmos de ordenação
├── src/
│   ├── main.c          # Menu principal e fluxo de execução
│   ├── vetor.c
│   ├── metricas.c
│   └── algoritmos.c
├── Makefile
└── README.md
```

## Módulos

**Gerador de vetores** — aloca dinamicamente um vetor de inteiros e o preenche de forma aleatória, ordenada ou invertida, conforme escolha do usuário.

**Módulo de métricas** — struct `Metricas`, que armazena nome do algoritmo, número de comparações, número de trocas e tempo de execução em milissegundos, medido com a biblioteca `time.h`.

```c
typedef struct {
    char nome[30];
    long long comparacoes;
    long long trocas;
    double tempo_ms;
} Metricas;
```

**Módulo de algoritmos** — implementa Bubble, Selection, Insertion, Merge e Quick Sort, cada um recebendo o vetor, seu tamanho e um ponteiro para `Metricas`, incrementando os contadores a cada comparação e troca realizada.

**Menu principal** — lê o tamanho do vetor e o tipo de dado via `scanf`, gera o vetor, executa o algoritmo escolhido e exibe o relatório final de desempenho.

## Fluxo de execução

1. O usuário define o tamanho do vetor.
2. O sistema aloca o vetor e gera os números base (aleatório, ordenado ou invertido).
3. O usuário escolhe o algoritmo de ordenação.
4. O algoritmo é executado, atualizando os contadores de métricas.
5. O programa exibe o relatório final com tempo, comparações e trocas.

## Como compilar e executar

```bash
gcc -Wall -Wextra -Iinclude -std=c11 src/*.c -o ordenador
./ordenador
```

Ou, se preferir usar o Makefile incluído:

```bash
make
./ordenador
```

## Conceitos da disciplina aplicados

| Conceito                        | Onde aparece no projeto                                                                         |
| ------------------------------- | ----------------------------------------------------------------------------------------------- |
| Ponteiros e alocação de memória | Geração dinâmica do vetor (`malloc`/`free`)                                                     |
| Notação Big-O                   | Comparação prática entre O(n²) (Bubble/Selection) e O(n log n) (Merge/Quick) no relatório final |
| Recursividade                   | Implementação do Merge Sort e do Quick Sort                                                     |
| Métodos de classificação        | Bubble, Selection, Insertion, Merge e Quick Sort                                                |

## Status do projeto

🚧 Em desenvolvimento.
