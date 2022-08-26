#include <stdio.h>
#include <string.h>
 
/**
* Converte a string str para o valor inteiro correspondente.
* 
* @param string string contendo um número inteiro
* @return o número inteiro correspondente
*/
long int string2int(char string[]) {
    int i, digito;
    long int num = 0, multiplicador = 1;
 
    for (i = strlen(string) - 1; i >= 0; i--) {
        if (string[i] == '-') {
            num = -num;
            break;
        }
 
        if (string[i] == '0') {digito = 0;}
        else if (string[i] == '1') {digito = 1;}
        else if (string[i] == '2') {digito = 2;}
        else if (string[i] == '3') {digito = 3;}
        else if (string[i] == '4') {digito = 4;}
        else if (string[i] == '5') {digito = 5;}
        else if (string[i] == '6') {digito = 6;}
        else if (string[i] == '7') {digito = 7;}
        else if (string[i] == '8') {digito = 8;}
        else if (string[i] == '9') {digito = 9;}  
 
        num += digito * multiplicador;
        
        multiplicador *= 10;
    }
    
    return num*2;
}
 
int main() {
    long int num;
    char string[130];
 
    while (scanf("%s", string) != EOF) {
        num = string2int(string);
 
        printf("%s %ld\n", string, num);
        memset(string, 0, sizeof(string));
    }
 
    return 0;
}