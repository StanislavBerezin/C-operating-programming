CC = c99 
CFLAGS = -Wall # Show all reasonable warnings
LDFLAGS = 

all: fib

fib: main.o fib.o

main.o: main.c

fib.o: fib.c

clean:
	rm -f fib *.o 
 
.PHONY: clean