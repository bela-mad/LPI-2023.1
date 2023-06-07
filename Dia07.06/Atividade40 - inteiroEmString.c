//Leia um número inteiro e converta-o para uma string, imprima-o na tela como string

#include <stdio.h>

int main(void) {
  
  int num, aux=0, cont, tam=0;
  
  printf("\n\tOla! Digite um valor inteiro: ");
  scanf("%d", &num);

  aux=num;

  while (num!=0) {
    num=num/10;
    tam++;
  }

  char numM[tam];
  
  for (cont=0; cont<tam ;cont++) {
    numM[cont]=aux%10+'0';
    aux=aux/10;
  }
  printf("\n\tValor em string: ");

  for (cont=tam-1; cont>=0 ; cont--) {
    printf("%c", numM[cont]);
  }
  
  return 0;
}