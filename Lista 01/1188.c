#include <stdio.h>
#define TAM 12

int main(){

    double m[TAM][TAM];
    double soma=0;
    int i,j;
    char t;

    scanf("%c", &t);
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            scanf("%lf", &m[i][j]);
        }
    }
    for(i=7;i<=11;i++){
        for(j=11-i+1;j<=i-1;j++){
            soma += m[i][j];
        }
    }

    if(t == 'M') soma /= 30.0;
    
    printf("%.1lf\n", soma);
    return 0;
}