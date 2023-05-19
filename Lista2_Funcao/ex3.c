#include <stdio.h>
 
/**
 * Recebe um número de três dígitos e inverte a ordem dos digitos. Passa os novos valores para as variáveis originais pelos ponteiros
 * 
 * @param numero inteiro que será invertido
 * @param digito1 1º dígito do número invertido (ponteiro)
 * @param digito2 2º dígito do número invertido (ponteiro)
 * @param digito3 3º dígito do número invertido (ponteiro)
 * @return Não retorna nada
 */
void inverteDigitos(int numero, int *digito1, int *digito2, int *digito3) {
    *digito3 = numero/100; // 123 -> 1: 123/100 == 1
    *digito2 = (numero/10) - (numero/100*10); // 123 -> 2: (123/10 == 12) - (123/100 == 1 * 10 == 10) == 2
    *digito1 = numero - (numero/10*10); // (123) - (123/10 == 12 * 10 == 120) == 3
}
 
int main() {
    int num, digito1, digito2, digito3;
    scanf("%d", &num);
 
    inverteDigitos(num, &digito1, &digito2, &digito3);
 
    printf("%d%d%d", digito1, digito2, digito3);
 
    return 0;
}