CC=gcc
CCFLAGS=-lm

program2: program2-types-of-numbers.c
	$(CC) -o $@ $< $(CCFLAGS)
program5: program5-sieve-for-eratosthenes.c
	$(CC) -o $@ $<
program6: program6-dynamic-memory-allocation-for-array.c
	$(CC) -o $@ $<
program7: program7-coin-flipping-simulation.c
	$(CC) -o $@ $<
program8: program8-closest-point-computation.c
	$(CC) -o $@ $< program4-point-data-type-implementation.c $(CCFLAGS)
exercise13: sieve.c
	$(CC) -o $@ $@.c $<

clean:
	$(RM) program2 program5 program6 program7 program8
	$(RM) exercise01 exercise11 exercise12 exercise13 exercise17
