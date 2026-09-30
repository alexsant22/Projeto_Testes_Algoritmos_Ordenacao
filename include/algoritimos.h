#ifndef ALGORITMOS_H
#define ALGORITMOS_H

#include "metricas.h"

/* Contrato comum: todos recebem o vetor, o tamanho e um ponteiro para Metricas.
   Quem implementa cada um:
   - Insertion e Selection: (Alexandre)
   - Bubble, Quick e Merge: (Liliane) */

void insertion_sort(int *vetor, int tamanho, Metricas *m);
void selection_sort(int *vetor, int tamanho, Metricas *m);

#endif