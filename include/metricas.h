#ifndef METRICAS_H
#define METRICAS_H

typedef struct {
    char nome[30];
    long long comparacoes;
    long long trocas;
    double tempo_ms;
} Metricas;

/* Zera os contadores e define o nome do algoritmo que sera medido */
void metricas_iniciar(Metricas* m, const char* nome_algoritmo);

/* Chamar a cada comparacao/troca dentro dos algoritmos de ordenacao */
void metricas_incrementar_comparacao(Metricas* m);
void metricas_incrementar_troca(Metricas* m);

/* Cronometro: chamar iniciar antes do algoritmo e parar logo depois */
void metricas_iniciar_cronometro(void);
void metricas_parar_cronometro(Metricas* m);

/* Exibe o relatorio final formatado */
void metricas_imprimir(const Metricas* m);

#endif