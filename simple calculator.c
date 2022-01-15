#include<stdio.h>
#include<conio.h>
int main()
{
    int n,num1,num2,result;
    char option;
    //char y;
    do
    {
        printf("\nwhich operation do you want to do?\n");
        printf("enter 1 for addition\n");
        printf("enter 2 for subtraction\n");
        printf("enter 3 for multiplication\n");
        printf("enter 4 for division\n");
        printf("enter 5 for remainder\n");
        scanf("%d",&n);
        printf("enter your first number:");
        scanf("%d",&num1);
        printf("enter your second number:");
        scanf("%d",&num2);
        switch(n)
        {
        case 1:
            result=num1+num2;
            printf("the addition of two number is %d\n",result);
            break;
        case 2:
            result=num1-num2;
            printf("the subtraction of two number is %d\n",result);
            break;
        case 3:
            result=num1*num2;
            printf("the multiplication of two number is %d\n",result);
            break;
        case 4:
            result=num1/num2;
            printf("the division of two number is %d\n",result);
            break;
        case 5:
            result=num1%num2;
            printf("the remainder of two number is %d\n",result);
            break;


        default:
            ("the input is wrong");


        }
        printf("do you want to continue y/n?\n");
        option=getche();
    }
    while(option=='y');

    getch();
    return 0;
}
