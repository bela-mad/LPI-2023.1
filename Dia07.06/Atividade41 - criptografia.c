//Implemente o seu próprio algoritmo de criptografia!

#include <stdio.h>

int main(void) {

  int aux, tam_string=0, chave=3;
  char mensagem[51];

  printf("\n\tOla! Digite a mensagem criptografada para ser convertida: ");
  scanf("%50[^\n]s",mensagem);

  //tamanho da string
  for (aux=0; mensagem[aux]!='\0' ;aux++) {
    tam_string++;
  }
  
  //criptografar a mensagem
  for (aux=0; aux<=tam_string ;aux++) {
    mensagem[aux]=mensagem[aux]+chave;
  }

  printf("\n\tMensagem criptografada: \"%s\"", mensagem);

  //descriptografar a mensagem
  for (aux=0; aux<=tam_string ;aux++) {
    mensagem[aux]=mensagem[aux]-chave;
  }
  
  printf("\n\tMensagem descriptografada: \"%s\"", mensagem);
  
  return 0;
}