/*problem statement:write a C program to check whether the given marks is fail,pass or  a+
and take input from user.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;
    printf("Enter your obtained marks:");
    scanf("%d",&marks);
    if(marks>=40 && marks<=100 && marks>=80 && marks<=100)
    {
        printf("He/She has passed the exam\n");

        printf("And he/she has got A+");

    }
    else
    {
        printf("He/She has failed");
    }
    getch();
    return 0;
}
