#include <stdio.h>
#include <stdlib.h>

unsigned long long int fatR(unsigned long long n){
    if(n<2)
        return 1;
    else
        return n*fatR(n-1);
}

int main(){
    unsigned long long int num = 7;
    unsigned long long int res = fatR(num);
    printf("O logaritmo de %llu eh: %llu", num, res);
    return 0;
}