#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,num1,num2,num3,s,result,celcius;
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
        printf("enter 6 for value of squar area\n");
        printf("enter 7 for value of trangle\n");
        printf("enter 8 for value of rectangle\n");
        printf("enter 9 for value of circle\n");
        printf("enter 10 for area of trangle not equal arms\n");
        printf("enter 11 for valume of circle\n");
        printf("enter 12 for force\n");
        printf("enter 13 for displacement\n");
        printf("enter 14 for work\n");
        printf("enter 15 for derivate farenhite to celcius\n");
        scanf("%d",&n);

        switch(n)
        {
        case 1:
            printf("enter your first number:");
            scanf("%d",&num1);
            printf("enter your second number:");
            scanf("%d",&num2);
            result=num1+num2;
            printf("the addition of two number is %d\n",result);
            break;
        case 2:
            printf("enter your first number: ");
            scanf("%d",&num1);
            printf("enter your second number:");
            scanf("%d",&num2);
            result=num1-num2;
            printf("the subtraction of two number is %d\n",result);
            break;
        case 3:
            printf("enter your first number:");
            scanf("%d",&num1);
            printf("enter your second number:");
            scanf("%d",&num2);
            result=num1*num2;
            printf("the multiplication of two number is %d\n",result);
            break;
        case 4:
            printf("enter your first number:");
            scanf("%d",&num1);
            printf("enter your second number:");
            scanf("%d",&num2);
            result=num1/num2;
            printf("the division of two number is %d\n",result);
            break;
        case 5:
            printf("enter your first number:");
            scanf("%d",&num1);
            printf("enter your second number:");
            scanf("%d",&num2);
            result=num1%num2;
            printf("the remainder of two number is %d\n",result);
            break;
        case 6:
            printf("enter your first arm length:\n");
            scanf("%d",&num1);
            printf("enter your second arm length:\n");
            scanf("%d",&num2);
            result=num1*num2;
            printf("the area of squar is %d\n",result);
            break;
        case 7:
            printf("enter your horizontal length:\n");
            scanf("%d",&num1);
            printf("enter your height:\n");
            scanf("%d",&num2);
            result=.5*num1*num2;
            printf("the area of trangle is %d\n",result);
            break;
        case 8:
            printf("enter your length:\n");
            scanf("%d",&num1);
            printf("enter your width:\n");
            scanf("%d",&num2);
            result=num1*num2;
            printf("the area of rectangle is %d\n",result);
            break;
        case 9:
            printf("enter your redius:\n");
            scanf("%d",&num1);
            result=3.14*num1*num1;
            printf("the area of circle is %d\n",result);
            break;
        case 10:
            printf("enter your base length:\n");
            scanf("%d",&num1);
            printf("enter your height:\n");
            scanf("%d",&num2);
            printf("enter your polygon\n");
            scanf("%d",&num3);
            s=(num1+num2+num3)/2;
            result=sqrt(s*(s-num1)*(s-num2)*(s-num3));
            printf("the area of trangle is %d\n",result);
            break;
        case 11:
            printf("enter your redius:\n");
            scanf("%d",&num1);
            result=(4*3.14*num1*num1*num1)/3;
            printf("the volume of circle is %d\n",result);
            break;
        case 12:
            printf("enter the value of mass:\n");
            scanf("%d",&num1);
            printf("enter the value of  accelaration:\n");
            scanf("%d",&num2);
            result=num1*num2;
            printf("the value of force is %d\n",result);
            break;
        case 13:
            printf("enter the value of velocity:\n");
            scanf("%d",&num1);
            printf("enter the value of time:\n");
            scanf("%d",&num2);
            result=num1*num2;
            printf("the value of displacement is %d\n",result);
            break;
        case 14:
            printf("enter the value of force:\n");
            scanf("%d",&num1);
            printf("enter the value of displacement:\n");
            scanf("%d",&num2);
            result=num1*num2;
            printf("the value of work is %d\n",result);
            break;
        case 15:
            printf("enter the temperature of farenhite\n");
            scanf("%d",&num1);
            celcius=(5*(num1-32))/9;
            printf("the temperature of celcius is %d\n",celcius);
            break;
        default :("the input is wrong");



        }
        printf("do you want to continue y/n?if you want to continue press 'y'\n");
        option=getche();
    }
    while(option=='y');

    getch();
    return 0;
}

