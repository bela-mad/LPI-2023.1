//Qual o resultado das variáveis x, y e z depois das seguintes seqüências de operações:
//int x, y, z;
//x = y = 10;
//z = x++;
//x = -x;
//y++;
//x = x + y - - z--;

#include <stdio.h>

int main(void) {
  int x, y, z;
                      //x=valor aleatório, y=0, z=0
  x = y = 10;         //x=10, y=10, z=0
  z = x++;            //x=10, y=10, z=10
                      //x=11, y=10, z=10
  x = -x;             //x=-11, y=10, z=10
  y++;                //x=-11, y=10, z=10
                      //x=-11, y=11, z=10
  x = x + y - - z--;  //x=10, y=11, z=10
                      //x=10, y=11, z=9
  
  printf("Valor de x: %d\n", x);
  printf("Valor de y: %d\n", y);
  printf("Valor de z: %d\n", z);

  return 0;
}