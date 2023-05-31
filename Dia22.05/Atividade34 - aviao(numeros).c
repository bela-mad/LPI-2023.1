//Modificar o programa para atender a passageiros de avião (usuário informará o modelo do avião):
//– AirBus e Boing: 2 fileiras de 3 cadeiras: Janela-meio-corredor (a-b-c/d-e-f).
//– Padrão internacional: Fileiras de 8 cadeiras: 2 – 4 – 2 (a-b/c-d-e-f/g-h)
//– Foccker 100: 3 – 2 (a-b-c/d-f)
//* Obs: Da esquerda pra direita

#include <stdio.h>

int main(void) {

  int aviao, assento, fileira;
  do {
    printf("\nOla! Informe o modelo do aviao em que voce ira viajar: \n");
    printf("1. AirBus e Boing\n");
    printf("2. Padrão internacional\n");
    printf("3. Foccker 100\n");
    printf("Opcao: "); 
    scanf("%d", &aviao);
    switch (aviao) {
    case 0: 
      printf("\nMuito obrigadx por usar o nosso serviço. Volte sempre!\n"); 
      break;
    case 1: 
      printf("\nCerto, agora informe o numero do seu assento: \n"); 
      scanf("%d", &assento);
      //2 fileiras de 3 cadeiras: Janela-meio-corredor (a-b-c/d-e-f)

      //Definindo o numero da fileira
      if (assento%6==0) {
        fileira=(assento/6);
      }
      else {
        fileira=(assento/6)+1;
      }

      //Definindo a posiçao da poltrona
      if (assento%6==1) {
        printf("\nO seu assento fica na fileira %d, na esquerda, do lado da janela", fileira);
      }

      else if (assento%6==2) {
        printf("\nO seu assento fica na fileira %d, na esquerda, no meio", fileira);
      } 
    
      else if (assento%6==3) {
        printf("\nO seu assento fica na fileira %d, na esquerda, do lado do corredor", fileira);
      }

      else if (assento%6==4) {
        printf("\nO seu assento fica na fileira %d, na direita, do lado do corredor", fileira);
      }

      else if (assento%6==5) {
        printf("\nO seu assento fica na fileira %d, na direita, no meio", fileira);
      }
    
      else if (assento%6==0) {
        printf("\nO seu assento fica na fileira %d, na direita, do lado da janela", fileira);
      }
      
      aviao=0;
      break;
      
    case 2: 
      printf("\nCerto, agora o numero do seu assento: \n"); 
      scanf("%d", &assento);
      //Fileiras de 8 cadeiras: 2 – 4 – 2 (a-b/c-d-e-f/g-h)

      //Definindo o numero da fileira
      if (assento%8==0) {
        fileira=(assento/8);
      }
      else {
        fileira=(assento/8)+1;
      }

      //Definindo a posiçao da poltrona
      if (assento%8==1) {
        printf("\nO seu assento fica na fileira %d, na esquerda, do lado da janela", fileira);
      }

      else if (assento%8==2) {
        printf("\nO seu assento fica na fileira %d, na esquerda, do lado corredor", fileira);
      } 
    
      else if (assento%8==3) {
        printf("\nO seu assento fica na fileira %d, no meio, do lado do corredor à esquerda", fileira);
      }

      else if (assento%8==4) {
        printf("\nO seu assento fica na fileira %d, no meio, no meio à esquerda", fileira);
      }

      else if (assento%8==5) {
        printf("\nO seu assento fica na fileira %d, no meio, no meio à direita", fileira);
      }

      else if (assento%8==6) {
        printf("\nO seu assento fica na fileira %d, na direita, do lado do corredor à direita", fileira);
      }

      else if (assento%8==7) {
        printf("\nO seu assento fica na fileira %d, na direita, no corredor", fileira);
      }
    
      else if (assento%8==0) {
        printf("\nO seu assento fica na fileira %d, na direita, do lado da janela", fileira);
      }

      aviao=0;
      break;
      
    case 3: 
      printf("\nCerto, agora o numero do seu assento: \n"); 
      scanf("%d", &assento);
      //3 – 2 (a-b-c/d-f)

      //Definindo o numero da fileira
      if (assento%5==0) {
        fileira=(assento/5);
      }
      else {
        fileira=(assento/5)+1;
      }

      //Definindo a posiçao da poltrona
      if (assento%5==1) {
        printf("\nO seu assento fica na fileira %d, na esquerda, do lado da janela", fileira);
      }

      else if (assento%5==2) {
        printf("\nO seu assento fica na fileira %d, na esquerda, no meio", fileira);
      } 
    
      else if (assento%5==3) {
        printf("\nO seu assento fica na fileira %d, na esquerda, do lado do corredor", fileira);
      }

      else if (assento%5==4) {
        printf("\nO seu assento fica na fileira %d, na direita, do lado do corredor", fileira);
      }

      else if (assento%5==0) {
        printf("\nO seu assento fica na fileira %d, na direita, do lado da janela", fileira);
      }
      
      aviao=0;
      break;
      
    default: printf("\nEssa opcao nao esta disponivel. Escolha novamente...\n");
    }
  } while(aviao);

  return 0;
}