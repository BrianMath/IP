#include <stdio.h>
#include <math.h>
 
/**
 * Função que calcula a potência de p mais próximo a n.
 * 
 * @param n valor inteiro
 * @param p valor da potência
 * @return o valor da potência mais próxima
 */
int next_power(int n, int p) { // 40, 4 // 15, 2
    int base = 1, num, numAnterior, baseAnterior;
 
    while (1) {
        num = pow(base, p); // 1**4 == 1 | 2**4 == 16 | 3**4 == 81 // 1**2 == 1 | 2**2 = 4 | 3**2 == 9 | 4**2 == 16
 
        if (num > n) { // (1 > 40) | (16 > 40) | (81 > 40) // (1>15) | (4 > 15) | (9 > 15) | (16 > 15)
            if ((num - n) < (n - pow(baseAnterior, p))) { // ... // (16 - 15 < 15 - 3**2) == (1 < 6)
                baseAnterior = base; // ... // 4
                numAnterior = num;
            }
            
            break;
        } else {
            numAnterior = num; // 1 | 16 // 1 | 4 | 9
            baseAnterior = base; // 1 | 2 // 1 | 2 | 3
        }
 
        base++; // 1 -> 2 | 2 -> 3 // 1 -> 2 | 2 -> 3 | 3 -> 4
    }
 
    printf("%d -> %d^%d = %d\n", n, baseAnterior, p, numAnterior); // 40 -> 2^4 = 16 // 15 -> 4^2 = 16
 
    return numAnterior;
}
 
int main() {
    int num, potencia;
    scanf("%d %d", &num, &potencia);
 
    next_power(num, potencia);
 
    return 0;
}