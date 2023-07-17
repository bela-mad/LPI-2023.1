/* Ler um float do teclado e imprimir em separado a sua parte inteira da parte decimal.
– Obs. Não usar funções matemáticas, só manipulações algébricas */

#include <stdio.h>

int main(void) {
  float num;
  printf("Ola! Digite um número com casas decimais:\n");
  scanf("%f", &num);
  printf("\n//Sua parte inteira: %d", (int)num);
  printf("\n//Sua parte fracionária: %f", num-(int)num);

  return 0;
}