// Introduction to memory management in C
// NOTE: this is C99 code, compile with c99 instead of gcc, or pass -std=c99 to gcc as a parameter

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH_1 10
#define ARRAY_LENGTH_2 20

int main(int argc, char **argv) {
    // type "man malloc" at a linux terminal to read about malloc and friends

	int *ptr;
    // allocate an array of 10 integers using malloc()
    int *a = (int *)malloc(sizeof(int) * ARRAY_LENGTH_1);
    if (a == NULL) {
        printf("memory allocation failed\n");
        return EXIT_FAILURE;
    }

    
    printf("an array of 10 integers allocated using malloc():\n");
    //this makes an array based on on variable A used before
    for (int i = 0; i < ARRAY_LENGTH_1; ++i) {
        printf("%d", a[i]);
    }
    printf("\n\n");

    //it goes through an array and makes puts a number from 0-9
    for (int i = 0; i < ARRAY_LENGTH_1; ++i) {
        a[i] = i;
    }

    // printing that array
    printf("an array of 10 integers 0..9:\n");
    for (int i = 0; i < ARRAY_LENGTH_1; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n\n");

	//ptr = a; // added by Maolin

    // reallocate the array of 10 integers to 20 integers using realloc()
    a = realloc(a, sizeof(int) * ARRAY_LENGTH_2);
    if (a == NULL) {
       printf("memory reallocation failed\n");
       return EXIT_FAILURE;
    }

	//free(ptr);  // added by Maolin

    // print array of 20 integers, the new ones are zerios
    printf("an array of 20 integers of reallocated using realloc():\n");
    for (int i = 0; i < ARRAY_LENGTH_2; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // freeing that memory
    free(a);

    // print pointer of free'd memory as an integer, what happens if you dereference this pointer?
    printf("free'd memory had address:\n");
    printf("%p\n\n", a);

    // using calloc()
    a = (int *)calloc(ARRAY_LENGTH_2, sizeof(int));
    if (a == NULL) {
        printf("memory allocation failed\n");
        return EXIT_FAILURE;
    }
    
    // printing array of 20 integers
    printf("an array of 20 integers allocated using calloc():\n");
    for (int i = 0; i < ARRAY_LENGTH_2; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // free memory for 20 integers allocated by calloc()
    free(a);

    return EXIT_SUCCESS;
}
