#include <stdio.h>
#include <stdlib.h>

struct point
{
    float x, y;
};

void printP(struct point p){
    printf("(%0.2f, %0.2f)\n", p.x, p.y);
}

int main(){
    struct point P1={0.2,0.1};
    struct point P2;

    puts("Digite os dados dos pontos x e y: ");
    scanf("%f %f", &P2.x, &P2.y);
    printP(P1);
    printP(P2);
    return 0;
}