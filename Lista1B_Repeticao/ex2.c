#include <stdio.h>
#include <math.h>
 
int main() {
    int num, i;
    scanf("%d", &num);
 
    for (i = 2; i <= num; i += 2) {
        printf("%d^2 = %d\n", i, (int)pow(i, 2));
    }
 
    return 0;
}