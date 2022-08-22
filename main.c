#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVet(int *vetor){
    srand( (unsigned)time(NULL) );
    for(int i = 0; i < 10; i++){
        vetor[i] = 1 + (rand() % 5);
    }
}

int main(){
    int vetor[10];
    preencheVet(vetor);
    for(int i = 0; i < 10; i++){
        printf("%d\n", vetor[i]);
    }


    return 0;
}
