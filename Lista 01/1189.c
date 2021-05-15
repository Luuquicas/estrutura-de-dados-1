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
    for(i=1;i<=10;i++){
        if(i<=5){
            for(j=11;j>11-i;j--){
                soma += m[i][j];
            }
        }else{
            for(j=11;j>i;j--){
                soma += m[i][j];
            }
        }
    }

    if(t == 'M') soma /= 30.0;
    printf("%.1lf\n", soma);
    return 0;
}