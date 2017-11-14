#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#define N 100

int main() {
  int i;
  struct node heada, headb;
  link t, u, x, a = &heada, b;
  
  for (i = 0, t = a; i < N; ++i) {
    t->next = malloc(sizeof *t);
    t = t->next;
    t->next = NULL;
    t->item = rand() % 1000;
  }
  printf("=== Original List ===\n");
  for (t = a->next; t != NULL; t = t->next)
    printf("%d ", t->item);
  printf("\n");

  b = &headb;
  b->next = NULL;
  for (t = a->next; t != NULL; t = u) {
    u = t->next;
    for (x = b; x->next != NULL; x = x->next)
      if (x->next->item > t->item)
        break;
    t->next = x->next;
    x->next = t;
  }
  printf("=== Sorted List ===\n");
  for (t = b->next; t != NULL; t = t->next)
    printf("%d ", t->item);
  printf("\n");

  return 0;
}
