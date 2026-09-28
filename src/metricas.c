#include <stdio.h>
#include <string.h>
#include <time.h>
#include "metricas.h"

/* Guarda o instante de inicio do cronometro entre as chamadas de
   metricas_iniciar_cronometro() e metricas_parar_cronometro().
   Como o projeto roda um algoritmo por vez, uma variavel estatica
   (privada a este arquivo) e suficiente. */
static clock_t inicio_cronometro;

void metricas_iniciar(Metricas *m, const char *nome_algoritmo)
{
    strncpy(m->nome, nome_algoritmo, sizeof(m->nome) - 1);
    m->nome[sizeof(m->nome) - 1] = '\0'; /* garante string terminada */

    (*m).comparacoes = 0;
    (*m).trocas = 0;
    (*m).tempo_ms = 0.0;
}

void metricas_incrementar_comparacao(Metricas *m)
{
    (*m).comparacoes++;
}

void metricas_incrementar_troca(Metricas *m)
{
    (*m).trocas++;
}

void metricas_iniciar_cronometro(void)
{
    inicio_cronometro = clock();
}

void metricas_parar_cronometro(Metricas *m)
{
    clock_t fim = clock();
    (*m).tempo_ms = ((double)(fim - inicio_cronometro) / CLOCKS_PER_SEC) * 1000.0;
}

void metricas_imprimir(const Metricas *m)
{
    printf("\n===== Relatorio de Desempenho =====\n");
    printf("Algoritmo:    %s\n", (*m).nome);
    printf("Comparacoes:  %lld\n", (*m).comparacoes);
    printf("Trocas:       %lld\n", (*m).trocas);
    printf("Tempo:        %.3f ms\n", (*m).tempo_ms);
    printf("====================================\n");
}