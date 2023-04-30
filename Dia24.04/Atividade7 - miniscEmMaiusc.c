/* Ler uma letra minúscula do teclado e imprimi-la em
maiúsculo
– Obs: a distância na tabela ASCII entre uma letra
minúscula e seu equivalente maiúsculo é de -32 */

#include <stdio.h>

int main(void) {
  char letra;
  printf("Ola! Digite uma letra minuscula:\n");
  scanf("%c", &letra);
  printf("------------------------------------------\n");
  printf("Letra maiuscula: %c\n", letra-32);
  return 0;
}