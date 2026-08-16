//Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);

    n3=n1;
    n1=n2;
    n2=n3;

    printf("After swap: %d %d\n",n1,n2);
    return 0;
}