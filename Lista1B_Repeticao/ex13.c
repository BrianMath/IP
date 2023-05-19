#include <stdio.h>
 
int main() {
    int limite, i, j, impares = -1;
    scanf("%d" ,&limite);
 
    for (i = 1; i <= limite; i++) {
        printf("%d*%d*%d = ", i, i, i); // 2*2*2 = 
        
        for (j = 1; j <= i; j++) {
            impares += 2; // -1 -> 1 -> 3 -> 5
            printf("%d", impares);
 
            if (j < i) {
                printf("+");
            }
        }
        printf("\n");
    }
 
    return 0;
}