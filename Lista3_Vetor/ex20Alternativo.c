#include <stdio.h>
#define N 10000

int main() {
	int tamanhoInicial, tamanhoFinal, i, j, k, ind_maior;
	char vet[N], final[N];

	scanf("%d %d", &tamanhoInicial, &tamanhoFinal);
	getchar();

	while (tamanhoInicial != 0) {
		i = 1;
		j = tamanhoInicial - tamanhoFinal;
		k = 0;
		ind_maior = 0;

		scanf("%s", vet);

		while (k < tamanhoFinal) {
			while (i <= j) {
				// j é o quanto devo apagar

				if (vet[ind_maior] < vet[i]) {
					ind_maior = i;
				}
				
				i++;
			}
			
			final[k++] = vet[ind_maior];
			ind_maior++;
			i = ind_maior + 1;

			if (j + 1 < tamanhoInicial - 1) {
				// j recebe o menor índice entre j + 1 com n - 1
				j = j + 1;
			} else {
				j = tamanhoInicial - 1;
			}
		}
		
		// Transforma o vetor final como string
		final[tamanhoFinal] = '\0';

		printf("%s\n", final);

		// Lê os próximos valores de n e d
		scanf("%d %d", &tamanhoInicial, &tamanhoFinal);
		getchar();
	}
	
	return 0;
}