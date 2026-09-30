#include <stdlib.h>
#include "../include/algoritimos.h"

// Função de ordenação Bubble Sort
void bubble_sort(int *vetor, int tamanho, Metricas *m)
{
    for (int i = 0; i < tamanho - 1; i++)
    {
        for (int j = 0; j < tamanho - 1 - i; j++)
        {
            metrica_incrementar_comparacao(m);

            if (vetor[j] > vetor[j + 1])
            {
                int temp = vetor[j];

                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;

                metrica_incrementar_troca(m);
            }
        }
    }
}

// Função particionar do Quick Sort
/*int particionar(int *vetor, int inicio, int fim, Metricas *m)
{
    int pivo = vetor[fim];

    int i = inicio - 1;

    for (int j = inicio; j < fim; j++)
    {
        metrica_incrementar_comparacao(m);

        if (vetor[j] <= pivo)
        {
            i++;

            if (i != j)
            {
                int temp = vetor[i];

                vetor[i] = vetor[j];
                vetor[j] = temp;

                metrica_incrementar_troca(m);
            }
        }
    }

    if (i + 1 != fim)
    {
        int temp = vetor[i + 1];

        vetor[i + 1] = vetor[fim];
        vetor[fim] = temp;

        metrica_incrementar_troca(m);
    }

    return i + 1;
} // fim da função particionar

// quick_sort_recursivo
void quick_sort_recursivo(
    int *vetor,
    int inicio,
    int fim,
    Metricas *m)
{
    if (inicio < fim)
    {
        int posicao_pivo =
            particionar(vetor, inicio, fim, m);

        quick_sort_recursivo(
            vetor,
            inicio,
            posicao_pivo - 1,
            m);

        quick_sort_recursivo(
            vetor,
            posicao_pivo + 1,
            fim,
            m);
    }
}

// Algoritmo Quick Sort
void quick_sort(int *vetor, int tamanho, Metricas *m)
{
    quick_sort_recursivo(
        vetor,
        0,
        tamanho - 1,
        m);
}*/

/*

// Merge Sort
void merge(
    int *vetor,
    int inicio,
    int meio,
    int fim,
    Metricas *m)
{
    int tamanho = fim - inicio + 1;

    int *temp = malloc(tamanho * sizeof(int));

    int i = inicio;
    int j = meio + 1;
    int k = 0;

    while (i <= meio && j <= fim)
    {
        metrica_incrementar_comparacao(m);

        if (vetor[i] <= vetor[j])
        {
            temp[k] = vetor[i];
            i++;
        }
        else
        {
            temp[k] = vetor[j];
            j++;
        }

        k++;
    }

    while (i <= meio)
    {
        temp[k] = vetor[i];
        i++;
        k++;
    }

    while (j <= fim)
    {
        temp[k] = vetor[j];
        j++;
        k++;
    }

    for (i = inicio, k = 0; i <= fim; i++, k++)
    {
        vetor[i] = temp[k];

        metrica_incrementar_troca(m);
    }

    free(temp);
}


void merge_sort_recursivo(
    int *vetor,
    int inicio,
    int fim,
    Metricas *m)
{
    if (inicio < fim)
    {
        int meio = (inicio + fim) / 2;

        merge_sort_recursivo(
            vetor,
            inicio,
            meio,
            m);

        merge_sort_recursivo(
            vetor,
            meio + 1,
            fim,
            m);

        merge(
            vetor,
            inicio,
            meio,
            fim,
            m);
    }
}


void merge_sort(int *vetor, int tamanho, Metricas *m)
{
    merge_sort_recursivo(
        vetor,
        0,
        tamanho - 1,
        m);
}*/