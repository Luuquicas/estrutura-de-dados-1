#include <stdio.h>
#include <stdlib.h>

void funcaoPrint(int x[3][3]){
    int i,j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int matriz[3][3] = {1,2,3,4,5,6,7,8,9};

    funcaoPrint(matriz);

    return 0;
}