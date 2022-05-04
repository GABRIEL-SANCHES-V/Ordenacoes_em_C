#include "Ordenacao.h"

void gerador_vetor(int *vetor, int tamanho_vetor)
{
    int i;
    for(i = 0; i < tamanho_vetor; i++)
    {
        vetor [i] = rand() % tamanho_vetor;
    }
}

void boble_sort(int *vetor, int tamanho_vetor)
{
    int aux, trocas;
    int i, j, k;

    for(i = 0; i < (tamanho_vetor - 1); i++)
    {
        trocas = 0;
        //printf("i = %d\n", i);
        for(j = 1; j < (tamanho_vetor - i); j++)
        {
            if(vetor[j] < vetor[j - 1])
            {
                aux = vetor[j];
                vetor[j] = vetor [j - 1];
                vetor [j - 1] = aux;
                trocas = 1;
            }

            /*for(k = 0; k < tamanho_vetor; k++)
            {
                printf("%d ", vetor[k]);
            }
            printf("\n");*/
        }
        
        if(trocas == 0){
            break;
        }
    }
}

void selection_sort(int *vetor, int tamanho_vetor)
{
    int i, j, k;
    int aux, min;
    for(i = 0; i < (tamanho_vetor - 1); i++)
    {
        min = i;
        //printf("\ni = %d -> ", i);
        for(j = (i + 1); j < tamanho_vetor; j++)
        {
            if(vetor[min] > vetor[j])
            {
                min = j;
            }
        }
        aux = vetor[min];
        vetor [min] = vetor[i];
        vetor [i] = aux;

        /*for(k = 0; k < tamanho_vetor; k++)
        {
            printf("%d ", vetor[k]);
        }
        printf("\n");*/
    }
}

void insertion_sort(int *vetor, int tamanho_vetor)
{
    int i, j, k;
    int aux;
    
    for(i = 1; i < tamanho_vetor; i++)
    {
        aux = vetor[i];
        j = i - 1;

        //printf("i = %d\nAux = %d\n", i,aux);

        while(j >= 0 && (aux < vetor[j]))
        {
            vetor[j + 1] = vetor[j];

            /*printf("  j = %d -> ", j);

            for(k = 0; k < tamanho_vetor; k++)
            {
                printf("%d ", vetor[k]);
            }
            printf("\n");*/

            j--;
        }
        
        vetor[j + 1] = aux;

        /*printf("\n-> ");

        for(k = 0; k < tamanho_vetor; k++)
        {
            printf("%d ", vetor[k]);
        }
        printf("\n\n");*/
    }
}

void shellsort(int *vetor, int tamanho_vetor)
{
    int i, j, h = 0, k;
    int aux;

    do
    {
        h = (h * 3) + 1;
    }while (h < tamanho_vetor);

    do
    {
        h = h / 3;
        //printf("h = %d\n", h);
        for(i = h; i < tamanho_vetor; i++)
        {
            //printf("  i = %d\n", i);
            aux = vetor[i];
            j = i;
            while(aux < vetor[j - h])
            {
                //printf("    j = %d -> ", j);
                vetor[j] = vetor[j - h];
                j -= h;

                /*for(k = 0; k < tamanho_vetor; k++)
                {
                    printf("%d ", vetor[k]);
                }
                printf("\n");*/

                if(j < h)
                {
                    break;
                }
            }
            vetor[j] = aux;

            /*printf("  => ");
            for(k = 0; k < tamanho_vetor; k++)
            {
                printf("%d ", vetor[k]);
            }
            printf("\n");*/
        }
    }while(h != 1);
}

void particao_quicksort(int Esq, int Dir, int *i, int *j, int *vetor, int tamanho_vetor)
{
    int pivo, aux;
    *i = Esq;
    *j = Dir;
    pivo = vetor[((*i + *j)/2)];
    do{
        while(pivo > vetor[*i])
        {
            (*i)++;
            
        }
        while(pivo < vetor[*j])
        {
            (*j)--;

        }
        if(*i <= *j)
        {
            aux = vetor[*i];
            vetor[*i] = vetor[*j];
            vetor[*j] = aux;
            (*i)++;
            (*j)--;

        }
    }while(*i <= *j);
}

void ordenacao_quicksort(int Esq, int Dir, int *vetor, int tamanho_vetor)
{
    int i, j;
    particao_quicksort(Esq, Dir, &i, &j, &vetor[0], tamanho_vetor);

    if(Esq < j)
    {
        ordenacao_quicksort(Esq, j, &vetor[0], tamanho_vetor);
    }if(Dir > i)
    {
        ordenacao_quicksort(i, Dir, &vetor[0], tamanho_vetor);
    }
}

void quicksort(int *vetor, int tamanho_vetor)
{
    ordenacao_quicksort(0, (tamanho_vetor - 1), &vetor[0], tamanho_vetor);
}


void refaz_Heapsort(int Esq, int Dir, int *vetor)
{
    int j = Esq * 2;
    int aux = vetor[Esq];
    while(j <= Dir)
    {
        if((j < Dir) && (vetor[j] < vetor[j+1]))
        {
            j++;
        }if(aux >= vetor[j])
        {
            break;
        }
        vetor[Esq] = vetor[j];
        Esq = j;
        j = Esq * 2;
    }
    vetor[Esq] = aux;
}

void controi_Heapsort(int *vetor, int *tamanho_vetor)
{
    int Esq;
    Esq = (((*tamanho_vetor) / 2) + 1);
    while(Esq > 0)
    {
        Esq--;
        refaz_Heapsort(Esq, (*tamanho_vetor) , &vetor[0]);
    }
}

void Heapsort(int *vetor, int *tamanho_vetor)
{
    int aux, Esq, Dir;
    controi_Heapsort(&vetor[0], tamanho_vetor);
    Esq = 0;
    Dir = (*tamanho_vetor);
    while (Dir > 0)
    {
        aux = vetor[0];
        vetor[0] = vetor[Dir];
        vetor[Dir] = aux;
        Dir--;
        refaz_Heapsort(Esq, Dir, &vetor[0]);
    }
}