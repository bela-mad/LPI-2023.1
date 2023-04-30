/* 2.Criar um programa que mostre a raiz
quadrada de um número inteiro dado */

#include <stdio.h>
#include <math.h>

int main(void) {
  int num, raiz_quad;
  printf("Ola! Digite um numero inteiro:\n");
  scanf("%d", &num);
  raiz_quad = sqrt(num);
  printf("--------------------------------------------\n");
  printf("Raiz quadrado do numero: %d", raiz_quad);
  return 0;
}