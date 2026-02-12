#include <stdio.h>

int main(){
    int numero1 = 8;
    int numero2 = 5;
    if (numero1 > numero2)
    {
        printf("numero1 é maior que numero2\n");
    }

    int idade = 20;
    if (idade >= 18) {
        printf("Você é maior de idade\n");
    }

    float temperatura = 32.0;
    if (temperatura > 30.0) {
        printf("Está calor\n");
    }
    
    int nota = 75;
    if (nota >= 60) {
        printf("Você passou!\n");
    }
    int numero = 4;

    if (numero % 2 == 0) {
        printf("O número é par\n");
    }

    return 0;
}