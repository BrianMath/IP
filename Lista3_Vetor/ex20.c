#include <stdio.h>
#define N 100000+1
 
int charParaInt(char *digito) {
    if (*digito == '0') {return 0;}
    if (*digito == '1') {return 1;}
    if (*digito == '2') {return 2;}
    if (*digito == '3') {return 3;}
    if (*digito == '4') {return 4;}
    if (*digito == '5') {return 5;}
    if (*digito == '6') {return 6;}
    if (*digito == '7') {return 7;}
    if (*digito == '8') {return 8;}
    if (*digito == '9') {return 9;}    
}
 
int main() {
    int tamanhoInicial, tamanhoFinal, qtdRetirada, i, j, maior, posMaior;
    int numInt[N], numFinal[N], posNumFinal = 0, posDigitoMaior = 0, qtdDigitosFalta = 0;
    char numChar[N];
    
    while (1) {
        scanf("%d %d", &tamanhoInicial, &tamanhoFinal); /* 5 2 || 5 3 || 5 3 */
        if (tamanhoInicial == 0 || tamanhoFinal == 0) {
            break;
        }
        
        qtdRetirada = tamanhoInicial - tamanhoFinal;
 
        scanf("%s", numChar); /* 13034 || 13024 || 37593 */
 
        for (i = 0; i < tamanhoInicial; i++) {
            numInt[i] = charParaInt(&numChar[i]);
        }
        
        // Achar o maior número da esquerda pra direita entre (0) e 
        // (tamanhoInicial - tamanhoFinal) e colocar em numFinal[0]
        for (i = 0; i <= qtdRetirada; i++) {
            if (i == 0) {
                maior = numInt[i];
                posMaior = i;
                continue;
            }
            
            if (numInt[i] > maior) {
                maior = numInt[i];
                posMaior = i; /* posMaior = 1 || posMaior = 1 */
            }
        }
        numFinal[posNumFinal] = maior; // pos == 0
        
        // Após o segundo dígito ser escolhido, só deverá ser possível escolher números que
        // vierem após ele, portanto, posDigitoMaior começa na primeira casa válida e muda
        // a cada iteração de forma a permitir só números após a casa do número anteriormente
        // escolhido
        posDigitoMaior = posMaior + 1;
        qtdDigitosFalta = tamanhoFinal - 1;
 
        // Já temos um dos dígitos. Agora buscaremos os próximos até chegar na quantidade final
        for (j = 0; j < tamanhoFinal - 1; j++) {
            // A partir da posMaior + 1, achar o maior número até o final
            for (i = posDigitoMaior; i <= tamanhoInicial - qtdDigitosFalta; i++) {
                /* 13034 || 13024 || 37593 || 130213 */
                if (i == posDigitoMaior) {
                    maior = numInt[i];
                    posDigitoMaior = i;
                    continue;
                }
                
                if (numInt[i] > maior) {
                    // Só pode pegar o último dígito do número original se esse for o último
                    // dígito do número final. O último dígito do número final será em
                    // j == tamanhoFinal - 2
                    if (i == tamanhoInicial - 1 && j != tamanhoFinal - 2) {
                        break;
                    } else if (i == tamanhoInicial - 1 && j == tamanhoFinal - 2) {
                        maior = numInt[i];
                        posDigitoMaior = i;
                        break;
                    }
 
                    maior = numInt[i];
                    posDigitoMaior = i;
                }
            }
 
            posNumFinal++;
            numFinal[posNumFinal] = maior;
 
            posDigitoMaior++;
            qtdDigitosFalta--;
        }
 
        for (i = 0; i < tamanhoFinal; i++) {
            printf("%d", numFinal[i]);
        }
        
        printf("\n");
 
        posNumFinal = 0;
        posDigitoMaior = 0;
    }
 
    return 0;
}