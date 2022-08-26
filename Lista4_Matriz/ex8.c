#include <stdio.h>
 
 
/**
* Função que verifica se a matriz é de permutação
* @param matriz Indica a matriz a ser verificada
* @param n indica a dimensão da matriz
* @param *soma parâmetro de saída, que armazenará a soma de todos os ’n’ elementos
* da matriz.
* @return 0: não é de permutação || 1: é de permutação
*/
int ePermutacao(int matriz[500][500], int n, int *soma) {
    int i, j, qtdZeros = 0, eValida = 1, col = 0;
 
    for (i = 0; i < n*n; i++) {
        if (matriz[0][i] == 0) {
            qtdZeros++;
        } else {
            (*soma) += matriz[0][i];
        }
 
        col++;
 
        if (col == n) {
            if (qtdZeros != n-1) {
                eValida = 0;
            }
 
            col = 0;
            qtdZeros = 0;
        }
    }
 
    if (!eValida) {
        return 0;
    } else {
        return 1;
    }
}
 
 
int main() {
    int tamanho, i, j, soma = 0;
 
    scanf("%d", &tamanho);
    int matriz[tamanho][tamanho];
 
    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
 
    // Imprimir na tela
    printf("%d\n", tamanho);
 
    if (ePermutacao(matriz, tamanho, &soma)) {
        printf("PERMUTACAO\n");
    } else {
        printf("NAO EH PERMUTACAO\n");
    }
 
    printf("%d\n", soma);
 
    return 0;
}