#include <stdio.h>
#define max 10

void quicksort(int *vet, int n) {
	int a = 1, b = (n - 1), temp, x = vet[0];

	if (n <= 1) {
		return;
	}

	while (1) {
		while ((a < n) && (vet[a] <= x)) {
			a++;
		}

		while (vet[b] > x) {
			b--;
		}

		if (a < b) {
			temp = vet[a];
			vet[a] = vet[b];
			vet[b] = temp;
			a++;
			b--;
		}

		if (a >= b) {
			break;
		}
	}

	vet[0] = vet[b];
	vet[b] = x;

	quicksort(vet,b);
	quicksort(&vet[a],(n - a));
}

int main() {
	int vetor[max] = {5,2,7,8,10,6,1,4,9,3};
	int i;
	quicksort(vetor,max);
	for (i = 0; i < max; i++) {
		printf("%d ", vetor[i]);
	}
	return(0);
}
