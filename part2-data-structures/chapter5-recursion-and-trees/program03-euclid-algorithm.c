/* Program 5.3: Euclid's algorithm
 * One of the oldest-known algorithms, dating back over 2000 years, is this
 * recursive method for finding greatest common divisors of two integers.
 */
#include <stdio.h>

int gcd(int m, int n) {
  if (n == 0)
    return m;
  return gcd(n, m%n);
}

int main() {
  int result = gcd(314159, 271828);
  printf("%d\n", result);
  return 0;
}
