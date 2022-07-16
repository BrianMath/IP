#include <stdio.h>
 
int main() {
    int num, k;
    double soma = 0;
    scanf("%d", &num);
 
    if (num <= 0) {
        printf("Numero invalido!");
        return 0;
    }
    
    for (k = 1; k <= num; k++) {
        soma += 1/(float)k;
    }
 
    printf("%.6f", soma);
 
    return 0;
}