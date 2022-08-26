#include <stdio.h>
 
int main() {
    int qtdLinhas, qtdColunas, i, j, maior, menor, qtdMaior = 0, qtdMenor = 0;
    double freqMaior, freqMenor;
 
    scanf("%d %d", &qtdLinhas, &qtdColunas);
    int matriz[qtdLinhas][qtdColunas];
 
    // Preencher matriz e achar maior e menor valor
    for (i = 0; i < qtdLinhas; i++) {
        for (j = 0; j < qtdColunas; j++) {
            scanf("%d", &matriz[i][j]);
 
            if (i == 0 && j == 0) {
                maior = matriz[i][j];
                menor = matriz[i][j];
                continue;
            }
            
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }
 
    // Verificar frequência do maior e menor
    for (i = 0; i < qtdLinhas; i++) {
        for (j = 0; j < qtdColunas; j++) {
            if (matriz[i][j] == maior) {
                qtdMaior++;
            }
            if (matriz[i][j] == menor) {
                qtdMenor++;
            }
        }
    }
 
    // Regra de três
    freqMaior = (double)(qtdMaior*100) / (double)(qtdLinhas*qtdColunas);
    freqMenor = (double)(qtdMenor*100) / (double)(qtdLinhas*qtdColunas);
 
    printf("%d %.2f%%\n", menor, freqMenor);
    printf("%d %.2f%%\n", maior, freqMaior);
 
    return 0;
}