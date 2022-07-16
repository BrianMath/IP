#include <stdio.h>
 
int main() {
    int qtdNums, numAtual, numAnterior, i, segmentoAtual = 1, maiorSegmento = 1;
    scanf("%d", &qtdNums);
 
    for (i = 0; i < qtdNums; i++) {
        scanf("%d", &numAtual);
 
        if (i == 0) { // 1ª vez é o próprio número
            numAnterior = numAtual;
            continue;
        }
        
        if (numAnterior < numAtual) {
            segmentoAtual++;
 
            if (segmentoAtual > maiorSegmento) {
                maiorSegmento = segmentoAtual;
            }
        } else {
            segmentoAtual = 1;
        }
        
        numAnterior = numAtual;
    }
    
    printf("O comprimento do segmento crescente maximo e: %d\n", maiorSegmento);
 
    return 0;
}