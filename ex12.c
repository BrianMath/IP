#include <stdio.h>

int main() {
	double renda, rendaPerCapita;
	int qtdPessoas, tipoEscola, etnia;
	
	scanf("%lf %d %d %d", &renda, &qtdPessoas, &tipoEscola, &etnia);
	
	if (tipoEscola == 1) { // particular
		printf("ALUNO NAO COTISTA\n");
	} else {
		rendaPerCapita = renda / qtdPessoas;

		if (rendaPerCapita <= 1.5 * 937) { // L1 ou L2
			if (!(etnia == 4)) {
				printf("ALUNO COTISTA (L2)\n");
			} else {
				printf("ALUNO COTISTA (L1)\n");
			}
		} else { // L3 ou L4
			if (!(etnia == 4)) {
				printf("ALUNO COTISTA (L4)\n");
			} else {
				printf("ALUNO COTISTA (L3)\n");
			}
		}
	}

	return 0;
}