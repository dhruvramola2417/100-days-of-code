//Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
#include <math.h>
int main()
{
    int r;
    printf("Enter the radius\n");
    scanf("%d",&r);
    float c = 2*3.14*r;
    float a = 3.14*r*r;
    printf("Circumference = %f\n",c);
    printf("Area = %f\n",a);

    return 0;
}