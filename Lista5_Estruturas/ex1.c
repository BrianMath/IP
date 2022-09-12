#include <stdio.h>
 
int main() {
    int qtdTestes, qtdFracoes, teste, teveEquivalente = 0, i, j;
    double umValor, outroValor;
    struct Fracao {
        double numerador;
        double denominador;
    };
 
    scanf("%d", &qtdTestes);
 
    for (teste = 1; teste <= qtdTestes; teste++) {
        scanf("%d", &qtdFracoes);
        struct Fracao fracoes[qtdFracoes];
 
        // Preencher o vetor com as frações
        for (j = 0; j < qtdFracoes; j++) {
            scanf("%lf%*c", &fracoes[j].numerador);
            scanf("%lf", &fracoes[j].denominador);
        }
 
        printf("Caso de teste %d\n", teste);
 
        // Identificar frações equivalentes
        for (i = 0; i < qtdFracoes; i++) {
            umValor = fracoes[i].numerador / fracoes[i].denominador;
            
            for (j = i+1; j < qtdFracoes; j++) {
                outroValor = fracoes[j].numerador / fracoes[j].denominador;
 
                if (umValor == outroValor) {
                    teveEquivalente = 1;
 
                    printf("%.0f/%.0f equivalente a %.0f/%.0f\n",
                    fracoes[i].numerador, fracoes[i].denominador,
                    fracoes[j].numerador, fracoes[j].denominador);
                }
            }
        }
        
        if (!teveEquivalente) {
            printf("Nao ha fracoes equivalentes na sequencia\n");
        }
 
        teveEquivalente = 0;
    }
 
    return 0;
}