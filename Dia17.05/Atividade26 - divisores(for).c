//Programa para imprimir todos os divisores de um número. Para um dado número n, o programa tem que testar todos os números de 1 até n.

#include <stdio.h>

int main(void) {

  //Utilizando o for
  
  int n, div;
  
  printf("Ola! Digite um numero inteiro: ");
  scanf("%d", &n);

  printf("\nDivisores desse numero: ");
  for (div=1 ; div<n+1 ; div=div+1) {
    if (n%div==0) {
      printf("%d ", div);
    }
  }

  return 0;
}