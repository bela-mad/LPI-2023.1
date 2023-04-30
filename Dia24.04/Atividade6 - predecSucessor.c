/* Ler uma letra do teclado e escrever sua
predecessora e sucessora. Desconsiderar a ou z */

#include <stdio.h>

int main(void) {
  char letra;
  printf("Ola! Digite uma letra:\n");
  scanf("%c", &letra);
  printf("------------------------------------\n");
  if (letra=='a' || letra=='A') {
    printf("Não se pode dizer o seu antecessor :(");
  }
  else if (letra=='z' || letra=='Z') {
    printf("Não se pode dizer o seu sucessor :(");
  }
  else {
    printf("Letra antecessora: %c\n", letra-1);
    printf("Letra sucessora: %c\n", letra+1);
  }
  return 0;
}