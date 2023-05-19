#include <stdio.h>
 
int main() {
    int i, j, soma = 0, maior = 0;
    int matriz[6][6];
 
    // Preencher matriz
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
 
    // Passar pela matriz nas posições em que está o 1º elemento da ampulheta
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            // Soma dos elementos da ampulheta
            soma = matriz[i][j] + matriz[i][j+1] + matriz[i][j+2] + matriz[i+1][j+1] +
            matriz[i+2][j] + matriz[i+2][j+1] + matriz[i+2][j+2];
 
            // Primeiro maior
            if (i == 0 && j == 0) {
                maior = soma;
                continue;
            }
 
            // Novo maior
            if (soma > maior) {
                maior = soma;
            }
        }
    }
 
    printf("%d\n", maior);
 
    return 0;
}