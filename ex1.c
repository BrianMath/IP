#include <stdio.h>
 
int main() {
    int n1, n2, n3, num;
 
    scanf("%d %d %d", &n1, &n2, &n3);
    
    // 1 dígito por vez
    if (n1 > 9 || n2 > 9 || n3 > 9) {
        printf("DIGITO INVALIDO");
        return 0;
    }
    
    num = n1*100 + n2*10 + n3;
    
    printf("%d, %d", num, num*num);
 
    return 0;
}