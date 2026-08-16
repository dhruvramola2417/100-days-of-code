//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main()
{
    int t,h,m,s;
    printf("Enter seconds\n");
    scanf("%d",&t);

    h=t/3600;
    m=(t%3600)/60;
    s=(t%3600)%60;

    printf("%d:%d:%d",h,m,s);
    return 0;
}