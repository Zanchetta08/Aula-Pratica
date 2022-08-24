#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menorValor(int *vetor){
    int valor = vetor[0];
    for(int i = 0; i < 1000; i++){
        if(valor > vetor[i]){
            valor = vetor[i];
        }
    }
    printf("O menor valor desse vetor eh: %d\n", valor);
}
void maiorValor(int *vetor){
    int valor = vetor[0];
    for(int i = 0; i < 1000; i++){
        if(valor < vetor[i]){
            valor = vetor[i];
        }
    }
    printf("O maior valor desse vetor eh: %d\n", valor);
}

void mediana(int *vetor){
    float mediana = 0;
    mediana = (vetor[499] + vetor[500]) / 2.0;
    printf("A mediana desse vetor eh: %.2f\n", mediana);
}

void media(int *vetor){
    float media = 0;
    for(int i = 0; i < 1000; i++){
        media = media + vetor[i];
    }
    media = media / 1000;
    printf("A media desse vetor eh: %.2f\n", media);
}

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
        vetor[i] = 1 + (rand() % 10000);
    }
}

int main(){
    int vetor[1000];
    preencheVet(vetor);
    bubbleSort(vetor);
    for(int i = 0; i < 1000; i++){
        printf("%d\n", vetor[i]);
    }
    media(vetor);
    mediana(vetor);
    maiorValor(vetor);
    menorValor(vetor);

    return 0;
}
