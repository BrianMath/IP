#include <stdio.h>
 
int main() {
    int linhas, colunas, i, j;
    scanf("%d %d", &linhas, &colunas);
 
    for (i = 2; i <= linhas; i++) {
        for (j = 1; j <= colunas; j++) {
            if (j == i) {
                break;
            }
            
            if (j+1 == i || j == colunas) {
                printf("(%d,%d)\n", i, j);
            } else {
                printf("(%d,%d)-", i, j);
            }
        }
    }
 
    return 0;
}