//O professor com 2 turmas de 4 alunos cada, fez 3 provas durante um semestre mas só levará em conta 2 notas mais altas para calcular a média. Faça um programa que peça as 3 notas de cada aluno de cada turma, valide-as (0 - 10), e que mostre como seria a média com as 3 notas, e que mostre a média com as 2 notas mais altas, apresentando a nota descartada. Utilizar matriz 3D

#include <stdio.h>

int main(void){
  
  char alunos[2][4][100];
  float notas[2][4][3], media[2][4][1], media2[2][4][1], maior1, maior2;
  int turma, aluno, nota;

  maior1=notas[0][0][0];
  maior2=notas[0][0][0];

  for(turma=0; turma<2; turma++){
    for (aluno=0; aluno<4;aluno++){
      printf("\nInforme o nome do aluno [%d] da turma[%d]: ",(aluno+1),(turma+1));
      scanf("%100[^\n]%*c",alunos[turma][aluno]);
    }
  }

  //Teste de armazenamento
    printf("\n\n");
    printf("\n- Lista de alunos:\n\n");
    for(int turma=0; turma<2; turma++){
      for(int aluno=0; aluno<4; aluno++){
        printf("\nALUNO : %s", alunos[turma][aluno]);
      }
    }
    printf("\n\n");

  //Preencimento das notas
  for (turma=0; turma<2; turma++){
    for(aluno=0; aluno<4; aluno++){
      for(nota=0; nota<3; nota++){
        printf("\nInforme a nota da prova [%d] do aluno [%s] da turma[%d]: ",(nota+1),alunos[turma][aluno], (turma+1));
        scanf("%f%*c",&notas[turma][aluno][nota]);

  //Validando as notas
        while (notas[turma][aluno][nota]<0 || notas[turma][aluno][nota] >10) {
          printf("\n\nATENCAO: INFORME UMA NOTA ENTRE O-10: ");
          scanf("%f%*c",&notas[turma][aluno][nota]);
        }
      }         printf("\n\n======================================================");
    }
  }

  //Medias dos alunos
  for (int turma=0; turma<2; turma++){
    for(int aluno=0; aluno<4; aluno++){
      float soma, soma2;
      maior1=maior2=soma=soma2=0;   //Para nao pegar lixo

      for(int nota=0; nota<3; nota++){
        soma+= notas[turma][aluno][nota];

  //Este trecho tenta descobrir quais sao as duas maiores notas
        soma2= maior1+maior2;

  //Descobrindo as duas maiores notas
        if (notas[turma][aluno][nota]>=maior1){
          maior2= maior1;
          maior1= notas[turma][aluno][nota];
          soma2= maior1+maior2;
        }
      }
      media[turma][aluno][0]=soma/=3;
      media2[turma][aluno][0]=soma/=2;
    }
  }
  printf("\n\n\n\n======================= MEDIAS ============================");

  //Conferindo as medias com 3 notas
  for(turma=0; turma<2; turma++){
    for(aluno=0; aluno<4; aluno++){
      printf("\n\nTURMA (%d) ---> ALUNO (%s): %.2f", (turma+1),alunos[turma][aluno], media[turma][aluno][0]);
    }
  }
  printf("\n\n===================================================");

  //Conferindo as medias com as 2 maiores notas
  printf("\n\nMEDIAS EFETUADAS COM APENAS AS DUAS MAIORES NOTAS: \n\n");
  for(turma=0; turma<2; turma++) {
    for(aluno=0; aluno<4; aluno++) {
      printf("\n\nTURMA (%d) ---> ALUNO (%s): %.2f", (turma+1),alunos[turma][aluno], media2[turma][aluno][0]);
    }
  }
  
  return 0;
}