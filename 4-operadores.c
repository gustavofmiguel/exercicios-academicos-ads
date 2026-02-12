#include <stdio.h>


int main(){
    int numero1, numero2;
    int soma, sub, mult, divisao;

    printf ("Entre com o numero 1: ");
    scanf("%d", &numero1);
    printf ("Entre com o numero 2: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2; 
    sub = numero1 - numero2;
    mult = numero1 * numero2;
    divisao = numero1 / numero2;

    printf ("a soma: %d \n", soma);
    printf ("a subtração: %d \n", sub);
    printf ("a multiplicação: %d \n", mult);
    printf ("a divisão: %d \n", divisao);


    return 0;
}