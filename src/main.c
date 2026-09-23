#include <stdio.h>
#include "vetor.h"

int main(void)
{
    int tamanho = 10;
    int *vetor = gerar_vetor(tamanho, ALEATORIO);
    if (vetor == NULL)
        return 1;

    printf("Vetor gerado:\n");
    imprimir_vetor(vetor, tamanho);

    liberar_vetor(vetor);
    return 0;
}