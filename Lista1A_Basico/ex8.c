#include <stdio.h>
 
int main() {
    int num, digito1, digito2, digito3;
 
    scanf("%d", &num); // 123 | 542
 
    digito3 = num / 100; // 1 | 5
    digito2 = (num / 10) - (digito3 * 10); // 12-10 == 2 | 54-50 == 4
    digito1 = num - (digito3 * 100 + digito2 * 10); 
 
    printf("%d%d%d\n", digito1, digito2, digito3);
 
    return 0;
}