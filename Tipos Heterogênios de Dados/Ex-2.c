#include <stdio.h>
#define M 100

struct aluno
{
    int matricula;
    char nome[128];
    float CR;
};

typedef struct aluno Taluno;

int menu(){

    int op;
    puts("1-Cadastro");
    puts("2-Imprimir");
    puts("0-Sair");
    printf("Op: ");
    scanf("%d", &op);
    return op;

}
Taluno cadastro(){

    Taluno temp;
    puts("Matricula:");
    scanf("%d", &temp.matricula);
    fflush(stdin);
    puts("Entre com o nome: ");
    fgets(temp.nome, 127, stdin);
    fflush(stdin);
    puts("Entre com o CR: ");
    scanf("%f", &temp.CR);
    return temp;

}
void print(Taluno V[], unsigned int size){
    for(unsigned int i=0;i<size;i++){
        printf("ID: %u\n", i);
        printf("Matricula: %d\n",V[i].matricula);
        printf("Nome: %s", V[i].nome);
        printf("CR: %f\n", V[i].CR);
        puts("----------------------------");
    }
}

int main(){
    Taluno dados[M];
    unsigned int control;
    int op;

    do{
        op=menu();
        switch(op){
            case 1:
            if(control>M)
                dados[control++] = cadastro();
            else
                puts("Memoria Cheia!!");    
            break;
            case 2:
            print(dados,control);
            break;
            case 0: break;
            default: puts("Invalido!!");
        }
    }while(op!=0);


    return 0;
}