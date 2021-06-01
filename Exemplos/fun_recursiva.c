#include <stdio.h>
#include <stdlib.h>

int fatorial(int x){
    
    int res;
    if(x == 0){
        res = 1;
    }else {
        res = x * fatorial(x-1);
    }
    return res;

}

int main(){
    int num, res;

    printf("Digite um numero:\n");
    scanf("%i", &num);

    res = fatorial(num);

    printf("O fatorial de %i eh %i\n", num, res);

    return 0;
}