#include <stdio.h>
 
int main() {
    double input1, input2, input3, input4, n1, n2, n3, n4, temp;
 
    scanf("%lf %lf %lf %lf", &input1, &input2, &input3, &input4); // 3, 4, 1, 2
 
    // Ordenar o par n1 e n2
    if (input1 < input2) { // 3 < 4
        n1 = input1; // n1 = 3
        n2 = input2; // n2 = 4
    } else {
        n1 = input2;
        n2 = input1;
    }
    // Ordenar o par n3 e n4
    if (input3 < input4) { // 1 < 2
        n3 = input3; // n3 = 1
        n4 = input4; // n4 = 2
    } else {
        n3 = input4;
        n4 = input3;
    }
    /* Ordem atual: 3, 4, 1, 2 */
 
    // Comparar n2 e n3 e ordenar se necessário
    if (n3 < n2) { // 1 < 4
        temp = n2; // temp = 4
        n2 = n3;   // n2 = 1
        n3 = temp; // n3 = 4
    }
    /* Ordem atual: 3, 1, 4, 2 */
 
    // Comparar n1 e n2 e ordenar se necessário
    if (n2 < n1) { // 1 < 3
        temp = n1; // temp = 3
        n1 = n2;   // n1 = 1
        n2 = temp; // n2 = 3
    }
    /* Ordem atual: 1, 3, 4, 2 */
 
    // Comparar n3 e n4 e ordenar se necessário
    if (n4 < n3) { // 2 < 4
        temp = n3; // temp = 4
        n3 = n4;   // n3 = 2
        n4 = temp; // n4 = 4
    }
    /* Ordem atual: 1, 3, 2, 4 */
 
    // Comparar n2 e n3 e ordenar se necessário
    if (n3 < n2) { // 2 < 3
        temp = n2; // temp = 3
        n2 = n3;   // n2 = 2
        n3 = temp; // n3 = 3
    }
    /* Ordem atual: 1, 2, 3, 4 */
 
    printf("%.2f, %.2f, %.2f, %.2f", n1, n2, n3, n4);
 
    return 0;
}