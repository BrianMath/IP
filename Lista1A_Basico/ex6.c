#include <math.h>
#include <stdio.h>
 
int main() {
    double a, b, c, delta, x1, x2;
 
    scanf("%lf %lf %lf", &a, &b, &c);
 
    // Cálculo delta
    delta = b*b - 4*a*c;
 
    if (delta < 0) {
        printf("RAIZES IMAGINARIAS\n");
    } else {
        x1 = (-b - sqrt(delta)) / (2*a);
        x2 = (-b + sqrt(delta)) / (2*a);
 
        if (delta == 0) {
            printf("RAIZ UNICA\n");
            printf("X1 = %.2f", x1);
        } else {
            printf("RAIZES DISTINTAS\n");
 
            if (x1 < x2) {
                printf("X1 = %.2f\n", x1);
                printf("X2 = %.2f", x2);
            } else {
                printf("X1 = %.2f\n", x2);
                printf("X2 = %.2f", x1);
            }
        }
    }
 
    return 0;
}