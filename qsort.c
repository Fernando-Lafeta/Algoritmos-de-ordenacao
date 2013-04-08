#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5

typedef struct {
	int num;
	char nome[10], letra;
} Estrutura;

int cmp_chr(const void *a, const void *b) {
	return (*(char *) a - *(char *) b);
}

int cmp_int(const void *a, const void *b) {
	return (*(int *) a - *(int *) b);
}

int cmp_str(const void *a, const void *b) {
	return strcmp(*(char **) a, *(char **) b);
}

int cmp_struct_chr(const void *a, const void *b) {
	const Estrutura *pri = a, *seg = b;
	if (pri->letra < seg->letra) return -1;
	else if (pri->letra > seg->letra) return 1;
	else return 0;
}

int cmp_struct_int(const void *a, const void *b) {
	const Estrutura *pri = a, *seg = b;
	if (pri->num < seg->num) return -1;
	else if (pri->num > seg->num) return 1;
	else return 0;
}

int cmp_struct_str(const void *a, const void *b) {
	const Estrutura *pri = a, *seg = b;
	return strcmp(pri->nome, seg->nome);
}

/* int main() {
	int i;
	char vet[N] = {'d', 'c', 'a', 'e', 'b'};
	qsort(vet, N, sizeof(char), cmp_chr);
	for (i = 0; i < N; i++) printf("%c ", vet[i]);
	return 0;
} */

/* int main() {
	int vet[N] = {4,3,1,5,2}, i;
	qsort(vet, N, sizeof(int), cmp_int);
	for (i = 0; i < N; i++) printf("%d ", vet[i]);
	return 0;
} */

/* int main() {
	int i;
	char *vet[] = { "uva", "pera", "banana", "maca", "laranja"};
	qsort(vet, N, sizeof(char **), cmp_str);
	for (i = 0; i < N; i++) printf("%s ", vet[i]);
	return 0;
} */

/* int main() {
	Estrutura vet[N] = { {4, "uva", 'u'}, {3, "pera", 'p'}, {1, "banana", 'b'}, {5, "maca", 'm'}, {2, "laranja", 'l'} };
	int i;
	qsort(vet, N, sizeof(Estrutura), cmp_struct_chr);
	for (i = 0; i < N; i++) printf("%d - %c - %s\n", vet[i].num, vet[i].letra, vet[i].nome);
	return 0;
} */

/* int main() {
	Estrutura vet[N] = { {4, "uva", 'u'}, {3, "pera", 'p'}, {1, "banana", 'b'}, {5, "maca", 'm'}, {2, "laranja", 'l'} };
	int i;
	qsort(vet, N, sizeof(Estrutura), cmp_struct_int);
	for (i = 0; i < N; i++) printf("%d - %c - %s\n", vet[i].num, vet[i].letra, vet[i].nome);
	return 0;
} */

/* int main() {
	Estrutura vet[N] = { {4, "uva", 'u'}, {3, "pera", 'p'}, {1, "banana", 'b'}, {5, "maca", 'm'}, {2, "laranja", 'l'} };
	int i;
	qsort(vet, N, sizeof(Estrutura), cmp_struct_str);
	for (i = 0; i < N; i++) printf("%d - %c - %s\n", vet[i].num, vet[i].letra, vet[i].nome);
	return 0;
} */
