#include<stdio.h>
#include<conio.h>
int main()
{
    int n,num1,num2,result;
    char button;
    //char y;
    do
    {
        printf("which action do you want to do?\n");
        printf("Enter 1 for addition\n");
        printf("Enter 2 for subtraction\n");
        printf("Enter 3 for multiplication\n");
        printf("Enter 4 for division\n");
        printf("Enter 5 for remainder\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            printf("Enter your first number:");
            scanf("%d",&num1);
            printf("Enter your second number:");
            scanf("%d",&num2);
            result=num1+num2;
            printf("the addition of two number is %d\n",result);
            break;
        case 2:
            printf("Enter your first number:");
            scanf("%d",&num1);
            printf("Enter your second number:");
            scanf("%d",&num2);
            result=num1-num2;
            printf("the subtraction of two number is %d\n",result);
            break;
        case 3:
            printf("Enter your first number:");
            scanf("%d",&num1);
            printf("Enter your second number:");
            scanf("%d",&num2);
            result=num1*num2;
            printf("the multiplication of two number is %d\n",result);
            break;
        case 4:
            printf("Enter your first number:");
            scanf("%d",&num1);
            printf("Enter your second number:");
            scanf("%d",&num2);
            result=num1/num2;
            printf("the division of two number is %d\n",result);
            break;
        case 5:
            printf("Enter your first number:");
            scanf("%d",&num1);
            printf("Enter your second number:");
            scanf("%d",&num2);
            result=num1%num2;
            printf("the remainder of two number is %d\n",result);
            break;


        default:
            ("the input is wrong");


        }
        printf("Do you want to continue?if you want to continue,please press 'y'\n");
        button=getche();
    }while(button=='y');


    getch();
    return 0;
}
