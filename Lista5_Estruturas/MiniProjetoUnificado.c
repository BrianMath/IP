#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define sizeString 200


typedef struct {
	char *id; // String com o nome do polinômio
	int grauPoly; // Maior grau do polinômio
	double *coef; // Vetor de coeficientes do polinômio
} Poly;


void lePolinomio(Poly *polinomio) {
	char string[sizeString] = {0}, temp[sizeString] = {0};
	int i, j = 0, expoente = -1, antesExp = 0;

	scanf("%[^\n]%*c", string);

	// Achar maior expoente
	for (i = 0; i < strlen(string); i++) {
		if (string[i] == '^' && atoi(&string[i+1]) > expoente) {
			expoente = atoi(&string[i+1]);
		}
	}
	
	// Atribuir o maior expoente para o polinômio atual
	(*polinomio).grauPoly = expoente;
	// E alocar memória para o vetor de coeficientes
	(*polinomio).coef = (double *) calloc(expoente+1, sizeof(double));

	/* A: 2x^2+3x^9-2x^0 */
	/* Boi: 13x^5+3x^2-9x^1 */
	/* Tigre: -1x^1-2x^4+11x^2 */
	// Conferir um caractere por vez
	for (i = 0; i < strlen(string); i++) {
		// Se for 'x' ou '^': antecede o expoente, então ativa a flag e pula
		if (string[i] == 'x' || string[i] == '^') {
			antesExp = 1;
			continue;
		}

		// Se a flag está ativada: está no expoente
		if (antesExp) {
			expoente = atoi(&string[i]);

			// Põe tudo o que pegou até agora (coeficientes) pra dentro
			(*polinomio).coef[expoente] = atof(temp);
			
			// Zera tudo e continua para o próximo caractere (um coeficiente)
			memset(temp, 0, sizeof(temp));
			j = 0;
			antesExp = 0;

			continue;
		}
		
		// temp recebe os caracteres em ordem até acabarem os coeficientes
		temp[j] = string[i];
		j++;
	}
}

void realizaOperacao(Poly *polinomio, int qtdPoli) {
	char id0[sizeString/2] = {0}, id1[sizeString/2] = {0};
	char operacao[2];
	int i, posPoli0, posPoli1, grauPoli0, grauPoli1, maiorExp, menorExp;
	double termo;

	// Ler os dois ids e a operação entre eles
	scanf("%[^+||-]", id0);
	scanf("%c", operacao);
	scanf("%[^\n]", id1);

	// Achar as posições dos dois ids no vetor de polinômios 
	for (i = 0; i < qtdPoli; i++) {
		if (strcmp(polinomio[i].id, id0) == 0) {
			posPoli0 = i;
			grauPoli0 = polinomio[i].grauPoly;
		}
		// if (strlen(polinomio[i].id) == strlen(id0)) {
		// }

		if (strcmp(polinomio[i].id, id1) == 0) {
			posPoli1 = i;
			grauPoli1 = polinomio[i].grauPoly;
		}
		// if (strlen(polinomio[i].id) == strlen(id1)) {
		// }
	}
	
	// Achar maior expoente entre os dois polinomios
	if (grauPoli0 > grauPoli1) {
		maiorExp = grauPoli0;
		menorExp = grauPoli1;
	} else {
		maiorExp = grauPoli1;
		menorExp = grauPoli0;
	}
	
	// Fazer as contas
	for (i = 0; i <= maiorExp; i++) {
		if (maiorExp == grauPoli0 && menorExp < maiorExp) {
			if (i > menorExp) {
				if (operacao[0] == '+') {
					termo = polinomio[posPoli0].coef[i];
				} else {
					termo = polinomio[posPoli0].coef[i];
				}
			} else {
				if (operacao[0] == '+') {
					termo = polinomio[posPoli0].coef[i] + polinomio[posPoli1].coef[i];
				} else {
					termo = polinomio[posPoli0].coef[i] - polinomio[posPoli1].coef[i];
				}
			}
		} else if (maiorExp == grauPoli1 && menorExp < maiorExp) {
			if (i > menorExp) {
				if (operacao[0] == '+') {
					termo = polinomio[posPoli1].coef[i];
				} else {
					termo = -polinomio[posPoli1].coef[i];
				}
			} else {
				if (operacao[0] == '+') {
					termo = polinomio[posPoli1].coef[i] + polinomio[posPoli0].coef[i];
				} else {
					termo = polinomio[posPoli0].coef[i] - polinomio[posPoli1].coef[i];
				}
			}
		} else if (maiorExp == menorExp) {
			if (operacao[0] == '+') {
				termo = polinomio[posPoli0].coef[i] + polinomio[posPoli1].coef[i];
			} else {
				if (maiorExp == grauPoli0) {
					termo = polinomio[posPoli0].coef[i] - polinomio[posPoli1].coef[i];
				} else if (maiorExp == grauPoli1) {
					termo = polinomio[posPoli1].coef[i] - polinomio[posPoli0].coef[i];
				}
			}			
		}

		if (termo != 0 && termo != -0) {
			if (i > 0 && termo > 0) {
				printf("+");
			}
			
			printf("%.0fx^%d", termo, i);
		}
	}

	printf("\n");
	scanf("%*c");
}


int main() {
	char idPolinomio[sizeString] = {0};
	int sizeId, qtdPoli = 0, i, j;
	int qtdPolinomios, qtdOperacoes;

	Poly *polinomio = NULL;
	// Inicialmente 'polinomio' receberá a memória para somente
	// 1 polinômio e receberá mais se necessário
	polinomio = (Poly *) malloc(sizeof(Poly));

	scanf("%d%*c", &qtdPolinomios);

	// Recebe e aloca tudo dos polinômios
	for (i = 0; i < qtdPolinomios; i++) {
		// Lê o id e calcula o tamanho da string
		scanf("%[^:]%*c%*c", idPolinomio);
		sizeId = strlen(idPolinomio);

		// Atributo .id é um ponteiro para a memória onde estará a string de nome
		polinomio[i].id = (char *) calloc(sizeId+1, sizeof(char));
		// Copia a string lida para o atributo .id
		strcpy(polinomio[i].id, idPolinomio);

		// Lê o corpo do polinômio
		lePolinomio(&polinomio[i]);

		// for (j = 0; j <= polinomio[i].grauPoly; j++) {
		// 	if (polinomio[i].coef[j] > 0) {
		// 		if (j > 0) {
		// 			printf("+");
		// 		}

		// 		printf("%.0fx^%d", polinomio[i].coef[j], j);
		// 	} else if (polinomio[i].coef[j] < 0) {
		// 		printf("%.0fx^%d", polinomio[i].coef[j], j);
		// 	}
		// }
		// printf("\n");
		
		// Realoca memória para caber mais um polinômio
		polinomio = (Poly *) realloc(polinomio, (i+2) * sizeof(Poly));
		qtdPoli++;
	}
	
	scanf("%d%*c", &qtdOperacoes);

	// Recebe e realiza as operações com os polinômios salvos
	for (i = 0; i < qtdOperacoes; i++) {
		realizaOperacao(polinomio, qtdPoli);
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
