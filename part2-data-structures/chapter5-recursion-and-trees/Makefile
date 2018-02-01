CC=gcc -Wall --pedantic-errors

# Section 5.1. Recursive Algorithms
run-program01: program01-factorial-function.c
	@cat $<
run-program02: program02-a-questionable-recursive-program.c
	@cat $<
run-program03: program03-euclid-algorithm.c program03
	@cat $<
	./program03 314159 271828
run-program04: program04-recursive-program-to-evaluate-prefix-expressions.c program04
	@cat $<
	./program04 "* + 7 * * 4 6 + 8 9 5"
run-program05: program05-recursive-functions-for-linked-lists.c
	@cat $<
run-exercise01: exercise01
	./$< 100
run-exercise02: exercise02
	./exercise02 1000 997
	./exercise02 10000 997
	./exercise02 100000 997
	./exercise02 1000000 997
run-exercise05: exercise05
	./$< 314159 271828
run-exercise06: exercise06
	./$< 89 55
run-exercise08: exercise08
	./$< "+ * * 12 12 12 144"

# Section 5.2. Divide and Conquer
run-program06: program06-divide-and-conquer-to-find-the-maximum.c
	@cat $<
run-program07: program07-towers-of-hanoi.c
	@cat $<
run-program08: program08-divide-and-conquer-to-draw-a-ruler.c
	@cat $<
run-program09: program09-nonrecursive-program-to-draw-a-ruler.c
	@cat $<


program03: program03-euclid-algorithm.c
	$(CC) -o $@ $<
program04: program04-recursive-program-to-evaluate-prefix-expressions.c
	$(CC) -o $@ $<

exercise01: exercise01.c
	$(CC) -o $@ $< -lm

clean:
	@echo "Cleaning all executable binaries..."
	@$(RM) program03 program04
	@$(RM) exercise01 exercise02 exercise05 exercise06 exercise08
	@echo "Done."
