#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num1,num2,result1,result2;
    float num3,num4,result3,result4;
    printf("enter the first integer number:");
    scanf("%d",&num1);
    printf("enter the second integer number:");
    scanf("%d",&num2);
    result1=num1+num2;
    result2=num2-num1;
    printf("the sum of the two integer number is %d\n the difference of the two integer number is %d\n",result1,result2);
    printf("enter your first float number:");
    scanf("%f",&num3);
    printf("enter your second float number:");
    scanf("%f",&num4);
    result3=num3+num4;
    result4=num4-num3;
    printf("the sum of the two float number is %f\n the difference of the two float number is %f\n",result3,result4);



    return 0;
}
