#include <stdio.h>
 
int main() {
    int qtdLinhas, qtdColunas, i, j;
    
    while (1) {
        scanf("%d", &qtdLinhas);
 
        if (qtdLinhas >= 1 && qtdLinhas <= 10) {
            break;
        }
    }
    
    while (1) {
        scanf("%d", &qtdColunas);
 
        if (qtdColunas >= 1 && qtdColunas <= 10) {
            break;
        }
    }
 
    int matriz[qtdLinhas][qtdColunas];
 
    for (i = 0; i < qtdLinhas; i++) {
        for (j = 0; j < qtdColunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (i = 0; i < qtdLinhas; i++) {
        printf("linha %d: %d", i+1, matriz[i][0]);
        
        for (j = 1; j < qtdColunas; j++) {
            printf(",%d", matriz[i][j]);
        }
 
        printf("\n");
    }
 
    return 0;
}