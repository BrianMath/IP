#include <stdio.h>
 
int main() {
    int numsSorteados[6], numsApostados[6], qtdApostas, i, j, a;
    int qtdSenas = 0, qtdQuinas = 0, qtdQuadras = 0, acertos = 0;
 
    // Ler números sorteados
    for (i = 0; i < 6; i++) {
        scanf("%d", &numsSorteados[i]);
    }
 
    // Ler quantidade de apostas feitas
    scanf("%d", &qtdApostas);
    
    // Ler as dezenas 'qtdApostas' vezes
    for (a = 0; a < qtdApostas; a++) {
        // Ler as dezenas de cada aposta
        for (i = 0; i < 6; i++) {
            scanf("%d", &numsApostados[i]);
        }
        
        // Comparar as dezenas apostadas com as sorteadas
        for (i = 0; i < 6; i++) {
            for (j = 0; j < 6; j++) {
                if (numsApostados[i] == numsSorteados[j]) {
                    acertos++;
                    break;
                }
            }
        }
 
        // Incrementa o contador de ganhadores de cada categoria
        if (acertos == 6) {
            qtdSenas++;
        } else if (acertos == 5) {
            qtdQuinas++;
        } else if (acertos == 4) {
            qtdQuadras++;
        }
 
        acertos = 0;
    }
 
    // Imprimir a quantidade de acertadores da sena
    if (qtdSenas) {
        printf("Houve %d acertador(es) da sena\n", qtdSenas);
    } else {
        printf("Nao houve acertador para sena\n");
    }
    
    // Imprimir a quantidade de acertadores da quina
    if (qtdQuinas) {
        printf("Houve %d acertador(es) da quina\n", qtdQuinas);
    } else {
        printf("Nao houve acertador para quina\n");
    }
 
    // Imprimir a quantidade de acertadores da quadra
    if (qtdQuadras) {
        printf("Houve %d acertador(es) da quadra\n", qtdQuadras);
    } else {
        printf("Nao houve acertador para quadra\n");
    }
 
    return 0;
}