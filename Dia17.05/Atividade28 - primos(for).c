//Descobrir se um número é primo. Ao descobrir um divisor além de 1 e ele mesmo, sair do laço. Usar os 3 laços

#include <stdio.h>

int main(void) {

  //Utilizando o for
  
  int num, div, cont1=0, cont2=0;
  
  printf("\nOla! Digite um valor inteiro positivo: ");
  scanf("%d", &num);

  while (num<0) {
    printf("\nEsse valor eh invalido! Digite novamente: ");
    scanf("%d", &num);
  }

  printf("\nDivisores desse numero: ");
  for (div=1; div<num+1 ; div=div+1) {
    if (num%div==0) {
      if (div==1 || div==num) {
        cont1=cont1+1;
      }
      printf("%d ", div);
      cont2=cont2+1;
    }
  }
  
  if (cont1==cont2) {
    printf("\n\nEsse numero eh primo");
  }
  else {
    printf("\n\nEsse numero nao eh primo");
  }
  
  return 0;
}