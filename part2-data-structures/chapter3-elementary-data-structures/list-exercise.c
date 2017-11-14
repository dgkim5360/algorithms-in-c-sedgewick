#include <stdlib.h>
#include <limits.h>
#include "list.h"

/* Exercise 3.34 */
// it does not work, other version of list.c needed.
void push_max(link x) {
  int max = INT_MIN;
  link t, maxt, last;

  for (t = x; t != NULL; t = t->next) {
    if (t->item > max) {
      max = t->item;
      maxt = t;
    }
    if (t->next == NULL)
      last = t;
  }

  for (t = x; t != NULL; t = t->next)
    if (t->next == maxt)
      deleteNext(t);
  last->next = maxt;
  maxt->next = NULL;
}
