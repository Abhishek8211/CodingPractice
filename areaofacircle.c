#include <stdio.h>
int main ()
// calculate area of a circle
{
    float radius;
    printf("Enter radius");
    scanf("%f", &radius);
    printf("Area is : %f \n", 3.14*radius*radius);
    return 0;
}