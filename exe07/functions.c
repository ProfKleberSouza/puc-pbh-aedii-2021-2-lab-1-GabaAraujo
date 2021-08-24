
#include "functions.h"
#include <stdio.h>

int mdc(int x, int y){

    int resultado ;


    if(x < y)
    {
        resultado = mdc(y,x);
    }
    else if ( x % y == 0) // x>= y
    {
        resultado = y;
    }
    else 
    {
        resultado = mdc(y,x%y);
    }

    return resultado;
    
}
