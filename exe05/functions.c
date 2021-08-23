
#include "functions.h"
#include "string.h"
#include "stdio.h"

void inverte(char texto[]){

    for(int i=strlen(texto);i>=0;i--) //rpete pelo tamanho da string -> tem de estar igual pra validar ate a ultima
    {

        printf("%c",texto[i]);

    }
   
    printf("\n");

}
