#include<stdio.h>
#include<conio.h>
int main()
{
    double celcius,farenhite;
    printf("enter your celcius temparature:");
    scanf("%lf",&celcius);
    farenhite=(celcius*1.8)+32;
    printf("temperature in farenhite is %.02lf\n",farenhite);
    getch();
    return 0;
}
