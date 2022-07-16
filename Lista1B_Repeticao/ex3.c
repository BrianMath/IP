#include <stdio.h>
 
int main() {
    int num1, num2, i;
    scanf("%d %d", &num1, &num2);
 
    if (num1 % 2 != 0) {
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
        return 0;
    }
    
    for (i = 0; i < num2; i++) {
        printf("%d ", num1);
        num1 += 2;
    }
 
    printf("\n");
 
    return 0;
}