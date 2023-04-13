#include<stdio.h>
int main()
{
    float cent,fahr;
    printf("enter the temperature in fahrenheit");
    scanf("%f",&fahr);
    cent=(fahr-32)*(5.0/9.0);
    printf("temperature in centigrade is=%f",cent);
    return 0;


}
