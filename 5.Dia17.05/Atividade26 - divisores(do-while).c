//Programa para imprimir todos os divisores de um número. Para um dado número n, o programa tem que testar todos os números de 1 até n.

#include <stdio.h>

int main(void) {

  //Utilizando o do-while
  
  int n, div=1;
  
  printf("Ola! Digite um numero inteiro: ");
  scanf("%d", &n);

  printf("\nDivisores desse numero: ");
  do {
    if (n%div==0) {
      printf("%d ", div);
    }
    div=div+1;
  } while (div<n+1);
  
  return 0;
}