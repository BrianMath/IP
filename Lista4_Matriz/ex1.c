#include <stdio.h>
 
int main() {
    int i, j;
    double matriz[2][2], determinante;
 
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }
    
    determinante = (matriz[0][0]*matriz[1][1]) - (matriz[0][1]*matriz[1][0]);
 
    printf("%.2f", determinante);
 
    return 0;
}