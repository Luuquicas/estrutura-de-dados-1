#include <stdio.h>

typedef float nota;
typedef int inteiro;

struct tAluno
{
    inteiro matricula;
    nota prova1;
    nota prova2;
};

typedef struct tAluno tAluno;

int main(){

    tAluno aluno;   

    nota media=0;

    printf("Informe o numero da matricula: ");
    scanf("%d", &aluno.matricula);
    printf("Informe a nota da primeira prova: ");
    scanf("%f", &aluno.prova1);
    printf("Informe a nota da segunda prova: ");
    scanf("%f", &aluno.prova2);

    media=(aluno.prova1+aluno.prova2)/2;

    printf("Matricula.......:%d\n",aluno.matricula);
    printf("Media do aluno..:%.1f\n",media);


    return 0;
}