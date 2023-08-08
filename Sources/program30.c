#include <stdio.h>
#include <string.h>

// Structs
struct st_aluno {
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
};

int main(void)
{
    struct st_aluno aluno1;

    printf("Informe a matricula do aluno: ");
    fgets(aluno1.matricula, 10, stdin);

    printf("Informe o nome do aluno: ");
    fgets(aluno1.nome, 100, stdin);

    printf("Informe o curso do aluno: ");
    fgets(aluno1.curso, 50, stdin);

    printf("Informe o ano de nascimento do aluno: ");
    scanf("%d", &aluno1.ano_nascimento);

    printf("======================Dados do aluno==================\n");
    printf("Matricula: %s\n", strtok(aluno1.matricula, "\n"));
    printf("Nome     : %s\n", strtok(aluno1.nome, "\n"));
    printf("Curso    : %s\n", strtok(aluno1.curso, "\n"));
    printf("Ano de Nascimento: %d\n", aluno1.ano_nascimento);

    return 0;
}
