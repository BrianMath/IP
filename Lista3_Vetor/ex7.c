#include <stdio.h>
#include <string.h>
 
int main() {
    int tamanho, i, j, k, maior, qtdMaiores = 0;
    int nums[10000];
    
    while (1) {
        scanf("%d", &tamanho);
 
        if (tamanho <= 0) { // Condição de parada
            break;
        }
        
        for (i = 0; i < tamanho; i++) { // Preencher vetor nums[]
            scanf("%d", &nums[i]);
 
            if (i == 0) {
                maior = nums[0];
            }
            
            if (nums[i] > maior) { // Trocar o valor de maior
                maior = nums[i];
            }
        }
            
        for (j = 0; j <= maior; j++) { // Conferir os números de 0, 1, ..., maior
            for (k = 0; k < tamanho; k++) { // Passar pelo vetor inteiro
                if (nums[k] <= j) {
                    qtdMaiores++;
                }
            }
                
            printf("(%d) %d\n", j, qtdMaiores); // (0) 0
            
            qtdMaiores = 0;
        }
        
        maior = 0;
    }
 
    return 0;
}