#include <stdio.h>

int main(){

    int i,j;
    char t;
    double m[12][12], a=0;

    scanf("%c", &t);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf", &m[i][j]);
        }
    }
    for(i=1;i<=11;i++){
        for(j=11;j>11-i;j--){
            a += m[i][j];
        }
    }
    if(t == 'M'){
        a /= 66.0;
    }
    printf("%.1lf\n", a);
    return 0;
}