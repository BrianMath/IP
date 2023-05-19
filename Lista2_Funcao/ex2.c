#include <stdio.h>
 
/**
 * Retorna o n-ésimo termo da sequência de Fibonacci
 * @param t1 primeiro termo da sequência
 * @param t2 segundo termo da sequência
 * @param n a posição do termo desejado da sequência
 * @return O valor do n-ésimo termo da sequência
 */
int fibonacci(int t1, int t2, int n) {
    int i, novoNum;
 
    if (n == 1) {
        return t1;
    } else if (n == 2) {
        return t2;
    }
    
    for (i = 3; i <= n; i++) {
        novoNum = t1 + t2;
        t1 = t2;
        t2 = novoNum;
    }
    
    return novoNum;
}
 
int main() {
    int num1, num2, pos;
    scanf("%d %d %d", &num1, &num2, &pos);
 
    printf("%d", fibonacci(num1, num2, pos));
 
    return 0;
}