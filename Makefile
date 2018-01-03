CC=gcc
CFLAGS=-I.

all: test1 test2
	mv test1.o test1; mv test2.o test2
test1:
	$(CC) -o test1.o test1.c -I.
test2:
	$(CC) -o test2.o test2.c -I.
clean:
	rm -rf test1.o test1 test2.o test2
