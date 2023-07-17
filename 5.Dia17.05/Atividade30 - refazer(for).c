//Refazer o código do exemplo de validação de entrada abaixo, agora utilizando as estruturas de repetição DO-WHILE e FOR

#include <stdio.h>

int main(void) {

  //Utilizando o for
  
  float num;
  
  printf("Informe um numero positivo:");
  scanf("%f", &num);
  
  for (num=num ; num <= 0 ; scanf("%f", &num)) {
    printf("\n ATENCAO! Informe um numero maior que zero:");
  }
  printf("Quadrado: %.2f \n", num * num);
  
}