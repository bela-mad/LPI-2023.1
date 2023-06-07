//Implemente o seu próprio algoritmo de criptografia!

#include <stdio.h>

int main(void) {

  int aux, tam_string=0;
  char mensagem[20];

  printf("Ola! Digite a mensagem criptografada para ser convertida: ");
  scanf("%s", mensagem);

  //tamanho da string
  for (aux=0; mensagem[aux]!='\0' ;aux++) {
    tam_string++;
  }

  //descriptografar a mensagem
  for (aux=0; aux<=tam_string ;aux++) {
    mensagem[aux]=mensagem[aux]+3;
  }

  printf("A mensagem descriptografada eh \"%s\"", mensagem);
  
  return 0;
}