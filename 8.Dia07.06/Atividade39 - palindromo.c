//Informar se a string lida do teclado contém um palíndromo ou não

#include <stdio.h>

int main(void) {
  
  char palavra[21], contrario[21];
  int aux, cont=0, i, tam_string=0;

  printf("Digite o que quiser com o limite de 20 caracteres: ");
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

  //comparar as strings
  for(aux=tam_string-1; aux>=0; aux--){
    if (contrario[aux] != palavra[aux]){
      printf("\nNao eh um palindromo");
      break;
    }
    else{
      tam_string--;
    }
  }
  if (tam_string==0) printf("\nEh um palindromo");
  
  return 0;

}