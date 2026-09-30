#include "../include/algoritimos.h"

/* ---------- Insertion Sort ----------
   Convencao de contagem:
   - comparacao: cada vez que a chave e comparada com um elemento do vetor
   - troca: cada deslocamento de elemento uma posicao para a direita */
void insertion_sort(int *vetor, int tamanho, Metricas *m)
{
    for (int i = 1; i < tamanho; i++)
    {
        int chave = vetor[i];
        int j = i - 1;

        while (j >= 0)
        {
            metricas_incrementar_comparacao(m);
            if (vetor[j] > chave)
            {
                vetor[j + 1] = vetor[j];
                metricas_incrementar_troca(m);
                j--;
            }
            else
            {
                break;
            }
        }
        vetor[j + 1] = chave;
    }
}

/* ---------- Selection Sort ----------
   Convencao de contagem:
   - comparacao: cada vez que vetor[j] e comparado com o menor atual
   - troca: cada troca efetiva entre vetor[i] e vetor[posMenor] */
void selection_sort(int *vetor, int tamanho, Metricas *m)
{
    for (int i = 0; i < tamanho - 1; i++)
    {
        int posMenor = i;

        for (int j = i + 1; j < tamanho; j++)
        {
            metricas_incrementar_comparacao(m);
            if (vetor[j] < vetor[posMenor])
            {
                posMenor = j;
            }
        }

        if (i != posMenor)
        {
            int aux = vetor[i];
            vetor[i] = vetor[posMenor];
            vetor[posMenor] = aux;
            metricas_incrementar_troca(m);
        }
    }
}