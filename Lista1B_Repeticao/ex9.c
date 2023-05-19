#include <stdio.h>
 
int main() {
    double n, e, rk, rkMenos1 = 1, erro;
    scanf("%lf %lf", &n, &e);
 
    while (1) {
        rk = (rkMenos1 + n/rkMenos1)/2;
        rkMenos1 = rk;
 
        // cálculo do erro
        if ((n - rk*rk) < 0) { // Se for negativo, o módulo é multiplicar por -1
            erro = -(n - rk*rk);
        } else {
            erro = n - rk*rk;
        }
        
        printf("r: %.9f, err: %.9f\n", rk, erro);
 
        // condição de parada
        if (erro <= e) {
            break;
        }    
    }
 
    return 0;
}