#include <stdio.h>
#define max 10

void bubblesort(int* vet, int n) {
	int i, j, tmp;
	for (i = n-1; i >= 1; i--) {
		for (j = 0; j < i; j++) {
			if (vet[j] > vet[j+1]) {
				tmp = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = tmp;
			}
		}
	}
}

int main() {
	int vetor[max] = {5,2,7,8,10,6,1,4,9,3};
	int i;
	bubblesort(vetor,max);
	for (i = 0; i < max; i++) {
		printf("%d ", vetor[i]);
	}
	return(0);
}
