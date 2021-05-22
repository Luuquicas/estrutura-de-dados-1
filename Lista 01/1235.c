#include <stdio.h>
#include <string.h>

int main(){

    int N, frase[100],frase2[100],i,j,k,t,r;

    scanf("%d", &N);
    getchar();

    for(i=0;i<N;i++){
        gets(frase);
        t = strlen(frase);
        r = t/2;
        k=0;
        
        for(j=r-1;j>=0;j--){
            frase2[k] = frase[j];
            k++;
        }
        k = r;
        for(j=t-1;j>=r;j--){
            frase2[k] = frase[j];
            k++;
        }
        frase2[t] = '\0';
        puts(frase2);
    }

    return 0;
}