/*
    São usados para atribuir valores a variáveis. Eles podem ser combinados 
    com operadores aritméticos para realizar uma operação e, em seguida, 
    atribuir o resultado à variável.
*/

#include <stdio.h>

int main(){
    /*
    atribuição simples (=)
    atribuição com soma (+=)
    atribuição com subtração (-=)
    atribuição com multiplicação (*=)
    atribuição com divisão (/=)

    */
    int num1 = 10, resultado;

    resultado = 10;
    printf("Resultado: %d \n", resultado);

    //resultado = resultado + 20
    resultado += 20;
    printf("Resultado: %d \n", resultado);

    //resultado = resultado - num1
    resultado -= num1;
    printf("Resultado: %d \n", resultado);

    // resulta = resultado * 5
    resultado *= 5;
    printf("Resultado: %d \n", resultado);

    // Resultado = resultado / 2
    resultado /= 2;
    printf("Resultado: %d \n", resultado);



    return 0;
}