//write a c program to print multiplication table using for loop.

#include<stdio.h>
#include<conio.h>
int main()
{
    double i,n;
    printf("enter your table number:");
    scanf("%lf",&n);
    for(i=1;i<=10;i++){
        printf("%0.1lf x %0.0lf = %0.1lf\n",n,i,(n*i));
    }


    getch();
    return 0;
}
