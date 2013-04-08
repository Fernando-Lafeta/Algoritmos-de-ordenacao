#include <stdio.h>
#define max 10

int sorteado(int *vet, int n) {
	while (n >= 1) {
		if (vet[n] < vet[n-1]) {
			return(0);
		}
		n--;
	}
	return(1);
}

void embaralha(int *vet, int n) {
	int i, r, tmp;
	for(i = 0; i < n; i++) {
		tmp = vet[i];
		r = rand() % n;
		vet[i] = vet[r];
		vet[r] = tmp;
	}
}

void bogosort(int *vet, int n) {
	while (sorteado(vet, n) != 1) {
		embaralha(vet, n);
	}
}

int main() {
	int vetor[max] = {5,2,7,8,10,6,1,4,9,3};
	int i;
	bogosort(vetor,max);
	for (i = 0; i < max; i++) {
		printf("%d ", vetor[i]);
	}
	return(0);
}
