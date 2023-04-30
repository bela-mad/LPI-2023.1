/* Faça um programa que imprima uma letra C gigante,
usando a própria letra ‘C’ de 2 maneiras diferente:
tudo num printf único e com vários printfs 
CCCCC
C
C
CCCCC
*/

#include <stdio.h>

int main(void) {
  printf("- Imprimindo C com um printf:\n\n");
  printf("CCCCC \nC \nC \nCCCCC\n");
  printf("%c%c%c%c%c \n%c \n%c \n%c%c%c%c%c\n",'C','C','C','C','C','C','C','C','C','C','C','C');
  printf("\n*****************************************\n");
  printf("- Imprimindo com vários printfs:\n\n");
  printf("CCCCC\n");
  printf("C\n");
  printf("C\n");
  printf("CCCCC\n");
  printf("%c%c%c%c%c\n", 'C','C','C','C','C');
  printf("%c\n", 'C');
  printf("%c\n", 'C');
  printf("%c%c%c%c%c\n", 'C','C','C','C','C');
  
  return 0;
}