
#include "functions.h"
#include <stdbool.h>
#include "string.h"
#include <stdio.h>
int cont=0;

bool is_palindromo(char texto[]){

if(cont == strlen(texto)-1) //por causa do strlen
{
    return true;
}


if(texto[cont] == texto[strlen(texto)-1-cont]) //fgets pega o \n
{
    cont++;
    is_palindromo(texto);
}
else
{
    return false;
}





    
}
