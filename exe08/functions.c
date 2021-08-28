
#include "functions.h"
#include <stdbool.h>
#include "string.h"
#include <stdio.h>


bool is_palindromo_rec(char texto[], int cont){

if(cont == strlen(texto)-1) //por causa do strlen
{
    return true;
}


if(texto[cont] == texto[strlen(texto)-1-cont]) //fgets pega o \n
{
    is_palindromo_rec(texto,cont+1);
}
else
{
    return false;
}



    
}


bool is_palindromo(char texto[])
{
    is_palindromo_rec(texto,0);

}