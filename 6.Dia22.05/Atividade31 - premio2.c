//No programa de perguntas para TV “Quer ganhar uma bolada?”, cada pergunta respondida corretamente vale o dobro da anterior. Sendo 100 reais o valor da primeira pergunta, faça um programa que receba o número de perguntas certas e informe o valor ganho pelo concorrente.
//Para ganhar ao menos um milhão, quantas perguntas certas o concorrente deve responder?

#include <stdio.h>

int main (void) {
  int num_perg=1, t, cont;
  float premio=100, valor_anterior=0, valor_perg=100;

  while (premio<1000000) {
    valor_anterior=premio;
    valor_perg=valor_perg*2;
    premio=valor_perg+valor_anterior;
    num_perg++;
  }

  printf("\nPara receber ao menos 1 milhão de reais, voce deve responder %d perguntas corretas...", num_perg);
  printf("\n\nO valor do premio de 14 perguntas corretas eh de R$%.2f", premio);
  return 0;
}