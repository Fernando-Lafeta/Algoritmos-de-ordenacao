#include <stdio.h>
#define max 10

void shellsort(int *vet, int n) {
    int i, j, tmp;
    int h = 1;
    do {
        h = 3 * h + 1;
    } while(h < n);
    do {
	h /= 3;
	for(i = h; i < n; i++) {
            tmp = vet[i];
            j = i - h;
            while (j >= 0 && tmp < vet[j]) {
                vet[j + h] = vet[j];
                j -= h;
            }
            vet[j + h] = tmp;
        }
    } while ( h > 1);
}

int main() {
	int vetor[max] = {5,2,7,8,10,6,1,4,9,3};
	int i;
	shellsort(vetor,max);
	for (i = 0; i < max; i++) {
		printf("%d ", vetor[i]);
	}
	return(0);
}
