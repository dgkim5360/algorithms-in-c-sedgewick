CC=gcc -Wall --pedantic
STACKARRAY=STACKarray.c
STACKLIST=STACKlist.c
UF=UF.c

program02: program02-postfix-expression-evaluation.c
	$(CC) -o $@-array $< $(STACKARRAY)
program03: program03-infix-to-postfix-conversion.c
	$(CC) -o $@-list $< $(STACKLIST)
program07: program07-equivalence-relations-adt-client.c
	$(CC) -o $@ $< $(UF)

exercise18:
	$(CC) -o $@ $@.c $<
exercise19:
	$(CC) -o $@-array $@.c $(STACKARRAY)
	$(CC) -o $@-list $@.c $(STACKLIST)
exercise20:
	$(CC) -o $@ $@.c $(STACKARRAY)
exercise21:
	$(CC) -o $@ exercise20.c $(STACKLIST)

clean:
	$(RM) program02-array program03-list program07
	$(RM) exercise18 exercise19-array exercise19-list exercise20 exercise21
