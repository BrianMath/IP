#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define sizeString 100


typedef struct {
	char *id; // String com o nome do polinômio
	int grauPoly; // Maior grau do polinômio
	double *coef; // Vetor de coeficientes do polinômio
} Poly;


void lePolinomio(Poly *poly) {
	char coef[sizeString];
	int pot, i = 0, maiorPot;

	// 20x^3+1x^2-5x^1
	while (1) {
		scanf("%[^x||\n]%*c%*c%d", coef, &pot);

		if (i == 0) {
			maiorPot = pot;
			poly->coef = (Poly *) realloc(poly->coef, (maiorPot) * sizeof(Poly));
		} else if (pot > maiorPot) {
			maiorPot = pot;
			poly->coef = (Poly *) realloc(poly->coef, (maiorPot) * sizeof(Poly));
		}

		poly->coef[pot] = atof(coef);
	}
}


int main() {
	char nomePolinomio[sizeString];
	int sizeId, i = 0, coeficiente, potencia, maiorPot;

	Poly *polinomio = NULL;
	// Inicialmente 'polinomio' receberá a memória para somente
	// 1 polinômio e receberá mais se necessário
	polinomio = (Poly *) malloc(sizeof(Poly));

	while (scanf("%[^:]%*c%*c", nomePolinomio) != EOF) {
		// Realoca memória para caber mais um polinômio
		polinomio = (Poly *) realloc(polinomio, (i+1) * sizeof(Poly));

		// Pega o tamanho da string de id, ...
		sizeId = strlen(nomePolinomio);
		// ... aloca a memória no atributo id da struct ...
		polinomio[i].id = (char *) calloc(sizeId, sizeof(char));
		// ... e copia a string lida para o atributo
		strcpy(polinomio[i].id, nomePolinomio);

		// Aloca espaço para 1 double inicialmente e mais se necessário
		polinomio[i].coef = (double *) calloc(1, sizeof(double));
		// Lê o corpo do polinômio
		lePolinomio(&polinomio[i]);
	}
	

	return 0;
}