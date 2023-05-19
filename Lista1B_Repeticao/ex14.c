#include <stdio.h>
 
int main() {
    int num, i, somaDivisores = 1;
    scanf("%d", &num);
 
    // 1 sempre é divisor
    printf("%d = 1 ", num); // "6 = 1"
 
    for (i = 2; i < num; i++) {
        if (num%i == 0) { // i é um divisor de num
            somaDivisores += i;
            printf("+ %d ", i); // "1 + "
        }
    }
 
    printf("= %d ", somaDivisores); // "6"
    if (somaDivisores == num) {
        printf("(NUMERO PERFEITO)");
    } else {
        printf("(NUMERO NAO E PERFEITO)");
    }
 
    return 0;
}