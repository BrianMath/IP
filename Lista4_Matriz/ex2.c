#include <stdio.h>
 
int main() {
    int tamanho, i, j;
    
    scanf("%d", &tamanho);
    int matriz[tamanho][tamanho], pos = tamanho - 1;
 
    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (i = 0; i < tamanho; i++) {
        printf("%d\n", matriz[i][pos]);
        pos--;
    }
 
    return 0;
}