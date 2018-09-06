CC = c99 
CFLAGS = -Wall # Show all reasonable warnings
LDFLAGS = 

all: fibfork 

fibfork: fibfork.o fib.o

mainfork.o: mainfork.c

fib.o: fib.c

clean:
	rm -f fibfork *.o 
 
.PHONY: clean