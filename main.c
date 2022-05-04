#include "Ordenacao.h"

int main ()
{
    srand(time(NULL));
    
    clock_t tempo_inicial, tempo_final;
    double time = 0.0;
    int tamanho_vetor = 10, i;
    int vetor [tamanho_vetor];

    gerador_vetor(&vetor[0], tamanho_vetor);

    printf("Metodo BubleSort:\n");
    printf("Vetor original: ");

    for(i = 0; i < tamanho_vetor; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    tempo_inicial = clock();

    boble_sort(&vetor[0], tamanho_vetor);

    tempo_final = clock();

    time = (double) (((tempo_final) / (CLOCKS_PER_SEC / 1000)) - ((tempo_inicial) / (CLOCKS_PER_SEC / 1000)));

    printf("tempo de processamento: %lf segundos\n", (time)/1000);

    printf("Vetor Ordenado: ");

    for(i = 0; i < tamanho_vetor; i++)
    {
        printf("%d ", vetor[i]);
    }

    gerador_vetor(&vetor[0], tamanho_vetor);

    printf("\n\nMetodo Selection Sort:\n");
    printf("Vetor original: ");

    for(i = 0; i < tamanho_vetor; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");  

    tempo_inicial = clock();  

    selection_sort(&vetor[0], tamanho_vetor);

    tempo_final = clock();

    time = (double) (((tempo_final) / (CLOCKS_PER_SEC / 1000)) - ((tempo_inicial) / (CLOCKS_PER_SEC / 1000)));

    printf("tempo de processamento: %lf segundos\n", (time)/1000);

    printf("Vetor Ordenado: ");

    for(i = 0; i < tamanho_vetor; i++)
    {
        printf("%d ", vetor[i]);
    }

    gerador_vetor(&vetor[0], tamanho_vetor);

    printf("\n\nMetodo Insertion Sort:\n");
    printf("Vetor original: ");

    for(i = 0; i < tamanho_vetor; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    tempo_inicial = clock();

    insertion_sort(&vetor[0], tamanho_vetor);

    tempo_final = clock();

    time = (double) (((tempo_final) / (CLOCKS_PER_SEC / 1000)) - ((tempo_inicial) / (CLOCKS_PER_SEC / 1000)));

    printf("tempo de processamento: %lf segundos\n", (time)/1000);

    printf("Vetor Ordenado: ");

    for(i = 0; i < tamanho_vetor; i++)
    {
        printf("%d ", vetor[i]);
    }

    gerador_vetor(&vetor[0], tamanho_vetor);

    printf("\n\nMetodo Shellsort:\n");
    printf("Vetor original: ");

    for(i = 0; i < tamanho_vetor; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    tempo_inicial = clock();

    shellsort(&vetor[0], tamanho_vetor);

    tempo_final = clock();

    time = (double) (((tempo_final) / (CLOCKS_PER_SEC / 1000)) - ((tempo_inicial) / (CLOCKS_PER_SEC / 1000)));

    printf("tempo de processamento: %lf segundos\n", (time)/1000);

    printf("Vetor Ordenado: ");

    for(i = 0; i < tamanho_vetor; i++)
    {
        printf("%d ", vetor[i]);
    }

    gerador_vetor(&vetor[0], tamanho_vetor);
    

    printf("\n\nMetodo Quicksort:\n");
    printf("Vetor original: ");

    for(i = 0; i < tamanho_vetor; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    tempo_inicial = clock();

    quicksort(&vetor[0], tamanho_vetor);

    tempo_final = clock();

    time = (double) (((tempo_final) / (CLOCKS_PER_SEC / 1000)) - ((tempo_inicial) / (CLOCKS_PER_SEC / 1000)));

    printf("tempo de processamento: %lf segundos\n", (time)/1000);

    printf("Vetor Ordenado: ");

    for(i = 0; i < tamanho_vetor; i++)
    {
        printf("%d ", vetor[i]);
    }

    gerador_vetor(&vetor[0], tamanho_vetor);

    printf("\n\nMetodo Heapsort:\n");
    printf("Vetor original: ");

    for(i = 0; i < tamanho_vetor; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    tempo_inicial = clock();

    tamanho_vetor = tamanho_vetor - 1;

    Heapsort(&vetor[0], &tamanho_vetor);

    tamanho_vetor = tamanho_vetor + 1;

    tempo_final = clock();

    time = (double) (((tempo_final) / (CLOCKS_PER_SEC / 1000)) - ((tempo_inicial) / (CLOCKS_PER_SEC / 1000)));

    printf("tempo de processamento: %lf segundos\n", (time)/1000);

    printf("Vetor Ordenado: ");

    for(int i = 0; i < tamanho_vetor; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}