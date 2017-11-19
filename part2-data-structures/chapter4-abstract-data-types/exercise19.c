/* Exercise 4.1: Give the contents of s[0], ..., s[4] after the execution of
 * the operations illustrated in Figure 4.1, using Program 4.4.
 */
#include <stdio.h>
#include "ItemChar.h"
#include "STACK.h"
#define N 20

int main() {
  Item c;

  STACKinit(N);
  while ((c = getchar()) != EOF) {
    if (c == '*')
      STACKpop();
    else if (c == '\n')
      continue;
    else
      STACKpush(c);
    printf("Stack count: %d\n", STACKcount());
  }
  return 0;
}
