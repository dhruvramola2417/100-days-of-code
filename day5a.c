//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main()
{
    int p,r,t;
    float si,ci;
    printf("Enter principal,rate and time.\n");
    scanf("%d%d%d",&p,&r,&t);
    
    si=(float)p*r*t/100;
    ci=p*pow(1+(float)r/100,t)-p;

    printf("Simple Interest= %f, Compound Interest= %f\n",si,ci);
    return 0;
}