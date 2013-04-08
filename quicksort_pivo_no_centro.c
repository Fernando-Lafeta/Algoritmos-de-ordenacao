#include <stdio.h>

void quicksort(int *A , int n);
void ordena(int esq, int dir, int *A);
void particao(int esq, int dir, int *i, int *j, int *A);

int main(){
    int vet[]={4,2,6,1,0,5,6,8,9,10,12,4};
    int i;
    for(i=0; i<12; i++){
        printf(" %d ",vet[i]);
    }
    quicksort(vet,12);
    printf("\n\n Ordenado: \n\n");
    for(i=0; i<12; i++){
        printf(" %d ",vet[i]);
    }
    return 0;
}

void quicksort(int *A , int n){
    ordena(0,n-1,A);
}

void ordena(int esq, int dir, int *A){
    int i,j;
    particao(esq,dir,&i,&j,A);
    if(esq<j)
        ordena(esq,j,A);
    if(i<dir)
        ordena(i,dir,A);
}

void particao(int esq, int dir, int *i, int *j, int *A){
    int pivo,tmp;
    *i=esq;
    *j=dir;
    pivo=A[(*i+*j)/2];
    do{
        while(pivo>A[*i])
            (*i)++;
        while(pivo<A[*j])
            (*j)--;
        if(*i<=*j){
            tmp=A[*i];
            A[*i]=A[*j];
            A[*j]=tmp;
            (*i)++;
            (*j)--;
        }

    }while(*i<=*j);
}

