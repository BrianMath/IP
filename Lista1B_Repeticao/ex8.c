#include <stdio.h>
 
int main() {
    int qtdTimes, i, j, final = 1, numMagico = 2;
    scanf("%d", &qtdTimes);
 
    if (qtdTimes < 2) {
        printf("Campeonato invalido!");
        return 0;
    }
    
    for (i = 1; i <= qtdTimes; i++) {
        for (j = numMagico; j <= qtdTimes; j++) {
            printf("Final %d: Time%d X Time%d\n", final, i, j);
            final++;
        }
 
        numMagico++;
    }
 
    return 0;
}