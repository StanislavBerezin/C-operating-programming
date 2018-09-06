#include "fib.h"
#include <stdio.h>


void fib(int n) {
	if (n == 1) {
		printf("0\n");
	} else {
		printf("0 1");
		int a = 0;
		int b = 1;
		for (int i = 2; i < n; ++i) {
			int fib = a + b;
			printf(" %d", fib);
			a = b;
			b = fib;
		}
		printf("\n");
	}
}