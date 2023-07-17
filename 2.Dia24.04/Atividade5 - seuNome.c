/*Escreva seu nome usando a função printf com %c:

1. Letra por letra
2. Com números usando a tabela ASCII
*/

#include <stdio.h>

int main(void) {
  printf("1. Nome escrito letra por letra:\n");
  printf("%c%c%c%c%c%c%c\n", 'I', 's', 'a', 'b', 'e', 'l', 'a');
  printf("-----------------------------------------------------------\n");
  printf("2. Nome escrito utilizando a tabela ASCII:\n");
  printf("%c%c%c%c%c%c%c\n", 73, 115, 97, 98, 101, 108, 97);
  return 0;
}