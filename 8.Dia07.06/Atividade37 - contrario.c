//Ler uma string e imprimi-la ao contrário

#include <stdio.h>

int main(void) {
  
  int aux, cont=0, tam_string=0;
  char palavra[21], contrario[21];
  
  printf("Ola! Digite uma palavra de ate 20 caracteres: ");
  scanf("%20[^\n]s",palavra);

  //contar tamanho do string
  for (aux=0; palavra[aux]!='\0' ;aux++) {
    tam_string++;
  }
  
  //atribuir valores contrarios a uma nova string
  for (aux=tam_string-1; aux>=0 ;aux--) {
    contrario[cont]=palavra[aux];
    cont++;
  }
  
  printf("\nString digitada: %s", palavra);
  printf("\nString ao contrario: %s\n", contrario);
  
  return 0;
}