#include <stdio.h>
 
int main() {
    int testes, i, num1, num2;
    scanf("%d", &testes);
 
    for (i = 0; i < testes; i++) {
        scanf("%d %d", &num1, &num2);
 
        // 123 -> 321 | 123/100 == 1 +
        // (123/10 - 123/100*10)*10 == (12 - 10)*10 == 20 +
        // (123 - 123/10*10)*100 == (123 - 120)*100 == 300
        num1 = (num1/100) + ((num1/10-num1/100*10)*10) + ((num1-num1/10*10)*100);
        num2 = (num2/100) + ((num2/10-num2/100*10)*10) + ((num2-num2/10*10)*100);
 
        if (num1 > num2) {
            printf("%d\n", num1);
        } else {
            printf("%d\n", num2);
        }
    }
 
    return 0;
}