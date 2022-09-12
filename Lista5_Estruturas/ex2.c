#include <stdio.h>
#include <string.h>
 
int main() {
    int qtdTestes, qtdDisponivel, qtdDesejada, qtdProduto, a, i, j;
    char nomeProduto[51];
    double totalProdutos = 0;
    struct Produto {
        char nome[51];
        double preco;
    };
    
 
    scanf("%d", &qtdTestes);
 
    for (a = 0; a < qtdTestes; a++) {
        scanf("%d", &qtdDisponivel);
        struct Produto produtos[qtdDisponivel];
 
        // Recebe os produtos disponíveis e seus preços
        for (i = 0; i < qtdDisponivel; i++) {
            scanf("%s", produtos[i].nome);
            scanf("%lf", &produtos[i].preco);
        }
        
        scanf("%d", &qtdDesejada);
 
        // Recebe os produtos desejados e a quantidade
        for (i = 0; i < qtdDesejada; i++) {
            scanf("%s", nomeProduto);
            scanf("%d", &qtdProduto);
 
            // Acha o produto disponível igual ao desejado
            for (j = 0; j < qtdDisponivel; j++) {
                // Se forem iguais, esse é o produto desejado
                if (strcmp(produtos[j].nome, nomeProduto) == 0) {
                    totalProdutos += produtos[j].preco * qtdProduto;
                    break;
                }
            }
        }
        
        // Imprime o total da compra
        printf("R$ %.2f\n", totalProdutos);
 
        totalProdutos = 0;
    }
    
    return 0;
}