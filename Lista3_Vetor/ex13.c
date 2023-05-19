#include <stdio.h>
#include <string.h>
 
 
int charParaInt(char digito[]) {
    if (*digito == '0') {return 0;}
    else if (*digito == '1') {return 1;}
    else if (*digito == '2') {return 2;}
    else if (*digito == '3') {return 3;}
    else if (*digito == '4') {return 4;}
    else if (*digito == '5') {return 5;}
    else if (*digito == '6') {return 6;}
    else if (*digito == '7') {return 7;}
    else if (*digito == '8') {return 8;}
    else if (*digito == '9') {return 9;}    
}
 
 
int main() {
    int qtdTestes, inicio, fim, tamanhoNum, a, i, j;
    char num[6] = {0};
 
    scanf("%d", &qtdTestes);
 
    for (a = 0; a < qtdTestes; a++) {
        scanf("%d %d", &inicio, &fim);
 
        for (i = inicio; i <= fim; i++) {
            printf("%d", i);
        }
        
        for (i = fim; i >= inicio; i--) {
            sprintf(num, "%d", i);
 
            for (j = strlen(num) - 1; j >= 0; j--) {
                printf("%d", charParaInt(&num[j]));
            }
            
            memset(num, 0, sizeof(num));
        }
 
        printf("\n");
    }
    
    return 0;
}