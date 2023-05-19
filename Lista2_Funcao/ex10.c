#include <stdio.h>
 
/**
 * Função que calcula o valor de pi usando a série proposta por John Wallis
 * 
 * @param n quantidade de termos da série
 * @return o valor aproximado da constante pi
 */
double compute_pi(int n) {
    int i, qtdNum = 0, qtdDen = 1;
    double pi = 1, num = 2, den = 1;
 
    for (i = 0; i < n; i++) {
        pi *= (num/den);
 
        qtdNum++;
        qtdDen++;
 
        if (qtdNum == 2) {
            num += 2;
            qtdNum = 0;
        }
        if (qtdDen == 2) {
            den += 2;
            qtdDen = 0;
        }    
    }
    
    return pi*2;
}
 
int main() {
    int qtdTermos;
    double pi;
    scanf("%d", &qtdTermos);
 
    pi = compute_pi(qtdTermos);
    printf("%.12f", pi);
 
    return 0;
}