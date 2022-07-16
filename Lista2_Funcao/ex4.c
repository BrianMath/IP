#include <stdio.h>
 
/**
 * Recebe um inteiro e calcula a soma de seus divisores, desconsiderando ele próprio
 * 
 * @param numero número inteiro
 * @return Soma dos divisores de 'numero' sem considerá-lo 
 */
int somaDivisores(int numero) {
    int i, soma = 1; // 1 sempre é divisor
 
    printf("%d = 1", numero); // "6 = 1"
 
    for (i = 2; i < numero; i++) {
        if (numero%i == 0) {
            soma += i;
            printf(" + %d", i); // " + 1 "
        }
    }
 
    return soma;
}
 
int main() {
    int num, soma;
    scanf("%d", &num);
 
    soma = somaDivisores(num);
    printf(" = %d ", soma);
 
    if (soma == num) {
        printf("(NUMERO PERFEITO)");
    } else {
        printf("(NUMERO NAO E PERFEITO)");
    }
 
    return 0;
}