#include <stdio.h>
#include <string.h>
 
int main() {
    int tamanho1, tamanho2, tamanho3, i, j, temp;
    scanf("%d %d", &tamanho1, &tamanho2);
 
    tamanho3 = tamanho1 + tamanho2;
    int vetor1[tamanho1], vetor2[tamanho2], vetor3[tamanho3];
 
    // Preenche vetor1
    for (i = 0; i < tamanho1; i++) {
        scanf("%d", &vetor1[i]);
    }
    // Preenche vetor2
    for (i = 0; i < tamanho2; i++) {
        scanf("%d", &vetor2[i]);
    }
 
    // Preenche vetor3 com elementos de vetor1
    for (i = 0; i < tamanho1; i++) {
        vetor3[i] = vetor1[i];
    }
    // Preenche vetor3 com elementos de vetor2
    for (i = tamanho1; i < tamanho3; i++) {
        vetor3[i] = vetor2[i - tamanho1];
    }
 
    // Ordena vetor3 usando algoritmo de insertion sort
    for (i = 1; i < tamanho3; i++) {
        temp = vetor3[i];
        j = i - 1;
        
        while(j >= 0 && vetor3[j] > temp) {
            vetor3[j+1] = vetor3[j];
            j--;
        }
 
        vetor3[j+1] = temp;
    }
    
    // Imprime vetor3 em ordem crescente
    for (i = 0; i < tamanho3; i++) {
        printf("%d\n", vetor3[i]);
    }
    
    return 0;
}