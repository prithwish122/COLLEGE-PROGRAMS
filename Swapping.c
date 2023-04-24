#include<stdio.h>
int main()
/*swapping two numbers using two numbers using third variable*/
{
    int num1,num2,t;
    printf("enter 2 numbers ");
    scanf("%d%d",num1,num2);
    t=num1;
    num1=num2;
    num2=t;
    printf("numbers after swapping =%d%d",num1,num2);
    return 0;
}
