#include<stdio.h>
#include<conio.h>
int main()
{
    float x_plus_y,x_minus_y,n,m,x,y;
    printf("enter the value of x plus y=");
    scanf("%f",&x_plus_y);
    n=x_plus_y;
    printf("enter the value of x minus y=");
    scanf("%f",&x_minus_y);
    m=x_minus_y;

    x=(x_plus_y + x_minus_y)/2;
    y=(x_plus_y - x_minus_y)/2;



    printf("x=%.02f\ny=%.02f\n",x,y);
    getch();
    return 0;
}
