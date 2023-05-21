//No programa de perguntas para TV “Quer ganhar uma bolada?”, cada pergunta respondida corretamente vale o dobro da anterior. Sendo 100 reais o valor da primeira pergunta, faça um programa que receba o número de perguntas certas e informe o valor ganho pelo concorrente.

#include <stdio.h>

int main (void) {
  int num_perg;
  float premio=0, valor_anterior=0, valor_perg=100;

  printf("\nOla! Quantas perguntas voce acertou? ");
  scanf("%d", &num_perg);

  while (num_perg<0) {
    printf("\nO valor nao eh valido! Digite novamente: ");
    scanf("%d", &num_perg);
  }
  
  if (num_perg==0 || num_perg==1) {
    premio=100*num_perg;
  }
    
  else {
    premio=100;
    for(int cont=1; cont<num_perg ; cont++) {
      valor_anterior=premio;
      valor_perg=valor_perg*2;
      premio=valor_perg+valor_anterior;
    }
  }
  
  printf("\nO valor do premio que voce vai receber eh de R$%.2f", premio);
  return 0;
}