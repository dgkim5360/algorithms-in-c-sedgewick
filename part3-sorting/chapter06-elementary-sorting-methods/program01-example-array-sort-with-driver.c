/* Program 6.1: Example of array sort with driver program
 * This program illustrates our conventions for implementing basic array
 * sorts. The `main` function is a driver that initializes an array of
 * integers (either with random values or from standard input), calls a
 * `sort` function to sort that array, then prints out the ordered
 * result.
 *
 * The sort function, which is a version of insertion sort (see Section
 * 6.3 for a detailed description, an example, and an improved
 * implementation), assumes that
 * `Item`: the data type of the items being sorted,
 * `less`: the operation to compare two keys,
 * `exch`: the operation to exchange two items,
 * `compexch`: the operation to compare two items and exchange them if
 *   necessary to make the second not `less` than the first).
 * We implement `Item` for integers (as needed by `main`) with `typedef`
 * and simple macros in this code. Use of other data types is the topic
 * of Section 6.7, and does not affect `sort`.
 */
#include <stdio.h>
#include <stdlib.h>
typedef int Item;
#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) { Item t = A; A = B; B = t; }
#define compexch(A, B) if (less(B, A)) exch(A, B)

void sort(Item a[], int l, int r) {
  int i, j;

  for (i = l+1; i <= r; ++i)
    for (j = i; j > l; --j)
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

  sort(a, 0, N-1);

  for (i = 0; i < N; ++i)
    printf("%3d ", a[i]);
  printf("\n");
  free(a);
  return 0;
}
