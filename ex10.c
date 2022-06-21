#include <stdio.h>
 
int main() {
    int num1, num2, num3, maior, medio, menor;
    char char1, char2, char3;
 
    scanf("%d %d %d\n", &num1, &num2, &num3);
    scanf("%c%c%c", &char1, &char2, &char3);
    
    // A = menor, B = medio, C = maior
    maior = num1;
    menor = num1;
    // Maior número
    if (num2 > num1 && num2 > num3) {
        maior = num2;
    } else if (num3 > num1 && num3 > num2) {
        maior = num3;
    }
    //Menor número
    if (num1 == maior) {
        if (num3 < num2) {
            menor = num3;
        } else {
            menor = num2;
        }
    } else if (num2 == maior) {
        if (num3 < num1) {
            menor = num3;
        }
    } else {
        if (num2 < num1) {
            menor = num2;
        }
    }
    medio = -maior - menor + num1 + num2 + num3;
 
    // Imprimir na ordem: A == 65, B == 66, C == 67
    if (char1 == 65) {
        printf("%d ", menor);
    } else if (char1 == 66) {
        printf("%d ", medio);
    } else if (char1 == 67) {
        printf("%d ", maior);
    }
    
    if (char2 == 65) {
        printf("%d ", menor);
    } else if (char2 == 66) {
        printf("%d ", medio);
    } else if (char2 == 67) {
        printf("%d ", maior);
    }
 
    if (char3 == 65) {
        printf("%d\n", menor);
    } else if (char3 == 66) {
        printf("%d\n", medio);
    } else if (char3 == 67) {
        printf("%d\n", maior);
    }
 
    return 0;
}