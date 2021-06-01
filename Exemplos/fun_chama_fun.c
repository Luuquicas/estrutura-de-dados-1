#include <stdio.h>
#include <stdlib.h>

int main(){

    float somaDeDigitos(float a, float b);
    float a,b,soma;

    printf("Digite dois numeros:\n");
    scanf("%f %f", &a,&b);

    soma = somaDeDigitos(a,b);

    printf("O valor da somaeh %.1f\n", soma);


    return 0;
}

float somaDeDigitos(float a, float b){

    float numAbsoluto(float x);

    if(a < 0){
        a = numAbsoluto(a);
    }
    if(b < 0){
        b = numAbsoluto(b);
    }
    return a+b;

}

float numAbsoluto(float x){

    return x * -1;
}