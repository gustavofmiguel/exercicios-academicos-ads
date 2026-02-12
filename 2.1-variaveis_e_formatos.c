/*
    %d imprime inteiros no formato decimal
    %i equivalente a %d
    %f imprime um número de ponto flutuante no fortmato padrão
    %e imprime um número de ponto flutuante na notação científica
    %c imprime um único caractere
    %s imprime uma cadeia (string) de caracteres.
    \n para pular linha
*/

#include <stdio.h>

int main(){
    int idade;
    float altura;
    char nome[20];

    printf ("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    
    printf("A idade é: %d \n", idade);
    printf("A sua altura é: %f", altura);


}