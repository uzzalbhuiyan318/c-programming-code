#include<stdio.h>
#include<conio.h>
int main()
{
    int last_number,sum;
    printf("enter the last number of your series=");
    scanf("%d",&last_number);
    sum=(last_number*(last_number + 1))/2;
    printf("summation of the series is %d\n", sum);
    getch();
    return 0;
}
