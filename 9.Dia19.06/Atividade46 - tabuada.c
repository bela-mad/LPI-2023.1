//Escreva um programa que imprima a tabuada de multiplicação em forma de tabela

#include <stdio.h>

int main(void) {

  int linha, col, matriz[10][10];
  
  printf("\nTabuada de 0 a 10:\n\n");

  for (col=0;col<10;col++) {
    printf("\t%d", col);
  }
  printf("\n");
  printf("  ----------------------------------------\n");
  
  for (linha=0;linha<10;linha++) {
    printf("\n%d|", linha);
    for (col=0;col<10;col++) {
      printf("\t%d", linha*col);
    }
    printf("\n");
  }
  
  return 0;
}