#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"
#include "metricas.h"
#include "algoritimos.h"

int main(void)
{
    int tamanho;
    int escolha_tipo;
    int escolha_algoritmo;

    printf("=== Testes de Algoritmos de Ordenacao ===\n\n");

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    printf("\nTipo de vetor:\n");
    printf("1 - Aleatorio\n");
    printf("2 - Ordenado\n");
    printf("3 - Invertido\n");
    printf("Escolha: ");
    scanf("%d", &escolha_tipo);

    if (escolha_tipo < 1 || escolha_tipo > 3)
    {
        printf("Opcao invalida.\n");
        return 1;
    }

    /* ALEATORIO=0, ORDENADO=1, INVERTIDO=2 no enum -> escolha_tipo - 1 */
    TipoVetor tipo = (TipoVetor)(escolha_tipo - 1);

    int *vetor = gerar_vetor(tamanho, tipo);
    if (vetor == NULL)
        return 1;

    printf("\nVetor gerado:\n");
    imprimir_vetor(vetor, tamanho);

    printf("\nAlgoritmo de ordenacao:\n");
    printf("1 - Bubble Sort\n");
    printf("2 - Selection Sort\n");
    printf("3 - Insertion Sort\n");
    printf("4 - Merge Sort\n");
    printf("5 - Quick Sort\n");
    printf("Escolha: ");
    scanf("%d", &escolha_algoritmo);

    Metricas m;

    switch (escolha_algoritmo)
    {
    case 1:
        printf("\nBubble Sort ainda nao foi implementado nesta versao.\n");
        liberar_vetor(vetor);
        return 0;
    case 2:
        metricas_iniciar(&m, "Selection Sort");
        metricas_iniciar_cronometro();
        selection_sort(vetor, tamanho, &m);
        metricas_parar_cronometro(&m);
        break;
    case 3:
        metricas_iniciar(&m, "Insertion Sort");
        metricas_iniciar_cronometro();
        insertion_sort(vetor, tamanho, &m);
        metricas_parar_cronometro(&m);
        break;
    case 4:
        printf("\nMerge Sort ainda nao foi implementado nesta versao.\n");
        liberar_vetor(vetor);
        return 0;
    case 5:
        printf("\nQuick Sort ainda nao foi implementado nesta versao.\n");
        liberar_vetor(vetor);
        return 0;
    default:
        printf("Opcao invalida.\n");
        liberar_vetor(vetor);
        return 1;
    }

    printf("\nVetor apos ordenacao:\n");
    imprimir_vetor(vetor, tamanho);

    metricas_imprimir(&m);

    liberar_vetor(vetor);
    return 0;
}