#include <stdio.h>
 
int main() {
    int decimal, n1, n2, n3, n4, n5, n6, n7, n8;
 
    scanf("%d", &decimal);
 
    if (decimal < 0 || decimal > 255) {
        printf("Numero invalido!\n");
        return 0;
    }
    
    n1 = decimal%2;
    n2 = decimal/2%2;
    n3 = decimal/2/2%2;
    n4 = decimal/2/2/2%2;
    n5 = decimal/2/2/2/2%2;
    n6 = decimal/2/2/2/2/2%2;
    n7 = decimal/2/2/2/2/2/2%2;
    n8 = decimal/2/2/2/2/2/2/2%2;
    
    printf("%d%d%d%d%d%d%d%d", n8, n7, n6, n5, n4, n3, n2, n1);
 
    return 0;
}