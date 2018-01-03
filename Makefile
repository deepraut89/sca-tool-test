CC=gcc
CFLAGS=-I.

all: test
	$(CC) -o test.o test.c -I.
clean:
	rm -rf test.o test
