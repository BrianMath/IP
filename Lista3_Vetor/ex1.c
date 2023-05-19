#include <stdio.h>
 
int main() {
    int tamanho, qtdBuscas, num, acheiNoVetor = 0;
    int i, j, k;
    
    scanf("%d", &tamanho);
    int vetor[tamanho];
 
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
    
    scanf("%d", &qtdBuscas);
 
    for (j = 0; j < qtdBuscas; j++) {
        scanf("%d", &num);
 
        for (k = 0; k < tamanho; k++) {
            if (vetor[k] == num) {
                printf("ACHEI\n");
                acheiNoVetor = 1;
                break;
            }
        }
 
        if (!acheiNoVetor) {
            printf("NAO ACHEI\n");
        }
 
        acheiNoVetor = 0;
    }
 
    return 0;
}