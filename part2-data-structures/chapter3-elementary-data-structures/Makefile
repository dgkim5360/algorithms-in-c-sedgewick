CC=gcc -Wall
CCFLAGS=-lm

program02: program02-types-of-numbers.c
	$(CC) -o $@ $< $(CCFLAGS)
program05: program05-sieve-for-eratosthenes.c
	$(CC) -o $@ $<
program06: program06-dynamic-memory-allocation-for-array.c
	$(CC) -o $@ $<
program07: program07-coin-flipping-simulation.c
	$(CC) -o $@ $<
program08: program08-closest-point-computation.c
	$(CC) -o $@ $< program04-point-data-type-implementation.c $(CCFLAGS)
program09: program09-circular-list-example-josephus-problem.c
	$(CC) -o $@ $<
program10: program10-list-reversal.c
	$(CC) -o $@ $<
program11: program11-list-insertion-sort.c
	$(CC) -o $@ $<
program13: program13-list-allocation-for-josephus.c
	$(CC) -o $@ $< list.c
program15: program15-string-search.c
	$(CC) -o $@ $<
program16: program16-two-dimensional-array-allocation.c
	$(CC) -o $@ $<
program17: program17-sorting-an-array-of-strings.c
	$(CC) -o $@ $<
program18: program18-adjacency-matrix-graph-representation.c
	$(CC) -o $@ $<
program19: program19-adjacency-lists-graph-representation.c
	$(CC) -o $@ $<

exercise13: sieve.c
	$(CC) -o $@ $@.c $<
exercise24: linkedlist.c
	$(CC) -o $@ $@.c $<
exercise25: linkedlist.c
	$(CC) -o $@ $@.c $<
exercise26: linkedlist.c
	$(CC) -o $@ $@.c $<
exercise27: linkedlist.c
	$(CC) -o $@ $@.c $<
exercise34: list.c list-exercise.c
	$(CC) -o $@ $@.c list.c list-exercise.c

clean:
	$(RM) program02 program05 program06 program07 program08 program09 program10 program11 program13 program15 program16 program17 program18 program19
	$(RM) exercise01 exercise11 exercise12 exercise13 exercise17 exercise24 exercise25 exercise26 exercise27 exercise28 exercise34 exercise56 exercise57 exercise59 exercise61
