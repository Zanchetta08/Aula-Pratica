#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int *vetor){
    int aux;
    for(int j = 0; j < 1000; j++){
        for(int i = 0; i < 1000; i++){
            if(vetor[i+1] < vetor[i]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
    }
}

void preencheVet(int *vetor){
    srand( (unsigned)time(NULL) );
    for(int i = 0; i < 1000; i++){
        vetor[i] = 1 + (rand() % 100);
    }
}

int main(){
    int vetor[1000];
    preencheVet(vetor);
    bubbleSort(vetor);
    for(int i = 0; i < 1000; i++){
        printf("%d\n", vetor[i]);
    }


    return 0;
}
