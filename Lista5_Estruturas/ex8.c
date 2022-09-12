#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
 
typedef struct {
    int idCurso;
    double valorCredito;
    char *nomeCurso;
} Curso;
 
typedef struct {
    char *nomeAluno;
    int idCursoMatriculado;
    int qtdCreditos;
} Aluno;
 
 
int main() {
    int qtdCursos, qtdAlunos, idCurso, i, j, sizeNome;
    double valorCredito;
    char nomes[1001];
 
    scanf("%d", &qtdCursos);
    
    // *cursos é um ponteiro de Curso
    Curso *cursos = NULL;
    // malloc() aloca a memória para a quantidade de cursos desejados
    // ao multiplicar pelo tamanho de uma estrutura Curso e coloca a referência
    // dentro de 'cursos'
    cursos = (Curso *) malloc(qtdCursos * sizeof(Curso));
 
    // Receber dados dos cursos
    for (i = 0; i < qtdCursos; i++) {
        scanf("%d", &cursos[i].idCurso);
        scanf("%lf%*c", &cursos[i].valorCredito);
 
        scanf("%[^\n]", nomes);
        sizeNome = strlen(nomes);
        // malloc() aloca a memória exata para receber a string + '\0'
        // e coloca a referência dentro do campo Curso.nomeCurso de um curso [i] 
        cursos[i].nomeCurso = (char *) malloc((sizeNome+1) * sizeof(char));
        // Copia a string referente ao curso para o campo nomeCurso
        strcpy(cursos[i].nomeCurso, nomes);
    }
 
    scanf("%d%*c", &qtdAlunos);
    Aluno *alunos = NULL;
    // 'alunos' é um ponteiro para a memória onde ficarão os alunos
    alunos = (Aluno *) malloc(qtdAlunos * sizeof(Aluno));
    
    // Receber dados dos alunos
    for (i = 0; i < qtdAlunos; i++) {
        scanf("%[^\n]", nomes);
        sizeNome = strlen(nomes);
        // o campo Alunos.nomeAluno recebe um ponteiro para um espaço de memória
        // alocado por malloc() para a string + '\0' que é o nome do aluno
        alunos[i].nomeAluno = (char *) malloc((sizeNome+1) * sizeof(char));
        // Copia a string referente ao aluno para o campo nomeCurso
        strcpy(alunos[i].nomeAluno, nomes);
 
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
 
    // Limpar memória alocada de baixo para cima
    for (i = 0; i < qtdAlunos; i++) {
        free(alunos[i].nomeAluno);
    }
    free(alunos);
 
    for (i = 0; i < qtdCursos; i++) {
        free(cursos[i].nomeCurso);
    }
    free(cursos);
 
    return 0;
}