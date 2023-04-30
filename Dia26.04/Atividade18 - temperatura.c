/* Ler temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de conversão é: (F=(9*C+160)/5), sendo F a temperatura em Fahrenheit e C em Celsius */

#include <stdio.h>

int main(void) {
  float tempCelsius, tempFahr;
  printf("Ola! Digite a temperatura atual (em Celsius):\n");
  scanf("%f", &tempCelsius);
  tempFahr=(9*tempCelsius+160)/5;
  printf("\n// A temperatura correspondente em Fahrenheit eh de %.1f°F", tempFahr);
  return 0;
}