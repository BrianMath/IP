#include <stdio.h>
 
int main() {
    int num;
 
    scanf("%d", &num);
 
    if (num > 99999) {
        printf("NUMERO INVALIDO");
        return 0;
    }
 
    if (num >= 0 && num < 10) { // 1 algarismo
        printf("PALINDROMO");
    } else if (num >= 10 && num < 100) { // 2 algarismos
        if (num / 10 == num - (num/10 * 10)) { // 22
            printf("PALINDROMO");
        } else {
            printf("NAO PALINDROMO");
        }
    } else if (num >= 100 && num < 1000) { // 3 algarismos
        if (num / 100 == num - (num/10*10)) { // 353
            printf("PALINDROMO");
        } else {
            printf("NAO PALINDROMO");
        }
    } else if (num >= 1000 && num < 10000) { // 4 algarismos
        if (num / 1000 == num - (num/10*10)) { // 1221 -> 1 == 1
            if (num/100 - num/1000*10 == num/10 - num/100*10) { // 1221 -> 2 == 2
                printf("PALINDROMO");
            } else {
                printf("NAO PALINDROMO");
            }
        } else {
            printf("NAO PALINDROMO");
        }
    } else if (num >= 10000) { // 5 algarismos
        if (num / 10000 == num - (num/10*10)) { // 12321 -> 1 == 1
            if (num/1000 - num/10000*10 == num/10 - num/100*10) { // 12321 -> 2 == 2
                printf("PALINDROMO");
            } else {
                printf("NAO PALINDROMO");
            }
        } else {
            printf("NAO PALINDROMO");
        }
    }
 
    return 0;
}