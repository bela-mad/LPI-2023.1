/* Em uma papelaria, até 100 folhas, a cópia custa R$0,25, e acima de 100 folhas custa R$0,20. Dado o total de cópias, informe o total a ser pago. Com todos os 3 condicionais */

#include <stdio.h>

int main(void) {

  /* Utilizando o if */

  int folhas;
  float total;
  printf("\nOla, seja bem-vindx a nossa papelaria!\n\nDigite a quantidade de copias feitas: ");
  scanf("%d", &folhas);
  if (folhas<=100) {
    total=0.25*folhas;
  }
  else {
    total=0.2*folhas;
  }
  printf("\n------------------------------------------------");
  printf("\nO valor total a ser pago eh de R$%.2f", total);
  return 0;
}