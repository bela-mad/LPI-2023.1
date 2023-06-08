//Conte o número de vogais de uma string dada

#include <stdio.h>

int main(void) {

  int cont, tam_string=0;
  char palavra[21];
  
  printf("\n\tOla! Digite uma palavra de ate 20 caracteres: ");
  scanf("%20[^\n]s",palavra);

  for(cont=0 ; palavra[cont]!='\0' ; cont++) {
    if (palavra[cont]=='a' || palavra[cont]=='A' || palavra[cont]=='e' || palavra[cont]=='E' || palavra[cont]=='i' || palavra[cont]=='I' || palavra[cont]=='o' || palavra[cont]=='O' || palavra[cont]=='u' || palavra[cont]=='U') {
      tam_string++;
    }
  }

  printf("\n\tA palavra possui %d vogais...", tam_string);
  
  return 0;
}