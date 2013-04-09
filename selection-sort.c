#include <stdio.h>

void Selecao(int vetor[], int tamanho){
    int i,j,indice_menor,tmp;

    for (i = 0; i <tamanho-1; i++) {
    indice_menor = i;
    for (j = (i+1); j < tamanho; j++) {
      if(vetor[j] < vetor[indice_menor]) {
        indice_menor = j;
      }
    }
    if (i != indice_menor) {
       tmp = vetor[i];
      vetor[i] = vetor[indice_menor];
      vetor[indice_menor] = tmp;
    }
  }
}
int main(){
    int vetor[10],i;
    for(i=0; i<10 ; i++){
             scanf("%d",&vetor[i]);
             }
    Selecao(vetor,10);
    printf("\n\n\n");
    for(i=0; i<10 ; i++){
             printf("\n %d",vetor[i]);
    }
    system("pause");
    return(0);
}
