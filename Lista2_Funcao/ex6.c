#include <stdio.h>
 
/**
 * Valor absoluto de um número qualquer
 * 
 * @param n um número real qualquer
 * @return o valor absoluto de n
 */
double absoluto(double n) {
    if (n < 0) {
        n = -n;
    }
 
    return n;
}
 
/**
 * Função que calcula a raiz quadrada de n.
 * 
 * @param n um número real qualquer 
 * @param p precisão de cálculos
 * @return a raiz quadrada de n
 */
double raiz(double n, double p) {
    double rk, rkMenos1 = 1, erro;
 
    while (1) {
        rk = (rkMenos1 + n/rkMenos1)/2;
        rkMenos1 = rk;
 
        // cálculo do erro
        erro = absoluto(n - rk*rk);
        
        printf("r: %.9f, err: %.9f\n", rk, erro);
 
        // condição de parada
        if (erro <= p) {
            break;
        }
    }
 
    return rk;
}
 
int main() {
    double n, e;
    scanf("%lf %lf", &n, &e);
    
    raiz(n, e);
 
    return 0;
}