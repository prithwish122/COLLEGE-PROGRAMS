#include<stdio.h>
int main()
/*swapping two numbers without using third variable*/
{
    int num1,num2;
    printf("entr two numbers ");
    scanf("%d%d",&num1,&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("the numbers after swapping is number1=%d and number two is =%d",num1,num2);
    return 0;


}