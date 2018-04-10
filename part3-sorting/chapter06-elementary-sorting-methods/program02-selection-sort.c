/* Program 6.2: Selection sort
 * For each i from l to r-1, exchange a[i] with the minimum element in
 * a[i], ..., a[r]. As the index i travels from left to right, the
 * elements to its left are in their final position in the array (and
 * will not be touched again), so the array is fully sorted when i
 * reaches the right end.
 *
 * Running time: O(N^2)
 * Disadvantage: its running time depends only slightly on the amount
 *   of order already in the file.
 *   i.e. it does not try to keep the existing order.
 * Powerful when: Sorting files with huge items and small keys.
 */
#include <stdio.h>
#include <stdlib.h>
typedef int Item;
#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) { Item t = A; A = B; B = t; }
#define compexch(A, B) if (less(B, A)) exch(A, B)

void selection(Item a[], int l, int r) {
	int i, j;

	for (i = l; i < r; ++i) {
		int min = i;
		for (j = i+1; j <= r; ++j)
			if (less(a[j], a[min]))
				min = j;
		exch(a[i], a[min]);
	}
}

int main(const int argc, char *argv[]) {
	int i, N = atoi(argv[1]), sw = atoi(argv[2]);
	int *a = malloc(N*sizeof(int));

	if (sw)
		for (i = 0; i < N; ++i)
			a[i] = 1000*(1.0*rand()/RAND_MAX);
	else
		while (scanf("%d", &a[N]) == 1)
			++N;

	selection(a, 0, N-1);

	for (i = 0; i < N; ++i)
		printf("%3d ", a[i]);
	printf("\n");
	free(a);
	return 0;
}
