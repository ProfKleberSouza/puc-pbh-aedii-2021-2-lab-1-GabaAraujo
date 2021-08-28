
#include "functions.h"
#include "string.h"
#include "stdio.h"

void inverte(char texto[]){

  int size = strlen(texto);

    for(int i = 0; i < size / 2; i++) {
       char tmp = texto[i]; //armazena o character inicial
       texto[i] = texto[size - i - 1]; //Troca o character da ponta oposta
       texto[size - i - 1] = tmp; //Armazena o character inicial no buffer
    }
    printf("%s", texto);
   





    printf("\n");

}
