CC=cc
MATHFLAG=-lm

# Section 6.1. Rules of the Game
run-program01: program01
	./$< 20 1

program01: program01-example-array-sort-with-driver.c
	$(CC) -o $@ $<

clean:
	@echo "Cleaning all executable binaries..."
	@$(RM) program01
	@echo "Done."
