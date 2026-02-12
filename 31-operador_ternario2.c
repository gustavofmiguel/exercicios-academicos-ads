#include <stdio.h>

int main(){
    int temperatura = 20;
    int resultado;

    resultado = temperatura >= 30 ? printf("Está calor \n") : printf("Está frio \n");

    return 0;
}