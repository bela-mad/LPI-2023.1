/* 1. Fazer um programa em C que lê o preço de um produto e inflaciona esse preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.
● OBS: não use o comando "if" ou o operador de condição "?" */

#include <stdio.h>

int main(){

  printf("1° desafio\n");
  printf("******************************************");

  float preco, teste1, teste2, valorFinal;
  
  printf("\n\nDigite o preco do produto:\n");
  scanf("%f", &preco);

  teste1 =(preco>=100)*preco*1.2;
  teste2 =(preco<100)*preco*1.1;
  valorFinal =teste1+teste2;

  printf("O valor inflacionado eh de R$%.2f\n", valorFinal);

  printf("\n---------------------------------------------------------\n");
  printf("\n2° desafio\n");
  printf("******************************************");

  /* 2. Dado um número de três algarismos (abc),construir outro número de quatro algarismos (abcd) de acordo com a seguinte regra: d=(a+b+c) mod 10. Exemplo: 123 vira 1236. */

  int num,a,b,c,d;
  
  printf("\n\nDigite um número com 3 algarismos:\n");
  scanf("%d", &num);

  a = num/100;
  b = (num%100)/10;
  c = (num%100)%10;
  d = (a+b+c)%10;
  
  printf("O numero abcd gerado eh %d%d%d%d\n", a,b,c,d);

/* ● 3. Um estacionamento cobra R$ 10,00 de taxa para cada 4 horas, e R$5,00 para cada 1 hora abaixo destas 4 horas. Fazer um algoritmo que dado a quantidade de horas inteiras de uso do estacionamento, calcular e escrever quanto o cliente tem de pagar
● OBS: não use o comando "if" ou o operador de condição "?"  */

  printf("\n---------------------------------------------------------\n");
  printf("\n3° desafio\n");
  printf("******************************************");

  int tempo;
  float testeX, testeY, valorTotal;
  
  printf("\n\nDigite o tempo em horas que voce passou com o carro estacionado:\n");
  scanf("%d", &tempo);

  testeX = ((tempo%4)==0)*(tempo/4)*10;
  testeY = ((tempo%4)!=0)*((tempo/4)*10)+((tempo%4)*5);
  valorTotal =testeX+testeY;

  printf("O total a se pagar eh de R$%.2f", valorTotal);
 return 0;
 }