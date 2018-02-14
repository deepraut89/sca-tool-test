CC=gcc
vpath %.c src
vpath %.h include

CFLAGS=-I include

.PHONY: all
all: test1 test2 test3
	
test1: test1.c
	$(CC) $< -o $@
test2: test2.c
	$(CC) $< -o $@
test3: test3.c test3_func.o
	$(CC) $(CFLAGS) $^ -o $@
test3_func.o: test3_func.c test3_func.h
	$(CC) -c $(CFLAGS) $<
	
clean:
	rm -rf *.o test1 test2 test3
