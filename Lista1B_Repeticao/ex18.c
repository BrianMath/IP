#include <stdio.h>
 
int main() {
    int num, numFatorado, fator = 2, temDivisores = 0, i;
 
    while (1) {
        scanf("%d", &num);
        
        if (num <= 1) {
            printf("Fatoracao nao e possivel para o numero %d!\n", num);
        } else {
            break;
        }
    }
 
    printf("%d =", num); /* "32 =" */
    
    while (num > 1) { // Fatoração
        if (num%fator == 0) {
            printf(" %d", fator); /* " 2" */
            num = num/fator;
            
            if (num > 1) {
                printf(" x"); /* " x" */
            } else {
                printf("\n");
            }
 
        } else { // Encontrar próximo primo
            while (1) {
                fator++; // 2 -> 3
 
                for (i = fator-1; i > 1; i--) { // 7: de 6 a 2, pois sempre tem fator e 1
                    if (fator%i == 0) { // Não é primo
                        temDivisores++;
                        break;
                    }
                }
                
                if (!temDivisores) { // É primo
                    break;
                } else {
                    temDivisores = 0;
                }
            }
        }
    }
    
    return 0;
}