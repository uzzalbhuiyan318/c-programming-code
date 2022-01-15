//problem statement : write a c program to convert temperature from farenhite to celcius
#include<stdio.h>
#include<conio.h>
int main()
{
    double celcius,farenhite;
    printf("enter your temperature of farenhite:");
    scanf("%lf",&farenhite);
    celcius=(.56*farenhite)-17.78;
    printf("the temperature of celcius is %.02lf\n",celcius);
    getch();
    return 0;
}
