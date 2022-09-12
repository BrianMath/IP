#include <stdio.h>
#include <math.h>
 
 
typedef struct {
    double real, imaginaria;
} Complexo;
 
typedef struct {
    Complexo raizes[2];
} RaizEqu2;
 
 
RaizEqu2 calculaRaizEqu2(double a, double b, double c) {
    double delta;
    RaizEqu2 raiz;
 
    delta = b*b - 4*a*c;
 
    if (delta == 0) {
        raiz.raizes[0].real = -b / (2*a);
        raiz.raizes[0].imaginaria = 0;
 
        raiz.raizes[1] = raiz.raizes[0];
    } else if (delta < 0) {
        delta = sqrt(-delta);
 
        raiz.raizes[0].real = -b / (2*a);
        raiz.raizes[0].imaginaria = delta / (2*a);
 
        raiz.raizes[1].real = raiz.raizes[0].real;
        raiz.raizes[1].imaginaria = -raiz.raizes[0].imaginaria;
    } else {
        delta = sqrt(delta);
 
        raiz.raizes[0].real = (-b + delta) / (2*a);
        raiz.raizes[0].imaginaria = 0;
 
        raiz.raizes[1].real = (-b - delta) / (2*a);
        raiz.raizes[1].imaginaria = 0;
    }
    
    return raiz;
}
 
 
void complex_print(Complexo resultado, int numX) {
    printf("x%d = ", numX);
    
    if (resultado.real == 0 && resultado.imaginaria == 0) {
        printf("0.00");
        return;
    }
    
    if (resultado.real != 0 && resultado.imaginaria != 0) {
        printf("%.2f", resultado.real);
 
        if (resultado.imaginaria >= 0) {
            printf("+");
        }
 
        if (resultado.imaginaria == 1) {
            printf("i");
        } else if (resultado.imaginaria == -1) {
            printf("-i");
        } else {
            printf("%.2fi", resultado.imaginaria);
        }
 
        return;
    }
 
    if (resultado.real == 0 && resultado.imaginaria != 0) {
        if (resultado.imaginaria == 1) {
            printf("i");
        } else if (resultado.imaginaria == -1) {
            printf("-i");
        } else {
            printf("%.2fi", resultado.imaginaria);
        }
 
        return;
    }
    
    if (resultado.real != 0 && resultado.imaginaria == 0) {
        printf("%.2f", resultado.real);
 
        return;
    }
}
 
 
int main() {
    double a, b, c;
    RaizEqu2 resultado;
 
    scanf("%lf %lf %lf", &a, &b, &c);
    
    resultado = calculaRaizEqu2(a, b, c);
 
    complex_print(resultado.raizes[0], 1);
    printf("\n");
    complex_print(resultado.raizes[1], 2);
 
    return 0;
}