#include <stdio.h>
 
/**
 * Função que calcula o fatorial de um número n
 * 
 * @param n um numero inteiro positivo
 * @return O fatorial de n
 */
unsigned long int fat(unsigned int n) {
    int i;
    unsigned long int fatorial = 1;
    
    for (i = 2; i <= n; i++) {
        fatorial *= i;
    }
    
    return fatorial;
}
 
int main() {
    int num;
    scanf("%d", &num);
 
    printf("%d! = %lu\n", num, fat(num));
 
    return 0;
}