
#include "functions.h"

void menor_maior(int v[], int n, int *maior, int *menor)
{
    *menor = v[0];
    *maior = 0;



    for(int i=0;i<n;i++)
    {
        if(*menor > v[i])
        {
            *menor = v[i];
        }

        if(*maior < v[i])
        {
            *maior = v[i] ;       
        }
    }


    

}
