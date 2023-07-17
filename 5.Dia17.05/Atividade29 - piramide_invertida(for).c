//Faça um programa que apresenta a seguinte saída, perguntando ao usuário o número máximo (no exemplo, 9). Este número deve ser sempre ímpar.
//1 2 3 4 5 6 7 8 9
//  2 3 4 5 6 7 8
//    3 4 5 6 7
//      4 5 6
//        5

#include <stdio.h>

int main(void) {

  //Utilizando o for
  
  int num, cont_linha, cont_coluna, espaco;
  
  printf("\nOla! Digite um valor inteiro impar: ");
  scanf("%d", &num);

  while (num<0 && num%2==0) {
    printf("\nEsse valor eh invalido! Digite novamente: ");
    scanf("%d", &num);
  }

  for (cont_linha = 0; cont_linha <= (num/2); cont_linha=cont_linha+1){
    for(cont_coluna = cont_linha+1; cont_coluna<=num - cont_linha; cont_coluna=cont_coluna+1){
      printf("%d ", cont_coluna);
    }
    printf("\n");
    for(espaco = 0; espaco < cont_linha+1; espaco=espaco+1) {
      printf("  ");
    }
  }
  
  return 0;
}