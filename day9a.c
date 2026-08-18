//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    int r1,r2;
    printf("Enter a,b&c for the equation ax^2+bx+c\n");
    scanf("%d%d%d",&a,&b,&c);

    int d=pow(b,2)-4*a*c;
    
    if(d>=0)
    {
        
        if(d==0)
        {
            r1=(-b+sqrt(d))/(2*a);
            printf("Roots are real and same: %d\n",r1);
        }
        else
        {
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
            printf("Roots are real and different: %d,%d\n",r1,r2);
        }
    }
    else{
        printf("Roots are complex\n");
    }
    return 0;
}