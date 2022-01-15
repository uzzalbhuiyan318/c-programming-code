#include<stdio.h>
#include<conio.h>
double add(double x,double y);
int main()
{
    double a,b,c;
    printf("enter first number:");
    scanf("%lf",&a);
    printf("enter second number:");
    scanf("%lf",&b);
    c=add(a,b);
    printf("%lf\n",c);
    getch();
    return 0;



}
double add(double n1,double n2)
{
    double sum=n1+n2;
    return sum;
}
