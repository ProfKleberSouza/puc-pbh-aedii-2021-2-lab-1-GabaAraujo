#include "functions.h"
#include <stdio.h>

void tabela_verdade_recursivo(char texto[],int bits,int posicao) 
{
    if(bits == 0 ) //condicao de parada
    {
        texto[posicao] = '\0';
        printf("%s\n",texto);
    }
    else
    {
         texto[posicao] = '0';
         tabela_verdade_recursivo(texto,bits-1,posicao+1);
         
         texto[posicao] = '1';
         tabela_verdade_recursivo(texto,bits-1,posicao+1);
         
         
         
         
            //if(bits> contador)
            //{
           
            //}

    }
}


void tabela_verdade(int d)
{
    char texto[100];
    
    tabela_verdade_recursivo(texto,d,0);
}