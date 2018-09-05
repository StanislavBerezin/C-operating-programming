#include <stdio.h>
int sumNumbers(int a, int b);/* function prototype */
#define PI 3.141592653589793238462643383279502884
int findVolume(float a, float b);
int main(void) {
    //THE SUM NUMBER EXAMPLE 

    // int a, b, result;
    // printf("Enter two integers separated by a space: ");
    // scanf("%d%d", &a, &b);
    // result = sumNumbers(a,b);
    // printf("\nThe sum of %d and %d is %d\n", a, b, result);

    // FINDING CYLINDER VOLUME
    float radius, height, result;
    printf("Enter the radius of a cylinder: \n");
    scanf("%f", &radius);
    printf("Enter the height of cylinder: \n");
    scanf("%f", &height);
    result = findVolume(radius, height);
    printf("Your radius is %f and height %f which results in %f \n", radius, height, result);
    return 0;
}
int sumNumbers(int x, int y) {
return x+y;
} 

int findVolume(float radius, float height){
    float volume = PI * radius * radius * height;
    return volume;
}