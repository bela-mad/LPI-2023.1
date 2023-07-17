//Escreva um programa que leia uma matriz 3x3, imprima-a em forma de tabela, calcule seu traço, maior valor, menor valor e média. Lembrando que o traço de uma matriz é a soma dos elementos da diagonal principal

#include <stdio.h>

int main(void) {

  int linha, col, soma=0, traco=0, maior, menor, matriz[3][3];
  
  printf("\nOla! Digite os elementos para uma matriz 3 x 3: \n");

  //leitura da matriz
  for (linha=0; linha<3 ; linha++) {
    for (col=0; col<3 ; col++) {
      printf("\nElemento [%d] [%d]: ", linha, col);
      scanf("%d", &matriz[linha][col]);
    }
  }

  //impressao em forma de tabela
  printf("\n");
  for (linha=0; linha<3 ; linha++) {
    printf("|");
    for (col=0; col<3 ; col++) {
      printf(" %d ", matriz[linha][col]);
    }
    printf("|\n");
  }

  //definicao dos conceitos
  maior=menor=matriz[0][0];
  
  for (linha=0; linha<3 ; linha++) {
    for (col=0; col<3 ; col++) {
      //valor maior ou menor
      if (matriz[linha][col]>=maior) {
        maior=matriz[linha][col];
      }
      else if (matriz[linha][col]<menor) {
        menor=matriz[linha][col];
      }

      //traco da matriz
      if (linha==col) {
        traco=traco+matriz[linha][col];
      }

      //soma dos elementos para a media
      soma=soma+matriz[linha][col];
    }
  }

  //impressao dos resultados
  printf("\nO maior elemento eh %d", maior);
  printf("\nO menor elemento eh %d", menor);
  printf("\nA media dos elementos eh %.1f", soma/9.0);
  printf("\nO traco da matriz eh %d", traco);
  
  return 0;
}