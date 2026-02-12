/*
    Incremento (++)
    Pré Incremento (++a)
    Pós incremento (a++)
    Decremento (--)
    Pré decremento (--a)
    Pós decremento (a--)
    */

#include <stdio.h>

int main(){
    int numero1 = 1, resultado;

    printf("Antes incremento: %d \n", numero1);
    // mesmo que: num1 = num1 + 1
    // outra fortma: num1 += 1
    resultado = numero1++;
    // printf("Pós incremento: %d \n", num1);

    printf("Após Pós-Incremento - Numero 1: %d - resultado: %d \n", numero1, resultado);
    
    resultado = ++numero1;
    printf("Após Pré-Incremento - Numero 1: %d - resultado: %d \n", numero1, resultado);

    //num1--;
    //mesmo que: num1 = num1 - 1
    //outra fortma: num1 -= 1
   // printf("Após decremento: %d \n", num1);
    
    resultado = numero1--;
    printf("Após Pós-Decremento - Numero 1: %d - resultado: %d \n", numero1, resultado);

    resultado = --numero1;
    printf("Após Pré-Decremento - Numero 1: %d - resultado: %d \n", numero1, resultado);

    return 0;
}