//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the length and breadth\n");
    scanf("%d%d",&n1,&n2);
    printf("Perimeter = %d\n",(n1+n2)*2);
    printf("Area = %d\n",n1*n2);

    return 0;
}