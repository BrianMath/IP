#include <stdio.h>

/* Tarefa:
Receber duas matrizes e verificar se a menor está contida na maior
*/

int main() {
	int qtdLinMaior, qtdColMaior, qtdLinMenor, qtdColMenor;
	int i, j, lMaior, cMaior, lMenor = 0, cMenor = 0;
	int contemMenor = 1;

	scanf("%d %d", &qtdLinMaior, &qtdColMaior);
	int matrizMaior[qtdLinMaior][qtdColMaior];
	scanf("%d %d", &qtdLinMenor, &qtdColMenor);
	int matrizMenor[qtdLinMenor][qtdColMenor];

	// Preencher matriz maior
	for (i = 0; i < qtdLinMaior; i++) {
		for (j = 0; j < qtdColMaior; j++) {
			scanf("%d", &matrizMaior[i][j]);
		}
	}

	// Preencher matriz menor
	for (i = 0; i < qtdLinMenor; i++) {
		for (j = 0; j < qtdColMenor; j++) {
			scanf("%d", &matrizMenor[i][j]);
		}
	}

	// Procurar matriz menor em matriz maior
	for (i = 0; i < qtdLinMaior; i++) {
		for (j = 0; j < qtdColMaior; j++) {
			if (matrizMaior[i][j] == matrizMenor[0][0]) {
				// Caso o primeiro elemento seja encontrado
				// serão buscados os demais elementos
				for (lMaior = i; lMaior < i+qtdLinMenor; lMaior++) {
					for (cMaior = j; cMaior < j+qtdColMenor; cMaior++) {
						if (matrizMaior[lMaior][cMaior] !=
							matrizMenor[lMenor][cMenor]) {
							contemMenor = 0;
							break;
						}
						
						cMenor++;
					}

					if (!contemMenor) {
						break;
					}

					lMenor++;
					cMenor = 0;
				}

				if (contemMenor) {
					printf("A matriz grande contém a menor!\n");
					return 0;
				}

				lMenor = 0;
				cMenor = 0;
				contemMenor = 1;
			}
		}
	}

	printf("A matriz grande NÃO contém a menor!\n");

	return 0;
}