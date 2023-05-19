#include <stdio.h>
 
int main() {
    int rotas[6][6] = {{0, 63, 210, 190, -1, 190}, {63, 0, 160, 150, 95, 10},
                       {210, 160, 0, 10, 1, 10}, {190, 150, 10, 0, 10, 20}, 
                       {10, 95, 7, 21, 0, 80}, {190, 2, -1, 41, 80, 0}};
    int i, j, tamanho, cidadeAntes, cidadeAgora, distancia = 0;
 
    scanf("%d", &tamanho);
    int viagem[tamanho];
    
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &viagem[i]);
    }
 
    cidadeAgora = viagem[0];
 
    for (i = 1; i < tamanho; i++) {
        cidadeAntes = cidadeAgora;
        cidadeAgora = viagem[i];
 
        if (rotas[cidadeAntes][cidadeAgora] > -1) {
            distancia += rotas[cidadeAntes][cidadeAgora];
        } else {
            printf("rota invalida!\n");
            return 0;
        }
    }
    
    printf("%d\n", distancia);
    
    return 0;
}