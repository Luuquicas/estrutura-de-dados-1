#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibR(unsigned long long n){
    if(n<=1) return n;
    return fibR(n-1)+fibR(n-2);
}

int main(){
    unsigned long long int num = 1;
    unsigned long long int res = fibR(num);
    printf("Fibonacci de %llu e: %llu", num, res);
    return 0;
}