#include <time.h>

int main(){
    int resultado, numeroJogador, numeroComputador;
    char tipoComparacao;

    // Gerar número aleatorio
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // Número entre 1 e 100

    printf("--- Bem vindo ao jogo - Maior, Menor ou Igual --- \n");
    printf("Você deve escolher  um número e o tipo de comparação \n");
    printf("M - Maior \n");
    printf("N - Menor \n");
    printf("I - Igual\n");

    printf("Esolha a comparação: ");
    scanf("%c", &tipoComparacao);

    printf("Digire um número de 1 a 100: ");
    scanf("%d", &numeroJogador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opçõa: Menor \n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf("Você escolheu a opçõa: Menor \n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf("Você escolheu a opçõa: Igual \n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;
    default:
        printf("Opção de jogo inválida \n");
        break;
    }

    printf("O número do computador é: %d e o do Jogador é: %d \n", numeroComputador, numeroJogador);

    if (resultado == 1)
    {
       printf("Parabéns! Você Venceu \n");
    } else {
        printf("Infelizmente Você Perdeu \n");
    }

    return 0;
}