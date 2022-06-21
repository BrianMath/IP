#include <stdio.h>

int main() {
	int i;
	double a, b, c, maior, medio, menor;

	scanf("%d %lf %lf %lf", &i, &a, &b, &c);

	// Colocar a, b e c em maior, medio e menor
	maior = a;
    menor = a;
    // Maior número
    if (b > a && b > c) {
        maior = b;
    } else if (c > a && c > b) {
        maior = c;
    }
    //Menor número
    if (a == maior) {
        if (c < b) {
            menor = c;
        } else {
            menor = b;
        }
    } else if (b == maior) {
        if (c < a) {
            menor = c;
        }
    } else {
        if (b < a) {
            menor = b;
        }
    }
    medio = - maior - menor + a + b + c;

	if (i == 1) {
		printf("%.2f %.2f %.2f\n", menor, medio, maior);
	} else if (i == 2) {
		printf("%.2f %.2f %.2f\n", maior, medio, menor);
	} else {
		printf("%.2f %.2f %.2f\n", medio, maior, menor);
	}

	return 0;
}