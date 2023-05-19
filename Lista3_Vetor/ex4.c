#include <stdio.h>
#include <string.h>
 
int main() {
    int qtdTestes, i, j, numLeds = 0;
    int tamanhos[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    char numero[100];
 
    scanf("%d", &qtdTestes);
 
    for (i = 0; i < qtdTestes; i++) {
        scanf("%s", numero);
 
        for (j = 0; j < strlen(numero); j++) {
            if (numero[j] == '0') {
                numLeds += tamanhos[0];
            } else if (numero[j] == '1') {
                numLeds += tamanhos[1];
            } else if (numero[j] == '2') {
                numLeds += tamanhos[2];
            } else if (numero[j] == '3') {
                numLeds += tamanhos[3];
            } else if (numero[j] == '4') {
                numLeds += tamanhos[4];
            } else if (numero[j] == '5') {
                numLeds += tamanhos[5];
            } else if (numero[j] == '6') {
                numLeds += tamanhos[6];
            } else if (numero[j] == '7') {
                numLeds += tamanhos[7];
            } else if (numero[j] == '8') {
                numLeds += tamanhos[8];
            } else if (numero[j] == '9') {
                numLeds += tamanhos[9];
            }
        }
 
        printf("%d leds\n", numLeds);
        numLeds = 0;
    }
 
    return 0;
}