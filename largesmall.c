#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,big,small;
    printf("enter 4numbers");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
    /*logic to find the large value*/
    big=num1;
    if(big<num2)
    big=num2;
    if(big<num3)
    big=num3;
    if(big<num4)
    big=num4;
    printf("largest number is=%d",big);
    /*logic to find the smallest number*/
    small=num1;
    if(small>num2)
    small=num2;
    if(small>num3)
    small=num3;
    if(small>num4)
    small=num4;
    printf("smallest number=%d",small);
    return 0;
}