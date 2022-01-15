// problem statement:write a c program to calculate the area of equiliteral triangle.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    float a,s;
    printf("enter your arm length :");
    scanf("%f",&a);
    s=(sqrt(3)/4)*pow(a,2);
    printf("the area of this triange is %f",s);
    getch();
    return 0;


}
