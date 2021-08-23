#include "string.h"
#include "functions.h"
#include <stdio.h>

void numero_vogais(char texto[]){

  char texto_nospace[100]; //nova string
  int cont=0;


  for(int i=0;i<strlen(texto);i++)
  {
      if(texto[i] != ' ') //se for diferente de espaco,ele alimenta a string
      {
          texto_nospace[cont] = texto[i];
          cont++;
      }

  }

    texto_nospace[cont] = '\0'; 

    // printf("%s",texto);
  //  printf("%s",texto_nospace);

    
    int cont_A=0,cont_E=0,cont_I=0,cont_O=0,cont_U=0;


    for(int i=0;i<strlen(texto);i++)
    {

        if(texto[i] == 'a'|| texto[i] == 'A')
        {
            cont_A++;
        }
        //---------------------//
        if(texto[i] == 'e'|| texto[i] == 'E')
        {
            cont_E++;
        }
       //---------------------//

        if(texto[i] == 'i'|| texto[i] == 'I')
        {
            cont_I++;
        }

      //---------------------//
        if(texto[i] == 'o'|| texto[i] == 'O')
        {
            cont_O++;
        }

      //---------------------//   
        if(texto[i] == 'u'|| texto[i] == 'U')
        {
            cont_U++;
        }




    }

    printf("A = %d\n",cont_A);
    printf("E = %d\n",cont_E);
    printf("I = %d\n",cont_I);
    printf("O = %d\n",cont_O);
    printf("U = %d",cont_U);
    printf("\n");

    
}
