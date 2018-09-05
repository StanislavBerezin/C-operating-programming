#include <stdio.h>

int main(int argc, char *argv[]) {
	for (int i=0; i < argc; i++) {
		printf("The number of command line arguments is %d\n", argc);
		printf("The name of the program is %s\n", argv[i]);
	}
	return 0;
}
