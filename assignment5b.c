// write a c program to identify the maximum number among three integer number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("enter your first number:");
    scanf("%d",&a);
    printf("enter your second number:");
    scanf("%d",&b);
    printf("enter your third nubmer:");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is the maximum number",a);
    }
    else if(b>c){
        printf("%d is the maximum number",b);
    }
    else {
        printf("%d is the maximum number",c);
    }
    getch();
    return 0;
}
