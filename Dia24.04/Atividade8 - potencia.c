/* 1.Criar um programa que mostre o quadrado de
um número inteiro dado */

#include <stdio.h>

int main(void) {
  int num, num_quad;
  printf("Ola! Digite um número inteiro:\n");
  scanf("%d", &num);
  num_quad = num * num;
  printf("-----------------------------------------\n");
  printf("Numero elevado ao quadrado: %d", num_quad);
  return 0;
}