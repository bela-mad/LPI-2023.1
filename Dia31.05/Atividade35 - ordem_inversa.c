//Um programa que lê dez números e os imprime em ordem inversa. Para isso, é necessário armazenar os 10 números para poder imprimi-los de trás para frente. Seria possível utilizar 10 variáveis distintas, mas a solução com vetor é bem mais elegante. Mais ainda, se fossem 10.000 números, e não 10, ficaria impraticável usar variáveis distintas

#include <stdio.h>

int main(void) {
  int num[10], cont;
  
  printf("\n\tOla!\n");

  //leitura dos numeros
  for (cont=0;cont<10;cont++) {
    printf("\tDigite o numero %d: ", cont+1);
    scanf("%d", &num[cont]);
  }
  //ordem informada
  printf("\n\t|Ordem informada: ");
  for (cont=0;cont<10;cont++) {
    printf("%d ", num[cont]);
  }

  //ordem inversa
  printf("\n\t|Ordem inversa: ");
  for (cont=9;cont>=0;cont--) {
    printf("%d ", num[cont]);
  }
  
  return 0;
}