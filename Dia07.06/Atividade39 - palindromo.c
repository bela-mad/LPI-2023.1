//Informar se a string lida do teclado contém um palíndromo ou não

#include <stdio.h>

int main(void) {
  
  char palavra_original[20], palavra_invertida[20];
  int cont;

  printf("Digite o que quiser com o limite de 20 caracteres: ");
  scanf("%20[^\n]s",palavra_original);

  //Descobre o tamanho da string
  for(cont=0; cont<=20; cont++){
    palavra_original[cont];
    if (palavra_original[cont]=='\0'){
      break;
    }
  }
  
  //Inverte a string
  cont--;
  for (int aux=0, i=cont; i>=0; i--){
    palavra_invertida[aux]= palavra_original[i];
      aux++;
  }
  printf("\nA palavra invertida e: %s", palavra_invertida);

  //Compara as strings
  for(int aux=0, i=cont; i>=0; i--){
    if (palavra_invertida[aux] != palavra_original[aux]){
      printf("\nNao e um palindromo");
      break;
    }
    else{
      cont--;
    }
  }
  if (cont<0) printf("\nE um palindromo");
  
  return 0;

}