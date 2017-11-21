CC=gcc

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
