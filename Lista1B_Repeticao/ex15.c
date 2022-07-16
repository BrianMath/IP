#include <stdio.h>
 
int main() {
    int num, num1 = 220, num2 = 284, qtdNumAmigos = 0, somaDivNum1 = 0, somaDivNum2 = 0;
    int i, j;
    scanf("%d", &num);
 
    if (num <= 0) {
        return 0;
    }
 
    while (qtdNumAmigos < num) {
        // Soma dos divisores de num1
        for (i = 1; i < num1; i++) {
            if (num1%i == 0) {
                somaDivNum1 += i; // 284
            }
        }
        //printf("soma1: %d", somaDivNum1);
 
        // Soma dos divisores de num2 (que deve ser igual à soma dos divisores de num1)
        for (j = 1; j < somaDivNum1; j++) {
            if (somaDivNum1%j == 0) {
                somaDivNum2 += j; // 220
            }
        }
        //printf("soma2: %d", somaDivNum2);
 
        if (somaDivNum2 == num1) {
            if (num1 < somaDivNum1) {
                printf("(%d,%d)\n", num1, somaDivNum1);
                qtdNumAmigos++;
            }
        }
 
        num1++;
        somaDivNum1 = 0;
        somaDivNum2 = 0;
    }
    
 
    return 0;
}