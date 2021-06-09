#include <stdio.h>

struct point
{
    float x, y;
};

typedef struct point TPoint;
void printP(TPoint p){
    printf("(%0.2f, %0.2f)\n",p.x, p.y);
}

int main(){
    TPoint P1={0.2,0.1};
    TPoint P2, *pointerP;
    pointerP = &P2;
    puts("Digite os dados do ponto x y: ");
    scanf("%f %f", &pointerP->x, &pointerP->y);
    printP(P1);
    printP(P2);
    return 0;
}