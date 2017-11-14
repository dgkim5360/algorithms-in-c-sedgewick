/* Future improvement:
 * 1. to put the typedef and randNum into a separate header file Num.h
 * 2. split into three files:
 *   * an interface, which defines the data structure and declares the
 *     functions to be used to manipulate the data structure
 *   * an implementation of the functions declared in the interface
 *   * a client program that uses the functions declared in the interface to
 *     work at a higher level of a abstraction
 */
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
typedef int Number;

Number randNum() { return rand(); }

int main(int argc, char *argv[]) {
    int i, N = atoi(argv[1]);
    float m1 = 0.0, m2 = 0.0;
    Number x;

    for (i = 0; i < N; ++i) {
	x = randNum();
	m1 += ((float) x)/N;
	m2 += ((float) x*x)/N;
    }
    printf("       Average: %f\n", m1);
    printf("Std. deviation: %f\n", sqrt(m2-m1*m1));
    return 0;
}
