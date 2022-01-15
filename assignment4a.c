//problem statement:swapping interchange two variables using third variable....
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,temp;
    printf("enter your first number 'a' is :");
    scanf("%d",&a);
    printf("enter your second number 'b' is :");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("\nbefore swapping\na=%d\nb=%d",temp,a);
    printf("\nAfter swapping\na=%d\nb=%d",a,temp);
    getch();
    return 0;
}
