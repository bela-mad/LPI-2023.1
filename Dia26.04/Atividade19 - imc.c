/* O índice de massa corpórea (IMC) de uma pessoa é igual ao seu peso (em quilogramas) dividido pelo quadradro de sua altura (em metros). Dados o peso e a altura de uma pessoa, informe o valor do seu IMC */

#include <stdio.h>

int main(void) {
  float peso, altura;
  printf("Ola! Digite o seu peso (em kg):\n");
  scanf("%f", &peso);
  printf("Agora, digite a sua altura (em metros):\n");
  scanf("%f", &altura);
  printf("\n// Seu IMC eh de %.2f", peso/(altura*altura));
  return 0;
}