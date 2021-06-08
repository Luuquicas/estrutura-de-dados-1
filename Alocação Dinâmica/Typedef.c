#include <stdio.h>

typedef float nota;

int main(){
    nota prova1=0, prova2=0, media=0;

    printf("Informe a nota da primeira prova: ");
    scanf("%f", &prova1);

    printf("Informe a nota da segunda prova: ");
    scanf("%f", &prova2);

    media=(prova1+prova2)/2;

    printf("Media do aluno = %.1f\n", media);

    return 0;
}