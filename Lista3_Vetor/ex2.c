#include <stdio.h>
 
int main() {
    int tamanho, numTeste, qtdMaiorOuIgual = 0;
    int i, j;
    
    while (1) {
        scanf("%d", &tamanho);
 
        if (tamanho >= 1 && tamanho <= 1000) {
            break;
        }
    }
    
    int vetor[tamanho];
 
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
    
    scanf("%d", &numTeste);
 
    for (j = 0; j < tamanho; j++) {
        if (vetor[j] >= numTeste) {
            qtdMaiorOuIgual++;
        }
    }
    
    printf("%d\n", qtdMaiorOuIgual);
 
    return 0;
}