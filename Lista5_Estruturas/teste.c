#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main() {
	int pos = -1;
	char polinomio[30] = {0};
	char digito0[2], coefParcial[20], coefFinal[20] = {0}, digito;

	// 2x^4+1x^2-5x^1+10x^3
	scanf("%s", polinomio);

	while (1) {
		for (int i = 0; i < strlen(polinomio); i++) {
			if (!isalpha(polinomio[i])) {
				pos++;
				coefFinal[pos] = polinomio[i];
			} else {
				
			}
		}
		
		
		// scanf("%c", digito0);

		// if (digito0[0] == '\n') {
		// 	break;
		// }
		
		// scanf("%[^x]%*c%*c", coefParcial);

		// memset(coefFinal, 0, sizeof(coefFinal));
		// strcat(coefFinal, digito0);
		// strcat(coefFinal, coefParcial);

		// scanf("%d", &pot);

		// polinomio[pot] = atof(coefFinal);
	}

	for (int i = 0; i < 10; i++) {
		if (polinomio[i] != 0) {
			if (i > 0 && polinomio[i] > 0) {
				printf("+");
			}
			
			printf("%.2fx^%d", polinomio[i], i);
		}
	}

	return 0;
}