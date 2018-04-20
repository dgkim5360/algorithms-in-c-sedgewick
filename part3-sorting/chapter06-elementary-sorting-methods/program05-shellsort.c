/* Program 6.5: Shellsort
 * If we do not use sentinels and then replace every occurrence of "1"
 * by "h" in insertion sort, the resulting program h-sorts the file.
 * Adding an outer loop to change the increments leads to this compact
 * shellsort implementation, which uses the increment sequence
 * 1 4 13 40 121 364 1093 3280 9841 ...
 *
 * Property 6.7: The result of h-sorting a file that is k-ordered is a
 *   file that is both h- and k-ordered.
 *
 * Property 6.8: Shellsort does less than N(h-1)(k-1)/g comparisons to
 *   g-sort a file that is h- and k-ordered, provided that h and k are
 *   relatively prime.
 *
 * Property 6.9: Shellsort does less than O(N^{3/2}) comparisons for
 *   the increments 1 4 13 40 121 364 1093 9841 ... .
 *
 * Property 6.10: Shellsort does less than O(N^{4/3}) comparisons for
 *   the increments 1 8 23 77 281 1073 4193 16577 ... .
 *
 * Property 6.11: Shellsort does less than O(N(log N)^2) comparisons
 *   for the increments 1 2 3 4 6 9 8 12 18 27 16 24 36 54 81 ... .
 */
#include <stdio.h>
#include <stdlib.h>
typedef int Item;
#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) { Item t = A; A = B; B = t; }
#define compexch(A, B) if (less(B, A)) exch(A, B)

void shellsort(Item a[], int l, int r) {
	int i, j, h;

	for (h = 1; h <= (r-1)/9; h = 3*h+1) ;
	for ( ; h > 0; h /= 3)
		for (i = l+h; i <= r; ++i) {
			j = i;
			Item v = a[i];
			while (j >= l+h && less(v, a[j-h])) {
				a[j] = a[j-h];
				j -= h;
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

	shellsort(a, 0, N-1);

	for (i = 0; i < N; ++i)
		printf("%3d ", a[i]);
	printf("\n");
	free(a);
	return 0;
}
