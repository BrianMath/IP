#include <stdio.h>
#include <string.h>
 
int main() {
    int qtdTestes, i, j;
    char palavra[6];
    scanf("%d", &qtdTestes);
 
    for (i = 0; i < qtdTestes; i++) {
        scanf("%s", palavra);
 
        if (strlen(palavra) >= 5) { // Número 3
            printf("3\n");
            continue;
        } else if (palavra[0] == 'o' && palavra[1] == 'n' ||
            palavra[1] == 'n' && palavra[2] == 'e' ||
            palavra[0] == 'o' && palavra[2] == 'e') { // Número 1
            printf("1\n");
        } else { // Número 2
            printf("2\n");
        }
        
        for (j = 0; j < 6; j++) {
            palavra[j] = '\000';
        }
    }
 
    return 0;
}