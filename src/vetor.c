#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetor.h"

int *gerar_vetor(int tamanho, TipoVetor tipo)
{
    int *vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        return NULL;
    }

    switch (tipo)
    {
    case ORDENADO:
        for (int i = 0; i < tamanho; i++)
            vetor[i] = i;
        break;
    case INVERTIDO:
        for (int i = 0; i < tamanho; i++)
            vetor[i] = tamanho - i;
        break;
    case ALEATORIO:
    default:
        srand(time(NULL));
        for (int i = 0; i < tamanho; i++)
            vetor[i] = rand() % (tamanho * 10);
        break;
    }

    return vetor;
}

void liberar_vetor(int *vetor)
{
    free(vetor);
}

void imprimir_vetor(int *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}