#include <stdio.h>
 
double modulo(double num) {
    if (num < 0) {
        return -num;
    } else {
        return num;
    }
}
 
void conferePontos(double *vetor1, double *vetor2) {
    int i;
    double valorPonto = 0, valorAtual = 0;
 
    for (i = 0; i < 3; i++) {
        valorAtual = modulo(vetor2[i] - vetor1[i]);
 
        if (i == 0) {
            valorPonto = valorAtual;
            continue;
        }
        
        if (valorPonto < valorAtual) {
            valorPonto = valorAtual;
        }
    }
    
    printf("%.2f\n", valorPonto);
}
 
int main() {
    int qtdPontos, a, i, j;
    double vetor1[3], vetor2[3];
    scanf("%d", &qtdPontos);
 
    for (a = 0; a < qtdPontos; a++) {
        if (a == 0) {
            for (i = 0; i < 3; i++) {
                scanf("%lf", &vetor2[i]);
            }
        } else {    
            for (i = 0; i < 3; i++) {
                vetor1[i] = vetor2[i];
                scanf("%lf", &vetor2[i]);
            }
 
            conferePontos(vetor1, vetor2);
        }
    }
 
    return 0;
}