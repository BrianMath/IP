#include <stdio.h>
#include <math.h>
 
int main() {
    int n, i, nFatorial = 1, qtdTermos;
    double num, resultado;
    scanf("%lf %d", &num, &qtdTermos);
 
    for (n = 0; n <= qtdTermos; n++) {
        for (i = 2; i <= n; i++) {
            nFatorial *= i;
        }
 
        resultado += pow(num, n)/nFatorial;
 
        nFatorial = 1;
    }
 
    printf("e^%.2f = %.6f\n", num, resultado);
 
    return 0;
}