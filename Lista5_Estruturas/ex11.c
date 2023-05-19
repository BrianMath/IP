#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
 
typedef struct {
    int qtdPessoas;
    int consumo;
    double mediaConsumo;
    int foiLido;
} Imovel;
 
 
int main() {
    int qtdImoveis, numCity = 0, i, j, k, pos;
    double menor = 100, qtdPessoas = 0, qtdConsumo = 0;
 
    Imovel **cidades = NULL;
    cidades = (Imovel **) malloc(sizeof(Imovel*));
 
    int *totalImoveis = NULL;
    totalImoveis = (int *) malloc(sizeof(int));
 
    while (1) {
        scanf("%d", &qtdImoveis);
 
        if (qtdImoveis == 0) {
            break;
        }
        
        if (numCity > 0) {
            cidades = realloc(cidades, (numCity+1) * sizeof(Imovel*));
 
            totalImoveis = realloc(totalImoveis, (numCity+1) * sizeof(int));
        }
 
        totalImoveis[numCity] = qtdImoveis;
        cidades[numCity] = malloc(qtdImoveis * sizeof(Imovel));
        
        for (j = 0; j < qtdImoveis; j++) {
            scanf("%d", &cidades[numCity][j].qtdPessoas);
            scanf("%d", &cidades[numCity][j].consumo);
 
            cidades[numCity][j].mediaConsumo = floor(
                (double) cidades[numCity][j].consumo /
                (double) cidades[numCity][j].qtdPessoas
            );
            
            cidades[numCity][j].foiLido = 0;
        }
        
        numCity++;
    }
    
    for (i = 0; i < numCity; i++) {
        if (i > 0) {
            printf("\n\n");
        }
        
        printf("Cidade# %d:\n", i+1);
 
        for (k = 0; k < totalImoveis[i]; k++) {
            for (j = 0; j < totalImoveis[i]; j++) {
                if (cidades[i][j].foiLido == 0 && cidades[i][j].mediaConsumo < menor) {
                    menor = cidades[i][j].mediaConsumo;
                    
                    qtdPessoas = cidades[i][j].qtdPessoas;
                    pos = j;
                }
            }
 
            for (j = 0; j < totalImoveis[i]; j++) {
                if (cidades[i][j].foiLido == 0 && cidades[i][j].mediaConsumo == menor && j != pos) {
                    qtdPessoas += cidades[i][j].qtdPessoas;
 
                    cidades[i][j].foiLido = 1;
                }
            }
 
            if (qtdPessoas > 0) {
                printf("%.0f-%.0f", qtdPessoas, cidades[i][pos].mediaConsumo);
            }
 
            qtdPessoas = 0;
 
            if (k != totalImoveis[i] - 1) {
                printf(" ");
            }
 
            cidades[i][pos].foiLido = 1;
            pos = 0;
            menor = 100;
        }
 
        printf("\n");
 
        for (j = 0; j < totalImoveis[i]; j++) {
            qtdPessoas += cidades[i][j].qtdPessoas;
            qtdConsumo += cidades[i][j].consumo;
        }
 
        printf("Consumo medio: %.2f m3.", qtdConsumo / qtdPessoas);
 
        qtdPessoas = 0;
        qtdConsumo = 0;
    }
 
    for (i = 0; i < numCity; i++) {
        free(cidades[i]);
    }
    free(cidades);
    free(totalImoveis);
    
    return 0;
}