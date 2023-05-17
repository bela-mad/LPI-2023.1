//Refazer o código do exemplo de validação de entrada abaixo, agora utilizando as estruturas de repetição DO-WHILE e FOR

#include <stdio.h>

int main(void) {

  //Utilizando o do-while
  
  float num;
  
  printf("Informe um numero positivo:");

  do {
    scanf("%f", &num);
    if (num <= 0) {
      printf("\n ATENCAO! Informe um numero maior que zero:");
    }
  } while (num <= 0);
  
  printf("Quadrado: %.2f \n", num * num);
  
}