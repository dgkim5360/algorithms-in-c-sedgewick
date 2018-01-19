CC=gcc -Wall --pedantic

program03: program03-euclid-algorithm.c
	$(CC) -o $@ $<
program04: program04-recursive-program-to-evaluate-prefix-expressions.c
	$(CC) -o $@ $<

exercise01: exercise01.c
	$(CC) -o $@ $< -lm

clean:
	@echo "Cleaning all executable binaries..."
	@$(RM) program03 program04
	@$(RM) exercise01
	@echo "Done."
