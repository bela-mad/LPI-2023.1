/* Dado o tamanho de um arquivo (em bits), bem como a velocidade da conexão (em bits por segundo), informe o tempo necessário para download desse arquivo */

#include <stdio.h>

int main(void) {
  float tamArquivo, velocConexao;
  printf("Ola! Digite o tamanho do arquivo que voce deseja baixar:\n");
  scanf("%f", &tamArquivo);
  printf("Agora, digite a velocidade de conexao:\n");
  scanf("%f", &velocConexao);
  printf("\n// O tempo necessário para o download desse arquivo eh de %.1f segundo(s)", tamArquivo/velocConexao);
  return 0;
}