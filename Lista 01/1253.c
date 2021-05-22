#include <stdio.h>

/*
Júlio César usava um sistema de criptografia, agora conhecido como Cifra de César, que trocava cada letra pelo equivalente em duas posições adiante no alfabeto (por exemplo, 'A' vira 'C', 'R' vira 'T', etc.). Ao final do alfabeto nós voltamos para o começo, isto é 'Y' vira 'A'. Nós podemos, é claro, tentar trocar as letras com quaisquer número de posições.
Entrada
A entrada contém vários casos de teste. A primeira linha de entrada contém um inteiro N que indica a quantidade de casos de teste. Cada caso de teste é composto por duas linhas. A primeira linha contém uma string com até 50 caracteres maiúsculos ('A'-'Z'), que é a sentença após ela ter sido codificada através desta Cifra de César modificada. A segunda linha contém um número que varia de 0 a 25 e que representa quantas posições cada letra foi deslocada para a direita.
*/

int main(){

    int i,cod=0,qntd=0,t=0;
    char palavra[50];

    scanf("%i", &qntd);

    while(qntd--){

        scanf("%s", &palavra);
        scanf("%i", &cod);

        for(i=0;i<50;i++){
            if(palavra[i] == '\0'){
                break;
            }else if((palavra[i] - cod) < 65){
                t = (palavra[i] - cod) + 26;
            }else{
                t = palavra[i] - cod;
            }
            printf("%c", t);
        }
        printf("\n");
    }

    return 0;
}

