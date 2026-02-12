/*
    Aprendendo a usar estrutura de decisão aninhadas
    para verificar multiplas condições de maneira hierarquica

    
*/

#include <stdio.h>

int main(){
    int numero;

    printf("Digite a sua número: ");
    scanf("%d", &numero);

    if (numero > 0){
        if (numero % 2 == 0)
        {
            printf("Número Par");
        }else {
            printf("Número Impar");
        }
        
    } else if(numero == 0) {
        printf("Número é zero");
    } else {
        printf("Número é negativo");
    }


    return 0;
}