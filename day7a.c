//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter year\n");
    scanf("%d",&n);

    if(n%400==0 || n%4==0 && n%100!=0)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not a leap year");
    }
    return 0;
}