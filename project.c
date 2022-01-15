#include<stdio.h>
#include<conio.h>
int main()
{
    int n,num1,num2,result;
    char button;
    do{
        printf("\nwhat action do you want to do?\n");
        printf("Enter 1 for addition\n");
        printf("Enter 2 for subtraction\n");
        printf("Enter 3 for multiplication\n");
        printf("Enter 4 for division\n");
        printf("Enter 5 for remainder\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1: printf("Enter your first number:");
            scanf("%d",&num1);
            printf("Enter your second number:");
            scanf("%d",&num2);
            result=num1+num2;
            printf("The addition of two number is %d\n",result);
            break;

            case 2: printf("Enter your first number:");
            scanf("%d",&num1);
            printf("Enter your second number:");
            scanf("%d",&num2);
            result=num1-num2;
            printf("The subtraction of two number is %d\n",result);
            break;

            case 3: printf("Enter your first number:");
            scanf("%d",&num1);
            printf("Enter your second number:");
            scanf("%d",&num2);
            result=num1*num2;
            printf("The multiplication of two number is %d\n",result);
            break;

            case 4: printf("Enter your first number:");
            scanf("%d",&num1);
            printf("Enter your second number:");
            scanf("%d",&num2);
            result=num1/num2;
            printf("The division of two number is %d\n",result);
            break;

            case 5: printf("Enter your first number:");
            scanf("%d",&num1);
            printf("Enter your second number:");
            scanf("%d",&num2);
            result=num1%num2;
            printf("The remainder of two number is %d\n",result);
            break;

            default : ("The input is not valid\n");
        }
        printf("\nDo you want to continue?if you want to continue please press 'y'\n");
        button=getche();
    }while(button=='y');
    getch();
    return 0;
}
