#include <stdio.h>
 
int main() {
    float n1, n2, n3, maior, medio, menor;
    scanf("%f %f %f", &n1, &n2, &n3);
 
    maior = n1;
    menor = n1;
    // Maior número
    if (n2 > n1 && n2 > n3) {
        maior = n2;
    } else if (n3 > n1 && n3 > n2) {
        maior = n3;
    }
    //Menor número
    if (n1 == maior) {
        if (n3 < n2) {
            menor = n3;
        } else {
            menor = n2;
        }
    } else if (n2 == maior) {
        if (n3 < n1) {
            menor = n3;
        }
    } else {
        if (n2 < n1) {
            menor = n2;
        }
    }
    medio = n1 + n2 + n3 - maior - menor;
    
    printf("%.2f, %.2f, %.2f\n", menor, medio, maior);
 
    return 0;
}