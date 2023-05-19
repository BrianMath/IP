#include <stdio.h>
#include <math.h>
 
int main() {
    int qtdTestes, i, j;
    double temp, u, x, y, z;
    struct Vetor {
        double u;
        double x;
        double y;
        double z;
        double norma;
    };
 
    scanf("%d", &qtdTestes);
    struct Vetor vetores[qtdTestes];
 
    // Receber valores dos vetores e calcular a norma
    for (i = 0; i < qtdTestes; i++) {
        scanf("%lf %lf %lf %lf", &vetores[i].u, &vetores[i].x, &vetores[i].y, &vetores[i].z);
 
        vetores[i].norma = sqrt(pow(vetores[i].u, 2) + pow(vetores[i].x, 2) +
                                pow(vetores[i].y, 2) + pow(vetores[i].z, 2));
        
        // |vetores[i].norma|
        if (vetores[i].norma < 0) {
            vetores[i].norma *= -1;
        }
    }
 
    // Ordenar vetor usando Insertion Sort
    for (i = 1; i < qtdTestes; i++) {
        temp = vetores[i].norma;
        u = vetores[i].u, x = vetores[i].x, y = vetores[i].y, z = vetores[i].z;
        j = i - 1;
        
        while(j >= 0 && vetores[j].norma > temp) {
            vetores[j+1] = vetores[j];
            j--;
        }
 
        vetores[j+1].norma = temp;
        vetores[j+1].u = u, vetores[j+1].x = x, vetores[j+1].y = y, vetores[j+1].z = z;
    }
 
    for (i = 0; i < qtdTestes; i++) {
        printf("Vetor: (%.2f, %.2f, %.2f, %.2f) Norma: %.2f\n",
                vetores[i].u, vetores[i].x, vetores[i].y, vetores[i].z, vetores[i].norma);
    }
 
    return 0;
}