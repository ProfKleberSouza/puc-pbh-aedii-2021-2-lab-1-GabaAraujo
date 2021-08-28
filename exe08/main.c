#include <stdio.h>
#include <stdbool.h>
#include "functions.h"
#include "string.h"

int main() {

char texto[100];


fgets(texto,100,stdin);
  
  if(strlen(texto) == '\n')
  {
      texto[strlen(texto)] = '\0';
  }
  if(strlen(texto) == '\r')
  {
      texto[strlen(texto)] - '\0';
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