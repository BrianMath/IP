#include <stdio.h>
 
/**
 * Converte um valor em reais para notas e moedas de 100, 50, 10 e 1
 * 
 * @param valor inteiro que representa o dinheiro a ser convertido
 * @param nota100 quantidade de notas de 100 (ponteiro)
 * @param nota50 quantidade de notas de 50 (ponteiro)
 * @param nota10 quantidade de notas de 10 (ponteiro)
 * @param moeda1 quantidade de notas de 1 (ponteiro)
 */
void converteEmNotasMoedas(int valor, int *nota100, int *nota50, int *nota10, int *moeda1) {
    *nota100 = valor/100; // 46395/100 == 463
    valor = valor - (*nota100 * 100); // 46395 - 46300 == 95
 
    *nota50 = valor/50; // 95/50 == 1
    valor = valor - (*nota50 * 50); // 95 - 50 == 45
 
    *nota10 = valor/10; // 45/10 == 4
    valor = valor - (*nota10 * 10); // 45 - 40 == 5
 
    *moeda1 = valor/1; // 5/1 == 5
}
 
int main() {
    int dinheiro, nota100 = 0, nota50 = 0, nota10 = 0, moeda1 = 0;
    int i;
    scanf("%d", &dinheiro);
 
    converteEmNotasMoedas(dinheiro, &nota100, &nota50, &nota10, &moeda1);
 
    printf("NOTAS DE 100 = %d\n", nota100);
    printf("NOTAS DE 50 = %d\n", nota50);
    printf("NOTAS DE 10 = %d\n", nota10);
    printf("MOEDAS DE 1 = %d\n", moeda1);    
 
    return 0;
}