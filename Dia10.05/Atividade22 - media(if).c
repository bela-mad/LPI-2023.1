/* Receber 4 notas de um aluno, calcular média e informar situação: passou se 7 ou mais, abaixo de 3 está reprovado sem direito a final com todos os 3 condicionais */

#include <stdio.h>

int main(void) {

  /* Utilizando o if */

  float nota1, nota2, nota3, nota4, media;
  printf("\nOla!\nVamos calcular a media e ver a situacao do aluno...\n");
  printf("\nDigite a nota 1: ");
  scanf("%f", &nota1);
  printf("\nDigite a nota 2: ");
  scanf("%f", &nota2);
  printf("\nDigite a nota 3: ");
  scanf("%f", &nota3);
  printf("\nDigite a nota 4: ");
  scanf("%f", &nota4);

  media = (nota1+nota2+nota3+nota4)*0.25;

  printf("\n------------------------------------------------");
  printf("\nSua media final eh %.2f\n", media);
  
  if (media>=7) {
    printf("Voce passou! Parabens :)");
  }
  else if (media<7 && media>=3) {
    printf("Voce vai precisar fazer final :/");
  }
  else {
    printf("Voce foi reprovado sem direito a final :(");
  }
  
  return 0;
}