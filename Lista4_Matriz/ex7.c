#include <stdio.h>
 
int main() {
    int tamanho, metade, min, max, i, j;
    char borda, fundo;
 
    scanf("%d %c %c", &tamanho, &borda, &fundo);
 
    if (tamanho < 1 || tamanho > 99 || tamanho%2 == 0) {
        printf("Dimensao invalida!");
        return 0;
    }
    
    metade = tamanho / 2 + 1;
    min = metade;
    max = metade;
 
    for (i = 1; i <= tamanho; i++) {
        for (j = 1; j <= tamanho; j++) {
            if (j == min || j == max) {
                printf("%c ", borda);
            } else if (j > min && j < max) {
                printf("%c ", fundo);
            } else {
                printf("  ");
            }            
        }
 
        printf("\n");
 
        if (i < metade) {
            min--;
            max++;
        } else {
            min++;
            max--;
        }
    }
    
    return 0;
}