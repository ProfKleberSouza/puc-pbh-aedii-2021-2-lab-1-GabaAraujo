
#include "functions.h"
#include <stdio.h>
#include <string.h>

void
placar_possiveis_recursivo (char texto[], int m, int n, int pos)
{

  if (m == 0 && n == 0) //vai parar quando não existir mais numeros a serem colocados
    {
      texto[pos] = '\0';
      printf ("%s\n", texto);
    }
   
   if (m > 0)
    {
      texto[pos] = 'A';
      placar_possiveis_recursivo (texto, m-1, n, pos+1);
    }
    
   if(n > 0)
   {
       texto[pos] = 'B';
       placar_possiveis_recursivo (texto, m, n-1, pos+1);
   }


}


void
placar_possiveis (int m, int n)
{
  char texto[100];

  placar_possiveis_recursivo (texto, m, n, 0);    //posicao 0


}

