#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,gcd,lcm;
    printf("enter your first number:");
    scanf("%d",&a);
    printf("enter your second number:");
    scanf("%d",&b);
    printf("enter your gcd:");
    scanf("%d",&gcd);
    lcm=(a*b)/gcd;
    printf("the LCM is %d\n",lcm);
    getch();
    return 0;
    }
