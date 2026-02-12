/*
    Ocorre automaticamente quando você mistura diferentes
    tipos de dados em uma expressão. O compilador converte os tipos
    de dados para realizar a operação de acordo com o que o programador escreveu.
*/

#include <stdio.h>
 
int main() {
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // 'a' é explicitamente convertido para float
 
    printf("Quociente: %.2f\n", quociente);
 
    return 0;
}