#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks");
    scanf("%d",&marks);
    if(marks>=90)
    printf("grade=A+");
    if(marks>=80&&marks<90)
    printf("grade=A");
    if(marks>=70&&marks<80)
    printf("grade=B");
    if(marks>=60&&marks<70)
    printf("grade=c");
    if(marks<40)
    printf("FAIL");
    return 0;
    
    
}