#include <stdio.h>
#include <string.h>
 
int main() {
    int qtdTestes, i, j, k = 0, metade, tamanho;
    char termo[1000], termoInverso[1000], t;
    scanf("%d%*c", &qtdTestes);
 
    for (i = 0; i < qtdTestes; i++) {
        scanf("%[^\n]%*c", termo);
        tamanho = strlen(termo);
 
        // Passo 1: passar 3 caracteres para a direita
        for (j = 0; j < tamanho; j++) {
            t = termo[j];
 
            if (t=='a' || t=='b' || t=='c' || t=='d' || t=='e' || t=='f' || t=='g' ||
                t=='h' || t=='i' || t=='j' || t=='k' || t=='l' || t=='m' || t=='n' ||
                t=='o' || t=='p' || t=='q' || t=='r' || t=='s' || t=='t' || t=='u' ||
                t=='v' || t=='w' || t=='x' || t=='y' || t=='z' || t=='A' || t=='B' ||
                t=='C' || t=='D' || t=='E' || t=='F' || t=='G' || t=='H' || t=='I' ||
                t=='J' || t=='K' || t=='L' || t=='M' || t=='N' || t=='O' || t=='P' ||
                t=='Q' || t=='R' || t=='S' || t=='T' || t=='U' || t=='V' || t=='W' ||
                t=='X' || t=='Y' || t=='Z') {
                termo[j] = termo[j] + 3;
            }
        }
 
        // Passo 2: inverter linha
        for (j = tamanho - 1; j >= 0; j--) { // Passa pra um 2º vetor ...
            termoInverso[k] = termo[j];
            k++;
        }
        for (j = 0; j < tamanho; j++) { // ... e volta pro 1º invertido
            termo[j] = termoInverso[j];
        }
        
        // Passo 3: deslocar 1 caractere para a esquerda a partir da metade
        metade = tamanho / 2;
 
        for (j = metade; j < tamanho; j++) {
            termo[j] = termo[j] - 1;
        }
        
        printf("%s\n", termo);
 
        // Limpar vetor
        for (j = 0; j < tamanho; j++) {
            termo[j] = '\000';
            termoInverso[j] = '\000';
        }
        
        k = 0;
    }
 
    return 0;
}