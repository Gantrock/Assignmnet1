#compiler
CC=gcc
#linker
LD=gcc
#include file directory
CFLAGS=-std=c99 -I.
#linker rule
testSort: main.o insertionSort.o sort1.o sort2.o
# gcc -o testSort main.o insertionSort.o
	$(LD) -o testSort main.o insertionSort.o sort1.o sort2.o
#compiler rules
main.o: main.c
#gcc -c -I. main.c
	$(CC) -c $(CFLAGS) main.c sort1.c sort2.c
insertionSort.o:
	gcc -c insertionSort.c insertionSort.h
sort1.o:
	gcc -c sort1.c sort1.h
sort2.o:
	gcc -c sort2.c sort2.h
#clean up procedure
clean:
	rm *.o
