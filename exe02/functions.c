
#include "functions.h"

int menor(int vetor[], int n){


    int Menor = vetor[0]; //MENOR VALOR PARA SER RETORNADO


    for(int i=0;i<n;i++)
    {

        if(Menor > vetor[i]) //Menor recebe o primeiro valor do vetor, caso o segundo for menor que o primeiro, ocorre a troca
        {
            Menor = vetor[i];
        }


    }
    

    return Menor; //retorna o menor valor

}
