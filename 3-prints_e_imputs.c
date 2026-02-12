#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[20];
    
    printf ("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    
    printf("Digite sua matricula: ");
    scanf("%d", &matricula);
    
    printf("A idade: %d \n", idade);
    printf("A sua altura: %f \n", altura);
    printf("A sua matricula: %d \n", matricula);

    return 0;
}