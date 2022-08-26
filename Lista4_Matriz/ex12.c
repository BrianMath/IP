#include <stdio.h>
#include <string.h>
#define MAX_WORDS 200
#define MAX_WORD_LEN 64+1
 
 
/**
* @brief Função de separação de palavras de acordo com a uma lista de separadores.
Exemplo de chamada da função:
*
* str_split("Ola mundo! 1,23", m, ", .!?");
*
* O resultado é a separação das strings "Ola", "mundo", "1", "23", cada uma
* ocupando uma linha da matriz m, com base nos caracteres de pontuação fornecidos.
*
* @param frase ponteiro para o início da string original
* @param matriz matriz de caracteres, sendo cada linha uma palavra da string original
* @param sep string com a lista de caracteres separadores
* @param tamPalavra ponteiro para armazenar tamanho de cada palavra
* @return int quantidade de palavras detectadas
*/
int str_split(char *frase, char matriz[][MAX_WORD_LEN], char *sep, int *tamPalavra) {
    int i, j, k = 0, inicio = 0, qtdPalavras = 0, novaLinha = 0, tamanhoPalavra = 0;
    int posPalavra = 0;
 
    for (i = 0; i <= strlen(frase); i++) {
        for (j = 0; j < strlen(sep); j++) {
            if (i == strlen(frase)) {
                novaLinha = 1;
                break;
            }
 
            if (frase[i] == sep[j]) {
                novaLinha = 1;
                break;
            }
        }
 
        if (novaLinha) {
            novaLinha = 0;
            
            if (tamanhoPalavra > 0) {
                qtdPalavras++;
                tamPalavra[posPalavra] = tamanhoPalavra;
                
                tamanhoPalavra = 0;
                posPalavra++;
                
                inicio += MAX_WORD_LEN;
                k = inicio;
            }
 
            if (i == strlen(frase) - 1) {
                break;
            }
 
            continue;
        } else {
            tamanhoPalavra++;
            matriz[0][k] = frase[i];
        }
        
        k++;
    }
 
    return qtdPalavras;
}
 
 
int main() {
    char frase[MAX_WORDS*MAX_WORD_LEN];
    char separadores[MAX_WORD_LEN];
    char matrizFrases[MAX_WORDS][MAX_WORD_LEN];
    int i, j, qtdPalavras, tamanhoPalavra[MAX_WORDS], maior = 0, qtdMaiores = 0;
 
    memset(matrizFrases, '\0', sizeof(matrizFrases));
    memset(separadores, '\0', sizeof(separadores));
 
    // Receber a frase e os separadores
    scanf("%[^\n]%*c", frase);
    scanf("%[^\n]%*c", separadores);
 
    if (strlen(separadores) == 0) {
        printf("(%d)%s\n", (int)strlen(frase), frase);
        printf("1\n");
        return 0;
    }    
 
    qtdPalavras = str_split(frase, matrizFrases, separadores, tamanhoPalavra);
 
    // Imprimir cada palavra e seu tamanho em uma linha
    for (i = 0; i < qtdPalavras; i++) {
        // Descobrir maior tamanho de palavra
        if (i == 0) {
            maior = tamanhoPalavra[i];
        }
        if (tamanhoPalavra[i] > maior) {
            maior = tamanhoPalavra[i];
        }
            
        printf("(%d)", tamanhoPalavra[i]);
        printf("%s", matrizFrases[i]);
 
        printf("\n");
    }
 
    // Imprimir quantas palavras possuem a mesma quantidade de caracteres
    // da maior palavra
    for (i = 0; i < qtdPalavras; i++) {
        if (tamanhoPalavra[i] == maior) {
            qtdMaiores++;
        }
    }
    printf("%d\n", qtdMaiores);
 
    return 0;
}