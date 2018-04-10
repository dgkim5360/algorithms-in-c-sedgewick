CC=cc
MATHFLAG=-lm

# Section 6.1. Rules of the Game
run-program01: program01
	./$< 20 1

run-exercise01: exercise01.md
	@cat $<

run-exercise02: exercise02.md
	@cat $<

run-exercise05: exercise05.md
	@cat $<

run-exercise06: exercise06.md
	@cat $<


program01: program01-example-array-sort-with-driver.c
	$(CC) -o $@ $<

clean:
	@echo "Cleaning all executable binaries..."
	@$(RM) program01
	@echo "Done."
