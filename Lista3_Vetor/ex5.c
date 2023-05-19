#include <stdio.h>
#include <string.h>
 
int main() {
    int qtdTestes, i, j, k;
    int qtdVogais = 0, eVogal = 0, qtdConsoantes = 0, eConsoante = 0;
    char frase[10000], l;
    char consoantes[22] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
    
    scanf("%d%*c", &qtdTestes);
 
    for (i = 0; i < qtdTestes; i++) {
        scanf("%[^\n]%*c", frase); // %[^\n]: lê até encontrar \n; %*c: recebe o \n
 
        for (j = 0; j < strlen(frase); j++) { // Um caracter por vez
            // Verificar se é vogal
            l = frase[j]; // Uma letra da frase
 
            if (l=='a' || l=='e' || l=='i' || l=='o' || l=='u' ||
                l=='A' || l=='E' || l=='I' || l=='O' || l=='U') {
                qtdVogais++;
                eVogal = 1;
            }
            
            // Verificar se é consoante
            if (!eVogal) {
                if (l=='b' || l=='c' || l=='d' || l=='f' || l=='g' || l=='h' ||
                    l=='j' || l=='k' || l=='l' || l=='m' || l=='n' || l=='p' ||
                    l=='q' || l=='r' || l=='s' || l=='t' || l=='v' || l=='w' ||
                    l=='x' || l=='y' || l=='z' || l=='B' || l=='C' || l=='D' ||
                    l=='F' || l=='G' || l=='H' || l=='J' || l=='K' || l=='L' ||
                    l=='M' || l=='N' || l=='P' || l=='Q' || l=='R' || l=='S' ||
                    l=='T' || l=='V' || l=='W' || l=='X' || l=='Y' || l=='Z') {
                    qtdConsoantes++;
                }
            }
 
            eVogal = 0;
        }
        printf("Letras = %d\n", qtdVogais + qtdConsoantes);
        printf("Vogais = %d\n", qtdVogais);
        printf("Consoantes = %d\n", qtdConsoantes);
 
        qtdVogais = 0;
        qtdConsoantes = 0;
    }
    
    return 0;
}