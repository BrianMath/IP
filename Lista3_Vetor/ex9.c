#include <stdio.h>
 
int main() {
    int qtdNotas, i, notas[10000], maior = 0, indiceMaior = 0, aparicoesUltimo = 0;
    int ultimo;
    scanf("%d", &qtdNotas);
 
    // Pegar todas as notas
    for (i = 0; i < qtdNotas; i++) {
        scanf("%d", &notas[i]);
 
        if (notas[i] > maior) {
            maior = notas[i];
            indiceMaior = i;
        }
    }
 
    ultimo = notas[qtdNotas - 1];
 
    // Contar aparições do último
    for (i = 0; i < qtdNotas; i++) {
        if (notas[i] == ultimo) {
            aparicoesUltimo++;
        }
    }
 
    // Última nota e quantidade de aparições
    printf("Nota %d, %d vezes\n", ultimo, aparicoesUltimo);
    // Maior nota e índice da primeira aparição
    printf("Nota %d, indice %d\n", maior, indiceMaior);
 
    return 0;
}