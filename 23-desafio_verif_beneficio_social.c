
// A primeira condição idade do usuário está entre 18 e 65 anos.
// A segunda condição se a renda do usuário é menor que 3000.
// A terceira condição verifica se o número de dependentes é maior que 2.

#include <stdio.h>

int main(){
    int idade, dependente;
    float renda;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite a sua renda: ");
    scanf("%f", &renda);
    printf("Digite a sua renda: ");
    scanf("%d", &dependente);

    if (idade >= 18 && idade < 65){
        if (renda < 3000){
            if (dependente > 2)
            {
                printf ("Você atende todos os critérios para o benefício");
            } else {
                printf ("Você não atende ao critério Dependente");
            }        
        } else {
            printf("Você atende ao critério Renda");
        }
    } else {
        printf("Você não atende ao critério pela idade");
    }

    return 0;
}