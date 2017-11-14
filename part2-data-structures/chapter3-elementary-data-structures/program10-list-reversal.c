#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#define N 10

link reverse(link x) {
  link t, y = x, r = NULL;
  
  while (y != NULL) {
    t = y->next;
    y->next = r;
    r = y;
    y = t;
  }
  return r;
}

int main() {
  int i;
  link t = malloc(sizeof *t), x = t;

  t->item = 1;
  t->next = NULL;
  for (i = 2; i <= N; ++i) {
    x = (x->next = malloc(sizeof *x));
    x->item = i;
  }
  x->next = NULL;

  printf("=== Original List ===\n");
  x = t;
  while (x != NULL) {
    printf("%d ", x->item);
    x = x->next;
  }
  printf("\n");
  
  printf("=== Reversed List ===\n");
  x = reverse(t);
  while (x != NULL) {
    printf("%d ", x->item);
    x = x->next;
  }
  printf("\n");
  return 0;
}
