/* Ler as 4 notas de um aluno e imprimir sua média final com 1 casa decimal */

#include <stdio.h>

int main(void) {
  float nota1, nota2, nota3,nota4, media;
  printf("Ola! Informe a nota 1:\n");
  scanf("%f", &nota1);
  printf("Ola! Informe a nota 2:\n");
  scanf("%f", &nota2);
  printf("Ola! Informe a nota 3:\n");
  scanf("%f", &nota3);
  printf("Ola! Informe a nota 4:\n");
  scanf("%f", &nota4);
  media = (nota1+nota2+nota3+nota4)/4;
  printf("\n// Sua media eh de %.1f", media);

  return 0;
}