/* Faça um programa que receba um valor que foi depositado e exiba o valor com
 * rendimento após um mês. Considere fixo o juro da poupança em 0,70% a. m. */

#include <stdio.h>

int main(void) {
  float valorDepositado, valorComRend;
  printf("Ola! Informe o valor que voce deseja depositar:\n");
  scanf("%f", &valorDepositado);
  valorComRend = valorDepositado * 1.007;
  printf("\n// Apos um mes, o valor sera de R$%.2f", valorComRend);
  return 0;
}