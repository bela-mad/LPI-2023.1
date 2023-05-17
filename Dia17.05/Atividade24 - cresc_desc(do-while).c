//Criar um programa que imprima na tela os números de 0 a N em ordem crescente e decrescente. Usar os 3 laços...

#include <stdio.h>

int main(void) {

  //Utilizando o do-while
  
  int n, aux_cres=0, aux_dec;
  
  printf("Ola! Digite um numero inteiro: ");
  scanf("%d", &n);

  aux_dec=n;

  printf("\nOrdem crescente: ");
  do {
    printf("%d ", aux_cres);
    aux_cres=aux_cres+1;
  } while (aux_cres<n+1);

  printf("\nOrdem decrescente: ");
  do {
    printf("%d ", aux_dec);
    aux_dec=aux_dec-1;
  } while (aux_dec>-1);

  return 0;
}