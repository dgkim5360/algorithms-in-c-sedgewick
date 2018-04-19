/* Program 6.4: Bubble sort
 * For each i from l to r-1, the inner (j) loop puts the minimum element
 * among the elements in a[i], ..., a[r] into a[i] by passing from right
 * to left through the elements, compare-exchanging successive elements.
 * The smallest one moves on all such comparisons, so it "bubbles" to
 * the beginning. As in selection sort, as the index i travels from left
 * to right through the file, the elements to its left are in their
 * final position in the array.
 */
#include <stdio.h>
#include <stdlib.h>
typedef int Item;
#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) { Item t = A; A = B; B = t; }
#define compexch(A, B) if (less(B, A)) exch(A, B)

void bubble(Item a[], int l, int r) {
	int i, j;

	for (i = l; i < r; ++i)
		for (j = r; j > i; --j)
			compexch(a[j-1], a[j]);
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

	bubble(a, 0, N-1);

	for (i = 0; i < N; ++i)
		printf("%3d ", a[i]);
	printf("\n");
	free(a);
	return 0;
}