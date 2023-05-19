#include <stdio.h>
 
int main() {
    int qtdTestes, qtdFracoes, teste, i, j, teveEquivalente = 0;
    
    scanf("%d", &qtdTestes);
    
    for (teste = 1; teste <= qtdTestes; teste++) {
        scanf("%d", &qtdFracoes);
        int fracoes[qtdFracoes][2];
        double valores[qtdFracoes];
 
        for (i = 0; i < qtdFracoes; i++) {
            scanf("%d%*c", &fracoes[i][0]);
            scanf("%d", &fracoes[i][1]);
 
            valores[i] = (double)fracoes[i][0] / (double)fracoes[i][1];
        }
 
        printf("Caso de teste %d\n", teste);
 
        for (i = 0; i < qtdFracoes; i++) {
            for (j = i+1; j < qtdFracoes; j++) {
                if (valores[i] == valores[j]) {
                    teveEquivalente = 1;
 
                    printf("%d/%d equivalente a ", fracoes[i][0], fracoes[i][1]);
                    printf("%d/%d\n", fracoes[j][0], fracoes[j][1]);
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