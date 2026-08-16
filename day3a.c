#include <stdio.h>
int main()
{
    int c;
    printf("Enter temperature in celsius\n");
    scanf("%d",&c);
    int f = 1.8*c+32;
    printf("Temperature in fahrenheit is %d\n",f);

    return 0;
}