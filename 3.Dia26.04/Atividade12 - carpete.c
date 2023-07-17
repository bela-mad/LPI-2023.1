/* Dadas as medidas de uma sala em metros (comprimento e largura), bem como o preço do metro quadrado de carpete, informe o custo total para forrar o piso da sala */

#include <stdio.h>

int main(void) {
  float comp, larg, preco_m2, custoTotal;
  printf("Ola! Informe o valor do comprimento da sala (em metros):\n");
  scanf("%f", &comp);
  printf("Agora informe a largura da sala (em metros):\n");
  scanf("%f", &larg);
  printf("E por ultimo, qual é o valor do metro quadrado do carpete que voce deseja:\n");
  scanf("%f", &preco_m2);
  custoTotal = (comp*larg)*preco_m2;
  printf("\nO custo total para forrar o piso de sua sala é de R$%.2f", custoTotal);
  return 0;
}