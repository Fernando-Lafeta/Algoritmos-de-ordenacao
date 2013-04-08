#include <stdio.h>
#define max 10

void insertionsort(int *vet, int n) {
	int i, j, x;
	for (i = 1; i < n; i++) {
		x = vet[i];
		for (j = i-1; j >= 0 && vet[j] > x; j--) {
			vet[j+1] =  vet[j];
		}
		vet[j+1] = x;
	}
}

int main() {
	int vetor[max] = {5,2,7,8,10,6,1,4,9,3};
	int i;
	insertionsort(vetor,max);
	for (i = 0; i < max; i++) {
		printf("%d ", vetor[i]);
	}
	return(0);
}
