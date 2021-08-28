#include <stdio.h>
#include "functions.h"
#include "string.h"
int main() {

  char texto[100];

  fgets(texto,100,stdin);

  inverte(texto);
    
    return(0);

}