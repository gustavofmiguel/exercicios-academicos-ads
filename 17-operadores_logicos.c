#include <stdio.h>

int main() {
int a = 10;
int b = -10;
int c = 0;

  if (a > 0 && b > 0) {
    printf("Ambos os números são positivos\n");

  } else {
    printf("Pelo menos um dos número é negativo"); 

  }

  if (a > 0 || b > 0) {
    printf("Pelo menos um é positivo.\n");
  }
 
  if (!a)
  {
    printf("a é zero.\n");
  }else{
    printf("A variavel é diferente de Zero");

  }

   if (a > 0 && b < 0 || c == 0) {
        printf("A condição é verdadeira\n");
   }else {
        printf("A condição é falsa\n");

  }

  return 0;
}