#include <stdio.h>
 
int main() {
    int tamanho;
    int i, j;
    scanf("%d", &tamanho);
 
    if (tamanho >= 5000) {
        return 0;
    }
    
    int vetor[tamanho];
 
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
    
    for (j = tamanho - 1; j >= 0; j--) {
        printf("%d ", vetor[j]);
    }
    
    return 0;
}