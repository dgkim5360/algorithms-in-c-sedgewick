#include <stdio.h>
#define N 10

void quickfind(int p, int q, int *id) {
	int i, t;

	if (id[p] == id[q])
		return;
	for (t = id[p], i = 0; i < N; i++)
		if (id[i] == t)
	    id[i] = id[q];
}

void print_id(const int *id) {
	int i;
    
	for (i = 0; i < N; i++)
		printf("%d ", id[i]);
}

void print_header(const int *id) {
	printf("p q\t");
	print_id(id);
	printf("\n\n");
}

void process_step(const int p, const int q, int *id) {
	quickfind(p, q, id);
	printf("%d %d\t", p, q);
	print_id(id);
	printf("\n");
}

int main() {
	int i, id[N];

	for (i = 0; i < N; i++)
		id[i] = i;
	print_header(id);
	process_step(3, 4, id);
	process_step(4, 9, id);
	process_step(8, 0, id);
	process_step(2, 3, id);
	process_step(5, 6, id);
	process_step(2, 9, id);
	process_step(5, 9, id);
	process_step(7, 3, id);
	process_step(4, 8, id);
	process_step(5, 6, id);
	process_step(0, 2, id);
	process_step(6, 1, id);

	return 0;
}
