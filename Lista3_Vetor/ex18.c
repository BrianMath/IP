#include <stdio.h>
#include <string.h>
 
void trocaTamanho(char string[], int *pos) {
    int i, j, eMinuscula = 0, eMaiuscula = 0, posMin, posMai;
    char minusculas[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
                           'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
                           'y', 'z'};
    char maiusculas[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
                           'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
                           'Y', 'Z'};
 
    for (i = 0; i < 26; i++) {
        if (*string == minusculas[i]) {
            eMinuscula = 1;
            posMin = i;
            break;
        }
    }
 
    if (!eMinuscula) {
        for (i = 0; i < 26; i++) {
            if (*string == maiusculas[i]) {
                eMaiuscula = 1;
                posMai = i;
                break;
            }
        }
    }
    
    if (eMinuscula || eMaiuscula) {
        pos[0]++;
    } else {
        return;
    }
 
    if (*pos%2 == 0 && eMinuscula) { // Posição par é maiúscula
        *string = maiusculas[posMin];
    } else if (*pos%2 != 0 && eMaiuscula) { // Posição ímpar é minúscula
        *string = minusculas[posMai];
    }
}
 
int main() {
    int i, pos = -1;
    char frase[51];
 
    while (scanf("%[^\n]%*c", frase) != EOF) {
        for (i = 0; i < strlen(frase); i++) {
            trocaTamanho(&frase[i], &pos);
        }
 
        printf("%s\n", frase);
        memset(frase, 0, sizeof(frase));
        pos = -1;
    }
 
    return 0;
}