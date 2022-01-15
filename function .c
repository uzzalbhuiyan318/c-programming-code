#include<stdio.h>
#include<conio.h>
double add(double num1,double num2)
{
    double sum=num1+num2;
    return sum;
}
int main()
{
    double a,b,c;
    printf("enter your first number:");
    scanf("%lf",&a);
    printf("enter your seacond number:");
    scanf("%lf",&b);
    c=add(a,b);
    printf("summation of the two numbers is %lf",add);
    getch();
    return 0;
}

