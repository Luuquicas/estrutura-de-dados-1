#include <stdio.h>
/*
Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão acima da diagonal principal da matriz, conforme ilustrado abaixo (área verde).
Entrada
A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante que compõem a matriz.
Saída
Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.
*/

int main() {

    int i,j;
    char t;
    double m[12][12], a = 0;

    scanf("%c",&t);

    for (i=0; i<12; i++) {
        for (j=0;j<12;j++) {
            scanf("%lf", &m[i][j]);
            if (j>i)
                a += m[i][j];
        }
    }
    if (t=='M'){
        a /= 66.0;
    }
    printf("%.1lf\n", a);
    
    return 0;
}