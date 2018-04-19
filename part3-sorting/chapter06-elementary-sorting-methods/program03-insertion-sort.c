/* Program 6.3: Insertion sort
 * This code is an improvement over the implementation of sort in
 * Program 6.1 because
 * (i) it first puts the smallest element in the array into the first
 *   position, so that that element can serve as a sentinel;
 * (ii) it does a single assignment, rather than an exchange, in the
 *   inner loop; and
 * (iii) it terminates the inner loop when the element being inserted is
 * in position.
 *
 * For each i, it sorts the elements a[l], ..., a[i] by moving one
 * position to the right elements in the sorted list a[l], ..., a[i-1]
 * that are larger than a[i], then putting a[i] into its proper
 * position.
 */
#include <stdio.h>
#include <stdlib.h>
typedef int Item;
#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) { Item t = A; A = B; B = t; }
#define compexch(A, B) if (less(B, A)) exch(A, B)

void insertion(Item a[], int l, int r) {
	int i;

	for (i = r; i > l; --i)
		compexch(a[i-1], a[i]);
	for (i = l+2; i <= r; ++i) {
		int j = i;
		Item v = a[i];
		while (less(v, a[j-1])) {
			a[j] = a[j-1];
			--j;
		}
		a[j] = v;
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

	insertion(a, 0, N-1);

	for (i = 0; i < N; ++i)
		printf("%3d ", a[i]);
	printf("\n");
	free(a);
	return 0;
}