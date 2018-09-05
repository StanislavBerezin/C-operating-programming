
// NOTE: this is C99 code, compile with c99 instead of gcc, or pass -std=c99 to gcc as a parameter

#include <stdio.h>
#include <stdlib.h>

#define TEXT_SIZE 15 // length of text array
#define NUMBER_SIZE 7 // length of number array

char text[] = {'B','R','A','D','L','E','Y',' ', 'J','O','N','E','S', 0, 'X'};
int number[] = {66, 82, 65, 68, 76, 69, 89};

int main(int argc, char **argv) {
   // type 'man -s 3 printf' at the linux terminal to learn how printf() works
//    printf("Print name of program using printf()...\n %s", argv[0]);
   printf("The porgramm name is %s \n" , argv[0]);

   printf("\n\nPrint program arguments using printf()...\n ");

   //we start from 0 and comparing against the number of arguments, and 
   // through argv we print them
   for(int i = 0; i < argc; ++i){
       printf("%s \n", argv[i]);
   }



   printf("\n \n Iterate over text array and print characters using array index operator []...\n");
   //simpy itterating through the arguments
    // this method is the index operator (the regular style)
   for(int i =0; i< TEXT_SIZE; i++){
       printf("%c", text[i]);
   }



   printf("\n\nIterate over text array and print chracters using offsets *(text + offset)...\n");
    // a pointer of text is incremented by 1;
   for (int i = 0; i < TEXT_SIZE; ++i) {
        printf("%c", *(text + i));
    }

  //we get the pointer of text
    char *p = text;
    printf("\n\nIterate over text array and print characters by incrementing pointer...\n");
    for (int i=0; i < TEXT_SIZE; ++i) {
        // we know that an array pointer refers to the first element so
        //then from each we print a letter and increment it
        printf("%c", *p);
		p++;
    }

   printf("\n\nPrint text array as string using printf()...\n");
   printf("%s", text);

   printf("\n\nPrint number array as decimals...\n");
   for (int i=0; i < NUMBER_SIZE; ++i) {
        //then from each we print a letter and increment it
        printf("%d ", number[i]);
    }

   printf("\n\nPrint number array as characters...\n");
    for (int i = 0; i < NUMBER_SIZE; ++i) {
        printf("%c", number[i]);
    }
    printf("\n");

   return EXIT_SUCCESS;
}