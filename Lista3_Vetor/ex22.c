#include <stdio.h>
 
int main() {
    int qtdCasos, i, j, k, anoes[9], soma = 0, acheiZeros = 0, temp;
    scanf("%d", &qtdCasos);
 
    for (i = 0; i < qtdCasos; i++) {
        for (j = 0; j < 9; j++) {
            scanf("%d", &anoes[j]);
            soma += anoes[j];
        }
        
        for (j = 0; j < 9; j++) {
            for (k = j+1; k < 9; k++) {
                if (soma - (anoes[j] + anoes[k]) == 100) {
                    anoes[j] = 0;
                    anoes[k] = 0;
                    acheiZeros = 1;
                    break;
                }
            }
 
            if (acheiZeros) {
                break;
            }
        }
 
        // Ordena anoes usando algoritmo de insertion sort
        for (j = 1; j < 9; j++) {
            temp = anoes[j];
            k = j - 1;
            
            while(k >= 0 && anoes[k] > temp) {
                anoes[k+1] = anoes[k];
                k--;
            }
    
            anoes[k+1] = temp;
        }
 
        for (j = 0; j < 9; j++) {
            if (anoes[j] > 0) {
                printf("%d\n", anoes[j]);
            }
        }
 
        acheiZeros = 0;
        soma = 0;
    }
 
    return 0;
}