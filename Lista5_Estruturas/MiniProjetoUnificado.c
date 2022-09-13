#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define sizeString 100


typedef struct {
	char *id; // String com o nome do polinômio
	int grauPoly; // Maior grau do polinômio
	double *coef; // Vetor de coeficientes do polinômio
} Poly;


void lePolinomio(double *coeficientes) {
	int pot, maiorPot = -1;
	char digito0[2], coefParcial[20], coefFinal[20];

	while (1) {
		scanf("%c", digito0);

		if (digito0[0] == '\n') {
			break;
		}
		
		scanf("%[^x]%*c%*c", coefParcial);

		memset(coefFinal, 0, sizeof(coefFinal));
		strcat(coefFinal, digito0);
		strcat(coefFinal, coefParcial);

		scanf("%d", &pot);
		if (pot > maiorPot) {
			maiorPot = pot;
			coeficientes = (double *) realloc(coeficientes, (maiorPot * sizeof(double)) + 1);
		}
		
		coeficientes[pot] = atof(coefFinal);
	}
}


int main() {
	char idPolinomio[sizeString];
	int sizeId, i;
	int qtdPolinomios;

	Poly *polinomio = NULL;
	// Inicialmente 'polinomio' receberá a memória para somente
	// 1 polinômio e receberá mais se necessário
	polinomio = (Poly *) malloc(sizeof(Poly));

	scanf("%d", &qtdPolinomios);

	/* 1 */
	/* A: 20x^2+3x^9-2x^0 */

	// Recebe e aloca tudo dos polinômios
	for (i = 0; i < qtdPolinomios; i++) {
		// Lê o id e calcula o tamanho da string
		scanf("%*c%[^:]%*c%*c", idPolinomio);
		sizeId = strlen(idPolinomio);

		// Atributo .id é um ponteiro para a memória onde estará a string de nome
		polinomio[i].id = (char *) calloc(sizeId+1, sizeof(char));
		// Copia a string lida para o atributo .id
		strcpy(polinomio[i].id, idPolinomio);

		// Atributo .coef é um ponteiro para a memória onde estará o vetor de coeficientes
		polinomio[i].coef = (double *) calloc(1, sizeof(double));

		// Lê o corpo do polinômio
		lePolinomio(polinomio[i].coef);

		// printf("\n\n----------\n");

		for (int i = 0; i < 10; i++) {
			if (polinomio[0].coef[i] != 0) {
				if (i > 0 && polinomio[0].coef[i] > 0) {
					printf("+");
				}
				
				printf("%.0fx^%d", polinomio[0].coef[i], i);
			}
		}
		
		// // Realoca memória para caber mais um polinômio
		// polinomio = (Poly *) realloc(polinomio, (i+1) * sizeof(Poly));
	}
	
	for (i = 0; i < qtdPolinomios; i++) {
		free(polinomio[i].id);
	}
	for (i = 0; i < qtdPolinomios; i++) {
		free(polinomio[i].coef);
	}
	free(polinomio);

	return 0;
}
