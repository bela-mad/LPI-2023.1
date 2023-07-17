//Modificar o programa para atender a passageiros de avião (usuário informará o modelo do avião):
//– AirBus e Boing: 2 fileiras de 3 cadeiras: Janela-meio-corredor (a-b-c/d-e-f).
//– Padrão internacional: Fileiras de 8 cadeiras: 2 – 4 – 2 (a-b/c-d-e-f/g-h)
//– Foccker 100: 3 – 2 (a-b-c/d-f)
//* Obs: Da esquerda pra direita

#include <stdio.h>

int main(void) {

  int aviao, assento_num, fileira;
  char assento_letra;
  do {
    printf("\nOla! Informe o modelo do aviao em que voce ira viajar: \n\n");
    printf("1) AirBus e Boing\n");
    printf("2) Padrão internacional\n");
    printf("3) Foccker 100\n");
    printf("\nOpcao: "); 
    scanf("%d", &aviao);
    switch (aviao) {
    case 0: 
      printf("\nMuito obrigadx por usar o nosso serviço. Volte sempre!\n"); 
      break;
    case 1: 
      printf("\nCerto, agora o numero do seu assento: \n"); 
      scanf("%d%c", &assento_num, &assento_letra);
      //2 fileiras de 3 cadeiras: Janela-meio-corredor (a-b-c/d-e-f)
      
      //Definindo o numero da fileira

      fileira=assento_num;

      //Definindo a posiçao da poltrona
      if (assento_letra=='a') {
        printf("\nO seu assento fica na fileira %d, na esquerda, do lado da janela", fileira);
        aviao=0;
      }

      else if (assento_letra=='b') {
        printf("\nO seu assento fica na fileira %d, na esquerda, no meio", fileira);
        aviao=0;
      } 
    
      else if (assento_letra=='c') {
        printf("\nO seu assento fica na fileira %d, na esquerda, do lado do corredor", fileira);
        aviao=0;
      }

      else if (assento_letra=='d') {
        printf("\nO seu assento fica na fileira %d, na direita, do lado do corredor", fileira);
        aviao=0;
      }

      else if (assento_letra=='e') {
        printf("\nO seu assento fica na fileira %d, na direita, no meio", fileira);
        aviao=0;
      }
    
      else if (assento_letra=='f') {
        printf("\nO seu assento fica na fileira %d, na direita, do lado da janela", fileira);
        aviao=0;
      }
      
      else {
        printf("\nEssa opcao nao esta disponivel. Escolha novamente...\n");
        aviao=1;
      }
      break;
      
    case 2: 
      printf("\nCerto, agora o numero do seu assento: \n"); 
      scanf("%d%c", &assento_num, &assento_letra);
      //Fileiras de 8 cadeiras: 2 – 4 – 2 (a-b/c-d-e-f/g-h)
      
      //Definindo o numero da fileira

      fileira=assento_num;

      //Definindo a posiçao da poltrona
      if (assento_letra=='a') {
        printf("\nO seu assento fica na fileira %d, na esquerda, do lado da janela", fileira);
        aviao=0;
      }

      else if (assento_letra=='b') {
        printf("\nO seu assento fica na fileira %d, na esquerda, do lado corredor", fileira);
        aviao=0;
      } 
    
      else if (assento_letra=='c') {
        printf("\nO seu assento fica na fileira %d, no meio, do lado do corredor à esquerda", fileira);
        aviao=0;
      }

      else if (assento_letra=='d') {
        printf("\nO seu assento fica na fileira %d, no meio, no meio à esquerda", fileira);
        aviao=0;
      }

      else if (assento_letra=='e') {
        printf("\nO seu assento fica na fileira %d, no meio, no meio à direita", fileira);
        aviao=0;
      }

      else if (assento_letra=='f') {
        printf("\nO seu assento fica na fileira %d, na direita, do lado do corredor à direita", fileira);
        aviao=0;
      }

      else if (assento_letra=='g') {
        printf("\nO seu assento fica na fileira %d, na direita, no corredor", fileira);
        aviao=0;
      }
    
      else if (assento_letra=='h') {
        printf("\nO seu assento fica na fileira %d, na direita, do lado da janela", fileira);
        aviao=0;
      }

      else {
        printf("\nEssa opcao nao esta disponivel. Escolha novamente...\n");
        aviao=1;
      }
      break;
      
    case 3: 
      printf("\nCerto, agora o numero do seu assento: \n"); 
      scanf("%d%c", &assento_num, &assento_letra);
      //3 – 2 (a-b-c/d-f)

      //Definindo o numero da fileira

      fileira=assento_num;

      //Definindo a posiçao da poltrona

      if (assento_letra=='a') {
        printf("\nO seu assento fica na fileira %d, na esquerda, do lado da janela", fileira);
        aviao=0;
      }

      else if (assento_letra=='b') {
        printf("\nO seu assento fica na fileira %d, na esquerda, no meio", fileira);
        aviao=0;
      } 
    
      else if (assento_letra=='c') {
        printf("\nO seu assento fica na fileira %d, na esquerda, do lado do corredor", fileira);
        aviao=0;
      }

      else if (assento_letra=='d') {
        printf("\nO seu assento fica na fileira %d, na direita, do lado do corredor", fileira);
        aviao=0;
      }

      else if (assento_letra=='e') {
        printf("\nO seu assento fica na fileira %d, na direita, do lado da janela", fileira);
        aviao=0;
      }
      else {
        printf("\nEssa opcao nao esta disponivel. Escolha novamente...\n");
        aviao=1;
      }      
      break;
      
    default: printf("\nEssa opcao nao esta disponivel. Escolha novamente...\n");
    }
  } while(aviao);

  return 0;
}