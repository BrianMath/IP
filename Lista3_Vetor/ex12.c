#include <stdio.h>
#include <string.h>
 
 
char * retornaPrefixo(int n, char string[]) {
    int i;
    char ponteiroString[n + 1];
 
    if (n > strlen(string)) {
        n = strlen(string);
    }
 
    for (i = 0; i < n; i++) {
        ponteiroString[i] = string[i];
    }
 
    ponteiroString[i] = '\0';
 
    printf("%s\n", ponteiroString);
}
 
 
int main() {
    int qtdTestes, tamanho, i;
    char string[500], *ponteiro;
 
    scanf("%d", &qtdTestes);
 
    for (i = 0; i < qtdTestes; i++) {
        scanf("%d%*c", &tamanho);
        scanf("%[^\n]", string);
 
        retornaPrefixo(tamanho, string);
        memset(string, 0, sizeof(string));
    }
 
    return 0;
}