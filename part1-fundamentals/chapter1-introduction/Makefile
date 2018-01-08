CC=gcc

run-exercise01: exercise01.md
	cat $<
run-figure3: figure3
	./$<
run-program01: program01
	echo "3 4\n4 9\n8 0\n2 3\n5 6\n2 9\n5 9\n7 3\n4 8\n5 6\n0 2\n6 1\n" | ./$<
run-program02: program02
	echo "3 4\n4 9\n8 0\n2 3\n5 6\n2 9\n5 9\n7 3\n4 8\n5 6\n0 2\n6 1\n5 8\n" | ./$<
run-program03: program03
	echo "0 1\n2 3\n4 5\n6 7\n8 9\n2 1\n6 5\n4 3\n8 7\n" | ./$<

figure3: figure3-quickfind-example.c
	$(CC) -o $@ $<
figure6: figure6-quickunion-example.c
	$(CC) -o $@ $<
program01: program1-quickfind.c
	$(CC) -o $@ $<
program02: program2-quickunion.c
	$(CC) -o $@ $<
program03: program3-weighted-quick-union.c
	$(CC) -o $@ $<
program04: program4-weighted-quick-union-with-path-compression-by-halving.c
	$(CC) -o $@ $<

clean:
	$(RM) figure3 figure6
	$(RM) program01 program02 program03 program04
	$(RM) exercise04 exercise05 exercise06 exercise07 exercise08 exercise14 exercise15 exercise16 exercise17
