#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
  int esolhaJogador, esolhaComputador;
  srand(time(0));

  printf(" --- Jogo do Jokenpo --- \n");
  printf("Escolha uma opção: \n");
  printf("1 - Pedra \n");
  printf("2 - Papel \n");
  printf("3 - Tesoura \n");
  printf("Esolha sua jogada: \n");
  scanf("%d", &esolhaJogador);

  esolhaComputador = (rand() % 3) + 1;

  switch (esolhaJogador)
  {
  case 1:
     printf("Jogador escolheu: Pedra \n");
    break;
  
  case 2:
     printf("Jogador escolheu: Papel \n");
    break;
  
  case 3:
     printf("Jogador escolheu: Tesoura \n");
    break;
  
  default:
      printf("Opção inválida! \n");
    break;
  }

  switch (esolhaComputador)
  {
  case 1:
     printf("Computador escolheu: Pedra \n");
    break;
  
  case 2:
     printf("Computador escolheu: Papel \n");
    break;
  
  case 3:
     printf("Computador escolheu: Tesoura \n");
    break;
  
  default:
      printf("Opção inválida! \n");
    break;
  }
  if(esolhaComputador == esolhaJogador){
    printf("Empate! \n");
  } else if((esolhaJogador == 1 && esolhaComputador == 3) || 
            (esolhaJogador == 2 && esolhaComputador == 1) || 
            (esolhaJogador == 3 && esolhaComputador == 2)){
    printf("Jogador Venceu! \n");
  } else {
    printf("Computador Venceu! \n");
  }

   return 0;
  }

    