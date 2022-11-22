#include<stdio.h>
int main()
{
    int year;
    char choice;
    
    do
    {
        printf("enter a year");
        scanf("%d",&year);
        if(year%400==0)
        printf("%d year is a leap year",year);
        else if(year%100==0) 
        printf("%d year is not a leap year",year);
        else if(year%4==0)
        printf("%d is a leap year",year);
        else
        printf("not a leap year");

        printf("do you want to continue(y/n)");
        scanf("%d",&choice);
        

    }while(choice=='y');
    return 0;

}