#include <stdio.h>

int main(){
    int idade = 16;
    char* resultado;

    resultado = idade >= 18 ?
    "Você é maior de idade \n" :
    "Você é menor de idade \n";
    printf("%s", resultado);


    int temperatura = 20;
    int result;

    result = temperatura >= 30 ? 
    printf("Está calor \n") :
    printf("Está frio \n");

    int num1 = 10, num2 = 20;
    int maior;

    num1 > num2 ? (maior = num1) : (maior = num2);
    printf("O número maior é: %d \n", maior);
 
    return 0;
}