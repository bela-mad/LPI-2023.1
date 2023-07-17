//Leia uma matriz 3x4 e imprima-a ao contrário, começando pelo elemento 3x4 e terminando no 0x0, depois sua transposta (troca de linhas por colunas)

#include <stdio.h>

int main(void) {

  int matrizOrig[3][4], novaMatriz[3][4], transposta[4][3], linha, col;
  
  printf("Ola! Digite os elementos de uma matriz 3 x 4: \n");
  
  //leitura da matriz
  for (linha=0; linha<3 ; linha++) {
    for (col=0; col<4 ; col++) {
      printf("\nElemento [%d] [%d]: ", linha, col);
      scanf("%d", &matrizOrig[linha][col]);
    }
  }

  //impressao em forma de tabela
  printf("\nMatriz original:\n");
  for (linha=0; linha<3 ; linha++) {
    printf("|");
    for (col=0; col<4 ; col++) {
      printf(" %d ", matrizOrig[linha][col]);
    }
    printf("|\n");
  }

  //impressao da matriz ao contrario
  printf("\nMatriz ao contrario:\n");
  for (linha=2; linha>=0 ; linha--) {
    printf("|");
    for (col=3; col>=0 ; col--) {
      printf(" %d ", matrizOrig[linha][col]);
    }
    printf("|\n");
  }

  //impressao da matriz transposta
  for(int linha=0; linha<3; linha++){
    for(int col=0; col<4; col++){
      transposta[col][linha]=matrizOrig[linha][col];
    }
  }

  printf("\nMatriz transposta:\n");
  for (linha=0; linha<4 ; linha++) {
    printf("|");
    for (col=0; col<3 ; col++) {
      printf(" %d ", transposta[linha][col]);
    }
    printf("|\n");
  }
  
  return 0;
}