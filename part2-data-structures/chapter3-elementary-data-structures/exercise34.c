#include <stdio.h>
#include "list.h"
#define N 10

void push_max(Node);

int main() {
  int i;
  Node t, x, start;

  initNodes(N);
  start = newNode(10);
  for (i = 9, x = start; i > 0; --i) {
    t = newNode(i);
    insertNext(x, t);
    x = t;
  }
  x->next = NULL;

  printf("=== Original List ===\n");
  for (x = start; x != NULL; x = Next(x))
    printf("%d ", Item(x));
  printf("\n");

  push_max(start);

  printf("=== Max-pushed List ===\n");
  for (x = start; x != NULL; x = Next(x))
    printf("%d ", Item(x));
  printf("\n");

  return 0;
}
