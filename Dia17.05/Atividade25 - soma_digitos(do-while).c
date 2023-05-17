//Dado um número inteiro positivo, calcular a soma de seus dígitos. Por exemplo, para o número 1234, a saída deve ser 1+2+3+4 = 10. Dica: usar operador resto: resto=Divisor/dividendo; resto = divisor % dividendo. Usar os 3 laços...

#include <stdio.h>

int main(void) {

  //Utilizando o do-while
  
  int num,soma=0,resto=0;

  printf("Informe um numero inteiro positivo: ");
  scanf("%d", &num);

  while (num<0) {
    printf("\nEsse valor eh invalido! Digite novamente: ");
    scanf("%d", &num);
  }

  do {
    resto=num%10;
    soma=soma+resto;
    num=num/10;
  } while (num>0);

  printf("\nA soma dos algarismos desse numero eh %d", soma);
  
  return 0;
}