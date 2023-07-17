/* 3. Elaborar um programa que leia 2 números
inteiros do teclado e mostre sua soma,
subtração, divisão e multiplicação */

#include <stdio.h>

int main(void) {
  int num1, num2, soma, subt, div, multi;
  printf("Ola! Digite um numero inteiro:\n");
  scanf("%d", &num1);
  printf("Agora digite um outro numero inteiro:\n");
  scanf("%d", &num2);
  printf("--------------------------------------------\n");
  soma = num1+num2;
  printf("|Soma dos numeros: %d\n", soma);
  subt = num1-num2;
  printf("|Subtracao dos numeros: %d\n", subt);
  div = num1/num2;
  printf("|Divisao dos numeros: %d\n", div);
  multi = num1*num2;
  printf("|Multiplicacao dos numeros: %d\n", multi);
  return 0;
}