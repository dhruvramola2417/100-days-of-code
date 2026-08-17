//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character\n");
    scanf(" %c",&c); 

    if(c>=65 && c<=90)
    {
            printf("Uppercase alphabet\n");
    }    
    else if(c>=97 && c<=122)
        {
            printf("Lowercase alphabet\n");
        }
    else if(c>=48 && c<=57)
        {
            printf("Digit\n");
        }
    else if(c>=38 && c<=47 ||c>=58 &&c<=64 ||c>=91 && c<=96)
        {
            printf("Special character\n");
        } 
    return 0;
}
