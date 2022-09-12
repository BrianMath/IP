#include <stdio.h>
 
 
struct Curso {
    int idCurso;
    double valorCredito;
    char nomeCurso[101];
};
 
struct Aluno {
    char nomeAluno[501];
    int idCursoMatriculado;
    int qtdCreditos;
};
 
 
int main() {
    int qtdCursos, qtdAlunos, idCurso, i, j;
    double valorCredito;
 
    scanf("%d", &qtdCursos);
    struct Curso cursos[qtdCursos];
 
    // Receber dados dos cursos
    for (i = 0; i < qtdCursos; i++) {
        scanf("%d", &cursos[i].idCurso);
        scanf("%lf%*c", &cursos[i].valorCredito);
        scanf("%[^\n]", cursos[i].nomeCurso);
    }
 
    scanf("%d%*c", &qtdAlunos);
    struct Aluno alunos[qtdAlunos];
    
    // Receber dados dos alunos
    for (i = 0; i < qtdAlunos; i++) {
        scanf("%[^\n]", alunos[i].nomeAluno);
        scanf("%d", &alunos[i].idCursoMatriculado);
        scanf("%d%*c", &alunos[i].qtdCreditos);
    }
    
    // Imprimir boletim
    for (i = 0; i < qtdAlunos; i++) {
        printf("Aluno(a): %s ", alunos[i].nomeAluno);
 
        // Descobrir curso
        for (j = 0; j < qtdCursos; j++) {
            if (alunos[i].idCursoMatriculado == cursos[j].idCurso) {
                valorCredito = cursos[j].valorCredito;
 
                printf("Curso: %s ", cursos[j].nomeCurso);
                break;
            }
        }
        
        printf("Num. Creditos: %d ", alunos[i].qtdCreditos);
        printf("Valor Credito: %.2f ", valorCredito);
        printf("Mensalidade: %.2f\n", valorCredito * alunos[i].qtdCreditos);
    }    
 
    return 0;
}