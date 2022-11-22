#include<stdio.h>
int main()
{
    int num1,num2,temp;
    printf("enter two numbers ");
    scanf("%d%d",&num1,&num2);
    printf("Before swap number 1=%d and number two is =%d",num1,num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("afer swap number 1 is=%d and number 2 is=%d",num1,num2);
    return 0;

}