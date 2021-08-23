
#include "functions.h"
#include "stdio.h"
int potencia(int x, int n){

    int resultado=1;

    if(n == 0)
    {
        return 1;
    }
    else
    {
        
        return x * potencia(x,n-1);
    }

    
}
