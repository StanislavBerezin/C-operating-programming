#include <stdio.h>
int main()
{
    // VERSION 1
    // printf("Enter a character: ");
    // //ivoking getChar
    // int myChar = getchar();
    // printf("The integer value of this character is %d\n", myChar);

    // VERSION 2
    printf("enter a char");

    char myChar;
    scanf("%c", &myChar);
    //by saing %d we will get the ASCII value
    printf("your char is %d \n", myChar );
    return 0;
}