#include <stdio.h>
#include "vetor.h"
#include "metricas.h"

int main(void)
{
    int tamanho = 10;
    int *vetor = gerar_vetor(tamanho, ALEATORIO);
    if (vetor == NULL)
        return 1;

    printf("Vetor gerado:\n");
    imprimir_vetor(vetor, tamanho);

    Metricas m;
    metricas_iniciar(&m, "Bubble Sort"); /* nome placeholder ate o algoritmo existir */

    metricas_iniciar_cronometro();

    /* TODO: chamar o algoritmo de ordenacao aqui, passando &m
       Ex: bubble_sort(vetor, tamanho, &m); */

    metricas_parar_cronometro(&m);

    printf("\nVetor apos ordenacao (ainda sem ordenacao real):\n");
    imprimir_vetor(vetor, tamanho);

    metricas_imprimir(&m);

    liberar_vetor(vetor);
    return 0;
}