#include <stdio.h>

int main(){
    int opcao;
    float nota1, nota2, media;

    printf("--- Menu de Gerenciamento de Estudantes ---\n");
    printf("1 - Calcular Média\n");
    printf("2 - Determinar Status\n");
    printf("3 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Calcular média \n");
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        // Testar a condição se a nota é >= 0 ou <=10
        if ((nota1 >= 0 && nota1 <=10) && (nota2 >= 0 && nota2 <=10))
        {
            media = (nota1 + nota2) / 2;
            printf("A média é: %.2f \n", media);
        } else {
            printf("Entrada com valores inválidos");
        } 
        break;
    case 2:
        printf("Determinar status \n");
        printf("Entrar com a média: ");
        scanf("%f", &media);
        // media >= 5 ? printf("Aprovado(a)") : printf("Reprovado(a)");
        if (media >= 6)
        {
            printf("Aprovado(a)");
        } else if (media >= 4)
        {
            printf("Recuperação");
        } else {
            printf("Reprovado(a)");
        }
         break;
    case 3:
        printf("Sair do programa");
    
    default:
        printf("Opção invalida");
        break;
    }
    
    return 0;
}