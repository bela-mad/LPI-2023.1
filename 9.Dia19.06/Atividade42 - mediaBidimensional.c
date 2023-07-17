// Faça um programa em C que leia o nome dos alunos de uma turma de 5 alunos, as
// suas 3 notas na ordem da execução das provas, e vá informando a média parcial
// de cada aluno, na medida que cada nota é lida. No final imprima o número, o
// nomes, as notas e média de cada aluno na forma de tabela com rótulos

#include <stdio.h>

int main(void) {

  char nome[5][45];
  float nota[5][3], media[5];
  int tamanho, ajuste;

  for (int count = 0; count < 5; count++) {
    printf("\nQual o nome do aluno %d: ", count + 1);
    scanf("%44[^\n]%*c", nome[count]);
  }

  for (int count = 0; count < 3; count++) {
    printf("\n\n");
    for (int aux = 0; aux < 5; aux++) {
      printf("\n\nDigite a %dº nota de %s: ", count + 1, nome[aux]);
      scanf("%f%*c", &nota[aux][count]);

      while (nota[aux][count] > 10 || nota[aux][count] < 0) {
        printf("\nATENCAO: Digite a %dº nota (0-10) de %s : ", count + 1,
               nome[aux]);
        scanf("%f%*c", &nota[aux][count]);
      }

      media[aux] += (nota[aux][count] / 3);
      printf("\nMédia parcial: %.1f", media[aux]);
    }
  }

  // montagem da tabela

  printf(
      "\n\n NUM |       NOME DO ALUNO      |  NOTA 1  |  NOTA 2  |  NOTA 3  | MÉDIA | "
      "\n==========================================================================");

  for (int count = 0; count < 5; count++) {
    tamanho = 0;
    while (nome[count][tamanho] != '\0')
      tamanho++;
    ajuste = (26 - tamanho) / 2;

    printf("\n  %d  |", count + 1);

    for (int count = 0; count < ajuste; count++) {
      printf(" ");
    }
    printf("%s", nome[count]);
    for (int count = 0; count < ajuste; count++)
      printf(" ");

    printf("|\t%.1f    |\t%.1f    |\t%.1f   |\t%.1f  ", nota[count][0],
           nota[count][1], nota[count][2], media[count]);
  }

  return 0;
}