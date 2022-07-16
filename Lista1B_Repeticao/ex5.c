#include <stdio.h>
 
int main() {
    int num, i;
    unsigned long int fatorial = 1;
    scanf("%d", &num);
 
    for (i = 1; i <= num; i++) {
        fatorial *= i;
    }
    
    printf("%d! = %ld", num, fatorial);
 
    return 0;
}