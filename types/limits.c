#include <stdio.h>
int main(void) {
char myChar = 'r';
int k = 72; /* 65 is the ASCII encoding for 'A' */

//based on the encoding if its a char etc
printf("The value printed is %c\n", k);
printf("The value printed is %d\n", k+3);
printf("The value printed is %c\n", k+3);
printf("The value printed is %c\n", myChar + 3);
return 0;
} 