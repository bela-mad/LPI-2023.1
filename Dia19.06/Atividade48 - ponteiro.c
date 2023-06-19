//Ler 2 vetores de 10 os números cada. Gerar um terceiro vetor com a soma dos 2 dos elementos correspondentes dos vetores anteriores. Faça utilizando ponteiros para matrizes

#include <stdio.h>
#include <stdlib.h>

int main(void){
  
  int aux, v1[10], v2[10], v3[10];

  //leitura dos elementos do vetor 1
  printf("\nOla! Digite os elementos do vetor 1: \n\n");

  for(aux=0; aux<10 ;aux++){
    printf("Elemento [%d]: ", aux+1);
    scanf("%d", &v1[aux]);
  }
  printf("\n");

  //leitura dos elementos do vetor 2
  printf("\nAgora, digite os elementos do vetor 2: \n\n");
  for(int aux=0; aux<10 ;aux++){
    printf("Elemento [%d]: ", aux+1);
    scanf("%d", &v2[aux]);
  }

  //definicao e impressao do vetor 3
  int *p1=v1, *p2=v2, *p3=v3;

  for(aux=0; aux<10 ;aux++) {
    *(p3+aux)=*(p1+aux)+*(p2+aux);
  }
  printf("\n");

  printf("Vetor 3: [");
  for(aux=0; aux<10 ; aux++) {
    printf("\t%d", p3[aux]);
  }
  printf("]");
  
  return 0;
}