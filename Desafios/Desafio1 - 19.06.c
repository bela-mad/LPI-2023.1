//1. Receba uma string e um caractere, e apague todas as ocorrências desse caractere na string

#include <stdio.h>
#include <stdlib.h>

int main() {

    int aux=0, tam_string=0;
    char palavra[21], letra;

    printf("Digite uma palavra: ");
    scanf("%20[^\n]%*c", palavra);

    printf("Agora, digite uma letra: ");
    scanf("%c%*c",&letra);

    for (aux=0; palavra[aux]!='\0' ;aux++)
    {
        tam_string++;
    }

    for (aux=0; aux<tam_string ;aux++)
    {
        if (palavra[aux]!=letra)
        {
            printf("%c", palavra[aux]);
        }
    }

    return 0;
}