#include <stdio.h>
#include "../include/vetor.h"
#include "../include/metricas.h"

int main(void)
{
    int tamanho = 10;
    int *vetor = gerar_vetor(tamanho, ALEATORIO);
    if (vetor == NULL)
        return 1;

    printf("Vetor gerado:\n");
    imprimir_vetor(vetor, tamanho);

    Metricas m;
    metricas_iniciar(&m, "Bubble Sort");

    metricas_iniciar_cronometro();

    //chamando o vetor de ordenação
    //bubble_sort(vetor, tamanho, &m);

    metricas_parar_cronometro(&m);

    printf("\nVetor apos Bubble Sort:\n");
    imprimir_vetor(vetor, tamanho);

    metricas_imprimir(&m);

    liberar_vetor(vetor);
    return 0;
}