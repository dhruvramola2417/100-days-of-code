//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&n1,&n2,&n3);

    if(n1>n2)
    {
        if(n1>n3)
        {
            printf("Largest is %d",n1);
        }
        else{
            printf("Largest is %d",n3);
        }
    }
    else{
        if(n2>n3)
        {
            printf("Largest is %d",n2);
        }
        else{
            printf("Largest is %d",n3);
        }
    }
}