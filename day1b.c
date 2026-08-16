//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main()
{
    int n1,n2;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    printf("Sum of the two numbers is %d\n",n1+n2);
    printf("Difference of the two numbers is %d\n",n1-n2);
    printf("Product of the two numbers is %d\n",n1*n2);
    if(n2!=0)
    {
    printf("Quotient of the two numbers is %d\n",n1/n2);
    }
    else
    {
        printf("Division by zero is not possible\n");
    }

    return 0;
}