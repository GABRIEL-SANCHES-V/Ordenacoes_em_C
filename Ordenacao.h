#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void gerador_vetor(int *vetor, int tamanho_vetor);

void boble_sort(int *vetor, int tamanho_vetor);
void selection_sort(int *vetor, int tamanho_vetor);
void insertion_sort(int *vetor, int tamanho_vetor);

void shellsort(int *vetor, int tamanho_vetor);

// =====================Quicksort===================
void particao_quicksort(int Esq, int Dir, int *i, int *j, int *vetor, int tamanho_vetor);
void ordenacao_quicksort(int Esq, int Dir, int *vetor, int tamanho_vetor);
void quicksort(int *vetor, int tamanho_vetor);

// ====================Heapsort====================
void refaz_Heapsort(int Esq, int Dir, int *vetor);
void controi_Heapsort(int *vetor, int *tamanho_vetor);
void Heapsort(int *vetor, int *tamanho_vetor);