/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/
#include <stdio.h>
int main()
{
    int c;
    printf("Enter the percentage\n");
    scanf(" %d",&c); 

    if(c>=90 && c<=100)
    {
            printf("Grade A\n");
    }    
    else if(c>=80 && c<=89)
        {
            printf("Grade B\n");
        }
    else if(c>=70 && c<=79)
        {
            printf("Grade C\n");
        }
    else if(c>=60 && c<=69)
        {
            printf("Grade D\n");
        } 
    else if(c>=0 && c<=59)
        {
            printf("Grade F\n");
        } 
    return 0;
}
