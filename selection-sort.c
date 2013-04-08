#include <stdio.h>
#define max 10

void selectionsort(int *vet, int n) {
	int i, j, x;
	for (i = 0; i < n; i++) {
		for (j = i+1; j < n; j++) {
			if (vet[i] > vet[j]) {
				x = vet[i];
				vet[i] = vet[j];
				vet[j] = x;
			}
		}
	}
}

int main() {
	int vetor[max] = {5,2,7,8,10,6,1,4,9,3};
	int i;
	selectionsort(vetor,max);
	for (i = 0; i < max; i++) {
		printf("%d ", vetor[i]);
	}
	return(0);
}
