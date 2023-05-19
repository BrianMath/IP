#include <stdio.h>
 
int main() {
    int qtdElementos, i, j, elemento, temIgual = 0, qtdUnicos = 0, temp;
    scanf("%d", &qtdElementos);
    int elementos[qtdElementos];
 
    // Preencher o vetor
    for (i = 0; i < qtdElementos; i++) {
        scanf("%d", &elementos[i]);
    }
 
    // Ordenar vetor usando algoritmo de insertion sort
    for(i = 1; i < qtdElementos; i++) {
        temp = elementos[i];
        j = i - 1;
        
        while(j >= 0 && elementos[j] > temp) {
            elementos[j+1] = elementos[j];
            j--;
        }
 
        elementos[j+1] = temp;
    }
    
    // [2, 2, 3, 6, 7, 9, 9]
    for (i = 0; i < qtdElementos; i++) {
        if (i == 0) { // Primeiro elemento e temp manualmente
            temp = elementos[0];
            continue;
        }
 
        if (temp == elementos[i]) { // [2, 2, ...]: repete, é repetido -> ignora
            continue;
        }
        
        // [..., '3', 6, ...]: confere com todos a partir da posição i
        for (j = i + 1; j < qtdElementos; j++) {
            if (elementos[i] == elementos[j]) {
                temIgual = 1;
                break;
            }
        }
        
        if (!temIgual) {
            qtdUnicos++;
        }
        
        temIgual = 0;
        
        temp = elementos[i];
    }
    
    printf("%d", qtdUnicos);
 
    return 0;
}