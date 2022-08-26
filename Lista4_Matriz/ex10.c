#include <stdio.h>
 
int main() {
    int qtdLinhas, qtdColunas, i, j, a = 0;
    int limiteLinMin = 0, limiteLinMax, limiteColMin = 0, limiteColMax;
 
    scanf("%d %d", &qtdLinhas, &qtdColunas);
    if (qtdLinhas < 1 || qtdLinhas > 10 || qtdColunas < 1 || qtdColunas > 10) {
        printf("Dimensao invalida\n");
        return 0;
    }
 
    limiteLinMax = qtdLinhas - 1;
    limiteColMax = qtdColunas - 1;
 
    // Preencher matriz
    int matriz[qtdLinhas][qtdColunas];
    for (i = 0; i < qtdLinhas; i++) {
        for (j = 0; j < qtdColunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
 
    while (1) {
        // Esquerda para direita
        if (a > 0) {
            limiteColMin++;
        }
        if (limiteColMin >= qtdColunas || limiteColMin > limiteColMax) {
            break;
        }
        i = limiteLinMin;
        for (j = limiteColMin; j <= limiteColMax; j++) {
            printf("%d ", matriz[i][j]);
        }
        
        // Cima para baixo
        limiteLinMin++;
        if (limiteLinMin >= qtdLinhas || limiteLinMin > limiteLinMax) {
            break;
        }
        j = limiteColMax;
        for (i = limiteLinMin; i <= limiteLinMax; i++) {
            printf("%d ", matriz[i][j]);
        }
        
        // Direita para esquerda
        limiteColMax--;
        if (limiteColMax < 0 || limiteColMax < limiteColMin) {
            break;
        }
        i = limiteLinMax;
        for (j = limiteColMax; j >= limiteColMin; j--) {
            printf("%d ", matriz[i][j]);
        }
 
        // Baixo para cima
        limiteLinMax--;
        if (limiteLinMax < 0 || limiteLinMax < limiteLinMin) {
            break;
        }
        j = limiteColMin;
        for (i = limiteLinMax; i >= limiteLinMin; i--) {
            printf("%d ", matriz[i][j]);
        }
 
        a++;
    }
 
    return 0;
}