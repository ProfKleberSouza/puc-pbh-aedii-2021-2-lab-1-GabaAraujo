#include <stdio.h>
#include <stdbool.h>
#include "functions.h"
#include "string.h"

int main() {

char texto[100];


fgets(texto,100,stdin);
  

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