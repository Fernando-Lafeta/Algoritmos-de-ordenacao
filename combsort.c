#include <stdio.h>
#define max 10

void combsort(int *vet, int n) {
	float shrink_factor = 1.247330950103979; // shrink_factor = 1 / (1 - (1/e^phi))
	int gap = n, trocado = 1, tmp, i;

    while ((gap > 1) || trocado) {
		if (gap > 1) {
			gap = gap / shrink_factor;
		}

		trocado = 0;
		i = 0;

        while ((gap + i) < n) {
            if (vet[i] - vet[i + gap] > 0) {
                tmp = vet[i];
                vet[i] = vet[i + gap];
                vet[i + gap] = tmp;
                trocado = 1;
            }
            i++;
        }
    }
}

int main() {
	int vetor[max] = {5,2,7,8,10,6,1,4,9,3};
	int i;
	combsort(vetor,max);
	for (i = 0; i < max; i++) {
		printf("%d ", vetor[i]);
	}
	return(0);
}
