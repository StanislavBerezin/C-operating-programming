#include <stdio.h>

//argv here is the arguments that we are going to pass in
int main(int argc, char *argv[]) {
    //argc in this case represents the number of arguments
    printf("The number of command line arguments is %d\n", argc);
    //here we access what that argument was
    printf("The name of the program is %s\n", argv[0]);
    return 0;
} 