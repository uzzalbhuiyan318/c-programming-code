#include<stdio.h>
#include<conio.h>
int main()
{
    int a ;
    printf("enter your number:");
    scanf("%d",&a);
    if(a<5){
        printf("the number is less than five");
    }
    else
        printf("the number is greater than five");
        getch();
    return 0;
}
