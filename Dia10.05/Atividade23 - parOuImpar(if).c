/* Receber um número do teclado e informar se ele é par ou impar com todos os 3 condicionais
– (Num mod 2) em portugol é equivalente em C a (num % 2) */

#include <stdio.h>

int main(void) {

  /* Utilizando o if */

  int num;
  printf("\nOla!\nDigite um numero inteiro: ");
  scanf("%d", &num);

  printf("\n------------------------------------------------\n");
  
  if ((num % 2)==0) {
    printf("O numero informado eh par");
  }
  else {
    printf("O numero informado eh impar");
  }
  
  return 0;
}