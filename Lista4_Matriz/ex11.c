#include <stdio.h>
#include <string.h>
 
int main() {
    int qtdTestes, tamanhoPolinomio, expoente, maiorExpoente = -1, i, a;
    double polinomio1[50], polinomio2[50], coeficiente, termo;
    char sinal;
 
    memset(polinomio1, 0, sizeof(polinomio1));
    memset(polinomio2, 0, sizeof(polinomio2));
 
    scanf("%d", &qtdTestes);
 
    for (a = 0; a < qtdTestes; a++) {
        scanf("%*c%c", &sinal);
 
        // Preencher polinômio 1
        scanf("%d", &tamanhoPolinomio);
        for (i = 0; i < tamanhoPolinomio; i++) {
            scanf("%lf %d", &coeficiente, &expoente);
 
            polinomio1[expoente] = coeficiente;
 
            // Pegar maior expoente
            if (expoente > maiorExpoente) {
                maiorExpoente = expoente;
            }
        }
 
        // Preencher polinômio 2
        scanf("%d", &tamanhoPolinomio);
        for (i = 0; i < tamanhoPolinomio; i++) {
            scanf("%lf %d", &coeficiente, &expoente);
 
            polinomio2[expoente] = coeficiente;
 
            // Pegar maior expoente
            if (expoente > maiorExpoente) {
                maiorExpoente = expoente;
            }
        }
 
        // Imprimir polinômio resultante
        for (i = maiorExpoente; i >= 0; i--) {
            if (sinal == '+') {
                termo = polinomio1[i] + polinomio2[i];
            } else if (sinal == '-') {
                termo = polinomio1[i] - polinomio2[i];
            }
 
            if (termo != 0) {
                if (termo > 0) {
                    printf("+");
                }
 
                printf("%.2f", termo);
 
                if (i != 0) {
                    printf("X^%d", i);
                }
            }
        }
 
        maiorExpoente = -1;
        memset(polinomio1, 0, sizeof(polinomio1));
        memset(polinomio2, 0, sizeof(polinomio2));
 
        printf("\n");
    }
 
    return 0;
}