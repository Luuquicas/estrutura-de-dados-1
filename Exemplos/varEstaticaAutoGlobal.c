#include <stdio.h>
#include <stdlib.h>

int gVariavelGlobal = 2;

int teste(){

    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 2;

    static int variavelLocalEstatica = 2;
    variavelLocalEstatica *= 2;

    gVariavelGlobal *= 2;

    printf("Variavel Local Automatica eh %i\n", variavelLocalAutomatica);
    printf("Variavel Local Estatica eh %i\n", variavelLocalEstatica);
    printf("Variavel Global eh %i\n", gVariavelGlobal);
}

int main(){

    teste();
    teste();
    teste();

    return 0;
}
