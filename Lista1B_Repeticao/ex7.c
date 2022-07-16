#include <stdio.h>
 
int main() {
    int num;
    double mediaPar = 0, mediaImpar = 0, somaPar = 0, somaImpar = 0, qtdPar = 0, qtdImpar = 0;
 
    while (1) {
        scanf("%d", &num);
 
        if (num == 0) {
            break;
        }
 
        if (num%2 == 0) { // Par
            qtdPar++;
            somaPar += num;
        } else { // Ímpar
            qtdImpar++;
            somaImpar += num;
        }
    }
    
    if (qtdPar > 0) {
        mediaPar = somaPar / qtdPar;
    }
    if (qtdImpar > 0) {
        mediaImpar = somaImpar / qtdImpar;
    }
 
    printf("MEDIA PAR: %f\n", mediaPar);
    printf("MEDIA IMPAR: %f\n", mediaImpar);
 
    return 0;
}