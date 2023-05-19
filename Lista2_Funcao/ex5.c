#include <stdio.h>
#include <math.h>
 
/**
 * Recebe três números 'a', 'b' e 'c' e retorna a quantidade de raízes reais
 * 
 * @param a coeficiente quadrado
 * @param b coeficiente linear
 * @param c coeficiente constante
 * @param x1 1ª raiz real
 * @param x2 2ª raiz real
 * 
 * @return -1: a == 0 | 0: nenhuma raiz real | 1: uma raiz real | 2: duas raízes reais
 * 
 */
int raizesEq2Grau(double a, double b, double c, double *x1, double *x2) {
    double delta = b*b - 4*a*c;
    double x;
 
    if (a == 0) {
        return -1;
    }
 
    if (delta < 0) {
        return 0;
    } else if (delta == 0) {
        *x1 = -b / (2*a);
 
        return 1;
    } else {        
        *x1 = (-b - sqrt(delta)) / (2*a);
        *x2 = (-b + sqrt(delta)) / (2*a);
        
        if (*x2 < *x1) {
            x = *x2;
            *x2 = *x1;
            *x1 = x;
        }
 
        return 2;
    }
}
 
int main() {
    double a, b, c, x1, x2;
    int result;
    scanf("%lf %lf %lf", &a, &b, &c);
 
    result = raizesEq2Grau(a, b, c, &x1, &x2);
    if (result == 0) {
        printf("RAIZES IMAGINARIAS\n");
    } else if (result == 1) {
        printf("RAIZ UNICA\n");
        printf("X1 = %.2lf", x1);
    } else if (result == 2) {
        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2lf\n", x1);
        printf("X2 = %.2lf", x2);
    } else {
        printf("\n");
    }
 
    return 0;
}