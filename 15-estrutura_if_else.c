#include <stdio.h>

int main(){
    int numero = 10;

    if (numero % 2 == 0)
    {
        printf("O número é par\n");
    }else {
        printf("O número é ímpar\n");
    }
    
    float temperatura = 30.0;
    if (temperatura >=30.0)
    {
        printf("Está calor");
    }else{
        printf("Não está calor");
    }
    
      int nota = 65;

    if (nota >= 60) {
        printf("Você passou!\n");
    } else {
        printf("Você não passou.\n");
    }
    
    int idade = 16;

     if (idade >= 18) {
        printf("Você é maior de idade\n");
    } else {
        printf("Você é menor de idade\n");
  }
  return 0;
}
