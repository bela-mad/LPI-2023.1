/* Escreva um programa em C que produza a seguinte
saída na tela (nomes alinhados a direita e vírgula
embaixo de vírgula), utilizando só formatação:
ALUNO(A) NOTA
============= =====
ALECSANDER 9,0
ALEXSSANDRO 9,93
BRENO 10,0
EMYLE 8,5
VALENTINA 8,0
MICHAEL 8,45
RYAN 9,99 */

#include <stdio.h>

int main(void) {
  printf("ALUNO(A)");
  printf("%12s\n", "NOTA");
  printf("=============");
  printf("%8s\n", "=====");
  printf("%13s", "ALECSANDER");
  printf("%7.1f\n", 9.0);
  printf("%13s","ALEXSSANDRO");
  printf("%8.2f\n", 9.93);
  printf("%13s","BRENO");
  printf("%7.1f\n", 10.0);
  printf("%13s","EMYLE");
  printf("%7.1f\n", 8.5);
  printf("%13s","VALENTINA");
  printf("%7.1f\n", 8.0);
  printf("%13s","MICHAEL");
  printf("%8.2f\n", 8.45);
  printf("%13s","RYAN");
  printf("%8.2f\n", 9.99);
  return 0;
}