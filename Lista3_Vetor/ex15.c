#include <stdio.h>
 
int main() {
    int qtdAlunos, minimoAlunos, i, horaChegada, alunosQueChegaram = 0, pos = 0;
    scanf("%d %d", &qtdAlunos, &minimoAlunos);
    int posAlunos[qtdAlunos];
 
    for (i = 0; i < qtdAlunos; i++) {
        scanf("%d", &horaChegada);
 
        if (horaChegada <= 0) {
            alunosQueChegaram++;
            posAlunos[pos] = i + 1;
            pos++;
        }
    }
 
    if (alunosQueChegaram >= minimoAlunos) {
        printf("NAO\n");
    } else {
        printf("SIM\n");
        return 0;
    }
    
    for (i = alunosQueChegaram - 1; i >= 0; i--) {
        printf("%d\n", posAlunos[i]);
    }
 
    return 0;
}