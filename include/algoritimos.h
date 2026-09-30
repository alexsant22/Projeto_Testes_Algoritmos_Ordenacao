#ifndef ALGORITMOS_H
#define ALGORITMOS_H

#include "metricas.h"

void bubble_sort(int *vetor, int tamanho, Metricas *m);

void quick_sort(int *vetor, int tamanho, Metricas *m);

void merge_sort(int *vetor, int tamanho, Metricas *m);

#endif // ALGORITMOS_H