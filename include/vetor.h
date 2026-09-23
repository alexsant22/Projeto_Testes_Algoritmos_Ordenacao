#ifndef VETOR_H
#define VETOR_H

typedef enum {
    ALEATORIO = 0,
    ORDENADO = 1,
    INVERTIDO = 2
} TipoVetor;

int* gerar_vetor(int tamanho, TipoVetor tipo);
void liberar_vetor(int* vetor);
void imprimir_vetor(int* vetor, int tamanho);

#endif