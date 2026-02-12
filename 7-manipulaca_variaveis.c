/*
    São usadas para armazenar números inteiros,
    ou seja, números sem parte decimal. Em C, 
    o tipo de dado inteiro mais comum é int.
    A seguir um exemplo de manipulação de variáveis inteiras


    um programa simples no qual é declarado e inicializado duas variáveis inteiras, 
    a e b. O programa executa operações aritméticas básicas, 
    como soma, subtração, multiplicação e divisão, e exibe os resultados no terminal.
*/

#include <stdio.h>
 
int main() {
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b;
 
    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);
 
    return 0;
}