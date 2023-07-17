//Encontrar o maior valor, menor valor e média dos valores de um vetor de 20 elementos

#include <stdio.h>

int main(void) {
  int num[20], cont, maior, menor, soma=0;
  float media=0;
  
  printf("\n\tOla!\n");
  
  for (cont=0;cont<20;cont++) {
    printf("\tDigite o numero %d: ", cont+1);
    scanf("%d", &num[cont]);
  }
  
  //ordem informada
  printf("\n\tNumeros informados: ");
  for (cont=0;cont<20;cont++) {
    printf("%d ", num[cont]);
    
    soma=soma+num[cont];
    
    if (cont==0) {
      maior=menor=num[cont];
    }
  
    if(num[cont]>maior) {
      maior=num[cont];
    }
    else if (num[cont]<menor) {
      menor=num[cont];
    }
  }

  media=soma/20.0;

  printf("\n\tMaior numero: %d", maior);
  printf("\n\tMenor numero: %d", menor);
  printf("\n\tMedia dos valores: %.2f", media);
  
  return 0;
}