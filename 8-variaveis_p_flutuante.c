/*
    Variáveis de ponto flutuante
    São usadas para armazenar números com parte decimal. Em C, 
    os tipos de dados de ponto flutuante mais comuns são float e double.

    Este é um programa no qual realiza operações aritméticas básicas 
    com variáveis float e exibe os resultados com duas casas decimais.
*/

#include <stdio.h>
 
int main() {
    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferenca = x - y;
    float produto = x * y;
    float quociente = x / y; // Divisão de ponto flutuante
 
    printf("Soma: %.2f\n", soma);
    printf("Diferença: %.2f\n", diferenca);
    printf("Produto: %.2f\n", produto);
    printf("Quociente: %.2f\n", quociente);
 
    return 0;
}