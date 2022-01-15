#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2;
    printf("enter your first number:");
    scanf("%d",&num1);
    printf("enter your second number:");
    scanf("%d",&num2);
    if(num1>num2)
    {
        printf("%d is greater than %d",num1,num2);
    }
    else if (num1num2)
    {
        printf("the two numbers are equal");
    }
    else
    {
        printf("%d is the smallest number",num1);
    }
    getch();
    return 0;
}
