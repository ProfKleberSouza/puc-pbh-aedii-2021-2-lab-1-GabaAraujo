#include <stdio.h>
#include <stdbool.h>
#include "functions.h"
#include "string.h"

int main() {

char texto[100];


fgets(texto,100,stdin);



if(texto[strlen(texto)-1] == '\n')
{
    texto[strlen(texto)-1] = '\0';
}
if(texto[strlen(texto)-1] == '\r')
{
    texto[strlen(texto)-1] = '\0';
}
 




bool resultado = is_palindromo(texto);

 if(resultado == true)
 {
     printf("SIM");
 }
 else
 {
     printf("NAO");
 }


    printf("\n");


    return(0);
}