//Escrever um programa para informar a localização de uma determinada poltrona num ônibus genérico, com cadeiras dispostas em 2 fileiras de 2 poltronas cada. Sendo: direita o lado da porta, e a esquerda o lado do motorista. Entrada: o número do assento. Saída: Fileira, localização (esquerda ou direita, janela ou corredor). Número máximo de poltronas: 52. Valide a entrada

#include <stdio.h>

int main(void) {
  int assento, fileira;
  printf("Ola! Informe o numero do seu assento: ");
  scanf("%d", &assento);

  while (assento<1 || assento>52) {
    printf("\nVoce informou um valor invalido! Digite novamente: ");
    scanf("%d", &assento);
  }

  //Definindo o numero da fileira
  if (assento%4==0) {
    fileira=(assento/4);
  }
  else {
    fileira=(assento/4)+1;
  }

  //Definindo a posiçao da poltrona
  if (assento%4==1) {
    printf("\nO seu assento fica na fileira %d, na esquerda, do lado da janela", fileira);
  }

  else if (assento%4==2) {
    printf("\nO seu assento fica na fileira %d, na esquerda, do lado do corredor", fileira);
  } 
    
  else if (assento%4==3) {
    printf("\nO seu assento fica na fileira %d, na direita, do lado do corredor", fileira);
  }
    
  else if (assento%4==0) {
    printf("\nO seu assento fica na fileira %d, na direita, do lado da janela", fileira);
  }
  
  return 0;
}