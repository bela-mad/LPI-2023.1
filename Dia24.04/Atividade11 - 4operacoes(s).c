/* 4. Agora faça o mesmo sem utilizar variáveis
auxiliares */

#include <stdio.h>

int main(void) {
  int num1, num2;
  printf("Ola! Digite um numero inteiro:\n");
  scanf("%d", &num1);
  printf("Agora digite um outro numero inteiro:\n");
  scanf("%d", &num2);
  printf("--------------------------------------------\n");
  printf("|Soma dos numeros: %d\n", num1+num2);
  printf("|Subtracao dos numeros: %d\n", num1-num2);
  printf("|Divisao dos numeros: %d\n", num1/num2);
  printf("|Multiplicacao dos numeros: %d\n", num1*num2);
  return 0;
}