#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void troca(int *vetor, int i, int j){
	int aux = vetor[i];
	vetor[i] = vetor[j];
	vetor[j] = aux;
}

int particiona(int *vetor, int inicio, int fim){
	int pivo, pivo_indice, i;
	pivo = vetor[fim];
	pivo_indice = inicio;
	for(i = inicio; i < fim; i++){
		if(vetor[i] <= pivo){
			troca(vetor, i, pivo_indice);
			pivo_indice++;
		}
	}
	troca(vetor, pivo_indice, fim);
	return pivo_indice;
}

int particiona_random(int *vetor, int inicio, int fim){
	int pivo_indice = (rand() % (fim - inicio + 1)) + inicio;
	troca(vetor, pivo_indice, fim);
	return particiona(vetor, inicio, fim);
}

void quick_sort(int *vetor, int inicio, int fim){
	if(inicio < fim){
		int pivo_indice = particiona_random(vetor, inicio, fim);
		quick_sort(vetor, inicio, pivo_indice - 1);
		quick_sort(vetor, pivo_indice + 1, fim);
	}
}
//=============================================

void imprimirVet(int *vetor){
    printf("\n\n\n\n\n\n");
    for(int i = 0; i < 1000; i++){
        printf("%d - ", vetor[i]);
    }
    printf("\n\n\n\n\n\n");
}

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
    media = media / 1000.0;
    printf("A media desse vetor eh: %.2f\n", media);
}

void bubbleSort(int *vetor){
    int aux;
    for(int j = 0; j < 1000 - 1; j++){
        for(int i = 0; i < 1000 - j - 1; i++){
            if(vetor[i+1] < vetor[i]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
    }
    imprimirVet(vetor);
}

void preencheVet(int *vetor){
    srand( (unsigned)time(NULL) );
    for(int i = 0; i < 1000; i++){
        vetor[i] = 1 + (rand() % 100);
    }
   imprimirVet(vetor);
}

int main(){
    int vetor[1000];
    preencheVet(vetor);
    //bubbleSort(vetor);
    quick_sort(vetor, 0, 999);
    imprimirVet(vetor);
    media(vetor);
    mediana(vetor);
    maiorValor(vetor);
    menorValor(vetor);

    return 0;
}










