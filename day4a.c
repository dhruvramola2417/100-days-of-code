//Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main()
{
    int n1,n2;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);

    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;

    printf("After swap: %d %d\n",n1,n2);
    return 0;
}