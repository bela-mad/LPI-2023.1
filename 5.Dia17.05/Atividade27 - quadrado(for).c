//Dado um número natural (n) desenhe um quadrado n x n (for aninhado).

#include <stdio.h>

int main(void) {

  //Utilizando o for

  int num, cont_linha, cont_coluna;
  
  printf("Ola! Digite um numero inteiro positivo: ");
  scanf("%d", &num);

  while (num<0) {
    printf("\nEsse valor eh invalido! Digite novamente: ");
    scanf("%d", &num);
  }
  
  printf("\n");
  for (cont_linha=1; cont_linha<num+1 ; cont_linha=cont_linha+1) {
    printf("\t");
    for (cont_coluna=1; cont_coluna<num+1 ; cont_coluna=cont_coluna+1) {
      printf("()");
    }
    printf("\n");
  }
  
  return 0;
}