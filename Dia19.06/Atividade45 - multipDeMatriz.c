//Multiplique matrizes lidas de 4x4 (soma dos produtos dos elementos correspondentes da i-ésima linha de A pelos elementos da j-ésima coluna B)

#include <stdio.h>

int main(void) {
  
  int linha, col, cont, matrizA[4][4], matrizB[4][4], matrizC[4][4];

  //Leitura da matriz A
  for(linha=0; linha<4; linha++ ){
    for (col=0; col<4; col++){
      printf("\nElemento [%d] [%d] da matriz A: ", linha, col);
      scanf("%d", &matrizA[linha][col]);
    }
  }
                  
  //Leitura da matriz B
  printf("\n\n");
  for (linha=0; linha<4 ;linha++ ) {
    for (int col=0; col<4 ;col++) {
      printf("\nElemento [%d] [%d] da matriz B: ", linha, col);
      scanf("%d", &matrizB[linha][col]);
    }
  }

  for (linha = 0; linha < 4 ;linha++) {
    for (col = 0; col< 4; col++) {
      matrizC[linha][col] = 0; // Inicializa cada elemento da matriz C como 0
      for (cont = 0; cont < 4 ;cont++) {
        matrizC[linha][col] += matrizA[linha][cont] * matrizB[cont][col]; // Calcula a soma dos produtos
      }
    }
  }

  //impressao da matriz
  printf("\n");
  for (linha = 0; linha < 4; linha++) {
    printf("\n |");
    for (col= 0; col< 4 ;col++) {
      printf("\t %d  ", matrizC[linha][col]);
    }
    printf("\t\t\t\n");
  }

  return 0;
}