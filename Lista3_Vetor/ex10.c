#include <stdio.h>
 
int main() {
    int tamanho, i, maior, menor;
    scanf("%d", &tamanho);
 
    int vetorV[tamanho], vetorW[tamanho];
 
    // Recebe valores do vetorV
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetorV[i]);
 
        // Descobre o maior e menor elementos
        if (i == 0) {
            maior = vetorV[i];
            menor = vetorV[i];
        }
        if (vetorV[i] > maior) {
            maior = vetorV[i];
        }
        if (vetorV[i] < menor) {
            menor = vetorV[i];
        }
 
        // Preenche o vetorW ao contrário
        vetorW[tamanho - i - 1] = vetorV[i];
    }
    
    // Elementos de vetorV
    printf("%d", vetorV[0]);
    for (i = 1; i < tamanho; i++) {
        printf(" %d", vetorV[i]);
    }
    printf("\n");
    
    // Elementos de vetorW
    printf("%d", vetorW[0]);
    for (i = 1; i < tamanho; i++) {
        printf(" %d", vetorW[i]);
    }
    printf("\n");
 
    // Maior e menor elementos
    printf("%d\n%d\n", maior, menor);
 
    return 0;
}