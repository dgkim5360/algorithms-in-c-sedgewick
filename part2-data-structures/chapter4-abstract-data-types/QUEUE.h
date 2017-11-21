/* Program 4.9: FIFO queue ADT interface
 * The interface is identical to the pushdown stack interface of Program 4.1,
 * except for the names of the structure. The two ADTs differ only in the
 * specification, which is not reflected in the code.
 */
void QUEUEinit(int);
int QUEUEempty();
void QUEUEput(Item);
Item QUEUEget();
