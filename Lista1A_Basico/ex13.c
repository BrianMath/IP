#include <stdio.h>
#include <math.h>
 
int main() {
    int a, b, c;
    double delta, x1, x2;
 
    scanf("%d %d %d", &a, &b, &c);
    delta = b*b - 4*a*c;
 
    if (delta < 0) {
        printf("POSICOES IMAGINARIAS");
        return 0;
    } else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
 
        printf("POSICOES: X1=%.2f e X2=%.2f ", x1, x2);
 
        if ((x1 > 5 || x1 < -5) || (x2 > 5 || x2 < -5)) {
            printf("(FORA DO EXPERIMENTO)");
        }
 
        // Fato 1: soma dos coeficientes é divisivel por 3
        if ((a + b + c) % 3 == 0) {
            printf("\nFATO1: DESAPARECIDA");
        }
        
        // Fato 2: coeficiente c é par e < a+b
        if (c%2 == 0 && c < a+b) {
            printf("\nFATO2: ORIGEM");
        }
    }    
 
    return 0;
}