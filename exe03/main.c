#include <stdio.h>
#include "functions.h"

int main() {

  int n=0;

  scanf("%d",&n);

  int *vetor = (int*)malloc(n*sizeof(int)); //alocacao dinamica do vetor ->tratado como vetor comum // ponteiro = vetor

  for(int i=0;i<n;i++)
  {
    scanf("%d",&vetor[i]); //alimenta o vetor

  }


  int maior,menor;

  int *ponteiro_maior;
  ponteiro_maior = &maior; //aponta pro maior

  int *ponteiro_menor;
  ponteiro_menor = &menor; //aponta pro menor - &representa a posição


   menor_maior(vetor,n,ponteiro_maior,ponteiro_menor); //não manda com asterisco porque manda a posicao de memoria

  printf("MENOR = %d\n",menor);
  printf("MAIOR = %d", maior);
  printf("\n");

}