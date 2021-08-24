#include <stdio.h>
#include "functions.h"

int main() {

  int x,y;

  scanf("%d %d",&x,&y);
  

  int resultado = mdc(x,y);



  printf("%d",resultado);
  printf("\n");

}