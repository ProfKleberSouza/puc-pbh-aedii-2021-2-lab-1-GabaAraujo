#include <stdio.h>
#include "functions.h"

int main() {

    int n;

    scanf("%d",&n); //numero de posicoens do vetor

    int *vetor = (int*)malloc(n*sizeof(int)); //alocacao dinamica do vetor ->tratado como vetor comum


    for(int i=0;i<n;i++)
    {
      scanf("%d",&vetor[i]); //alimenta o vetor


    }

    printf("MENOR = %d",menor(vetor,n));
    printf("\n");

  return(0);
}