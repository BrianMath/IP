#include <stdio.h>
#include <math.h>
 
int main() {
    int n, fatorial = 1, i;
    double angulo, qtdTermos, resultado;
    scanf("%lf %lf", &angulo, &qtdTermos);
 
    for (n = 0; n <= qtdTermos; n++) {
        for (i = 2; i <= 2*n; i++) {
            fatorial *= i;
        }
 
        resultado += (pow(-1, n)*pow(angulo, 2*n))/fatorial;
 
        fatorial = 1;
    }
 
    printf("cos(%.2f) = %.6f", angulo, resultado);
 
    return 0;
}