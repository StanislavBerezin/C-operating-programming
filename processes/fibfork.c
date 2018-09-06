#include "fib.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char **argv) {
	if (argc != 2) {
		printf("usage: %s [print the first n number of the Fibonacci sequence]\n", argv[0]);
		return EXIT_FAILURE;
	} 
	
	int n = atoi(argv[1]);
	if (n < 1) {
		n = 1;
	}

	// fork another process
	pid_t pid = fork();

	if (pid < 0) { 
		// error occurred
                fprintf(stderr, "Fork Failed\n");
		return EXIT_FAILURE;
        } else if (pid == 0) { 
		// child process
		fib(atoi(argv[1]));
        } else { 
		// parent process
                wait(NULL);
        }

	return EXIT_SUCCESS;
}