/* Faça um programa que peça para o usuário digitar 2 caracteres e leia-os, depois coloque o primeiro valor em uma variável chamada de A e o segundo valor em outra variável chamada de B. Em seguida, seu programa deverá trocar o conteúdo destas variáveis e imprimir na tela o que cada variável contém */

#include <stdio.h>

int main(void) {
  char a,b,c;
  printf("Ola! Digite dois caracteres:\n");
  scanf("%c %c", &a, &b);
  printf("\n// Valores anteriores: a = %c e b = %c", a, b);
  c=a;
  a=b;
  b=c;
  printf("\n// Valores atuais: a = %c e b = %c", a, b);

  return 0;
}