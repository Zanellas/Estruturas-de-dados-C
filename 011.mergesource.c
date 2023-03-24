#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define elementos 12

void mergesort(int vetorms[], int inicio, int fim);
void merge(int vetorm[], int inicio, int metade, int fim);

void merge(int vetorm[], int inicio, int metade, int fim) {
    int inicio1 = inicio;
    int inicio2 = metade+1;
    int inicio_aux = 0;
    int tamanho = fim - inicio + 1;
    int vetor_aux[elementos];

    while (inicio1 <= metade && inicio2 <= fim) {
        if (vetorm[inicio1] <= vetorm[inicio2]) {
            vetor_aux[inicio_aux] = vetorm[inicio1];
            inicio1++;
        }else{
            vetor_aux[inicio_aux] = vetorm[inicio2];
            inicio2++;
        }
        inicio_aux++;
    }

    while (inicio1 <= metade) {
        vetor_aux[inicio_aux] = vetorm[inicio1];
        inicio_aux++;
        inicio1++;
    }

    while (inicio2 <= fim) {
        vetor_aux[inicio_aux] = vetorm[inicio2];
        inicio_aux++;
        inicio2++;
    }

    for (inicio_aux = inicio; inicio_aux <= fim; inicio_aux++) {
        vetorm[inicio_aux] = vetor_aux[inicio_aux - inicio];
    }
}

void mergesort(int vetorms[], int inicio, int fim) {
    if (inicio < fim) {
        int metade = (fim + inicio) / 2;
        mergesort(vetorms, inicio, metade);
        mergesort(vetorms, metade + 1, fim);
        merge(vetorms, inicio, metade, fim);
    }
}

main() {
    int posicao, vetor[elementos];

    printf("\n Vetor Inicial:\n");

    for (posicao = 0; posicao < elementos; posicao++)
        vetor[posicao] = rand()%200;

    for (posicao = 0; posicao < elementos; posicao++)
        printf("%d", vetor[posicao];

    mergesort(vetor, 0, elementos-1);

    printf("\n Vetor ordenado pelo quicksort:\n");
    for (posicao = 0; posicao < elementos; posicao++)
        printf("%d", vetor[posicao]);
}
