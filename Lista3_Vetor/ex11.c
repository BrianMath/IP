#include <stdio.h>
 
int main() {
    int tamanho, i, j, temp;
    double mediana;
    scanf("%d", &tamanho);
 
    int vetor[tamanho];
 
    // Preencher vetor
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
    
    // Ordenar vetor usando algoritmo de insertion sort
    for(i = 1; i < tamanho; i++) {
        temp = vetor[i];
        j = i - 1;
        
        while(j >= 0 && vetor[j] > temp) {
            vetor[j+1] = vetor[j];
            j--;
        }
 
        vetor[j+1] = temp;
    }
 
    if (tamanho%2 != 0) { // Ímpar, então mediana == valor no meio
        mediana = vetor[tamanho/2];
    } else {
        mediana = (double)(vetor[tamanho/2] + vetor[(tamanho/2)-1]) / 2;
    }
    
    printf("%.2f", mediana);
 
    return 0;
}