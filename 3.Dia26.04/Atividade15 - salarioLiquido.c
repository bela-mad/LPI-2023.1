/* Calcule o salário líquido de um profissional, informando valor da hora trabalhada, números de horas e o % de desconto de INSS */

#include <stdio.h>

int main(void) {
  float horaTrab, numHoras, descontoINSS, salarioLiq;
  printf("Ola! Informe quanto voce recebe por hora trabalhada:\n");
  scanf("%f", &horaTrab);
  printf("Agora, diga durante quantas horas voce trabalhou:\n");
  scanf("%f", &numHoras);
printf("E por ultimo, informe o desconto que voce recebe do INSS:\n");
  scanf("%f", &descontoINSS);
  salarioLiq = (horaTrab*numHoras)-((horaTrab*numHoras)*(descontoINSS/100));
  printf("\n//O seu salario liquido eh de R$%.2f", salarioLiq);

  return 0;
}