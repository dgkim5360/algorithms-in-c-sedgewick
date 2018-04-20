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

# Section 6.2. Selection Sort
run-program02: program02
	./$< 20 1

run-exercise11: exercise11.md
	@cat $<

program02: program02-selection-sort.c
	$(CC) -o $@ $<

# Section 6.3. Insertion Sort
run-program03: program03
	./$< 20 1

run-exercise15: exercise15.md
	@cat $<

run-exercise16: exercise16
	./$< 20 1

program03: program03-insertion-sort.c
	$(CC) -o $@ $<

# Section 6.4. Bubble Sort
run-program04: program04
	./$< 20 1

run-exercise20: exercise20.md
	@cat $<

program04: program04-bubble-sort.c
	$(CC) -o $@ $<

# Section 6.5. Shellsort
run-program05: program05
	./$< 20 1

program05: program05-shellsort.c
	$(CC) -o $@ $<

clean:
	@echo "Cleaning all executable binaries..."
	@$(RM) program01 program02 program03 program04 program05
	@$(RM) exercise16
	@echo "Done."
