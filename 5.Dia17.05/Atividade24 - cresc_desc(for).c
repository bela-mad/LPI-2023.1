//Criar um programa que imprima na tela os números de 0 a N em ordem crescente e decrescente. Usar os 3 laços...

#include <stdio.h>

int main(void) {

  //Utilizando o for
  
  int n, aux_cres, aux_dec;
  
  printf("Ola! Digite um numero inteiro: ");
  scanf("%d", &n);

  printf("\nOrdem crescente: ");
  for (aux_cres=0 ; aux_cres<n+1 ; aux_cres=aux_cres+1) {
    printf("%d ", aux_cres);
  }
  
  printf("\nOrdem decrescente: ");
  for (aux_dec=n ; aux_dec>-1 ; aux_dec=aux_dec-1) {
    printf("%d ", aux_dec);
  }

  return 0;
}