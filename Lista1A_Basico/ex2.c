#include <stdio.h>
 
int main() {
    float grauF, grauC, polegada, milimetro;
    
    scanf("%f", &grauF);
    scanf("%f", &polegada);
    
    // Temperatura
    grauC = (5*(grauF - 32))/9;
    printf("O VALOR EM CELSIUS = %.2f\n", grauC);
    
    // Chuva
    milimetro = polegada * 25.4;
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", milimetro);
    
    return 0;
}