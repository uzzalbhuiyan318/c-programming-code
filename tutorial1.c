//write a c program to find number of day in a month
#include<stdio.h>
#include<conio.h>
int main()
{
    int month,year;
    printf("enter your month number ");
    scanf("%d",&month);
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12 ){
        printf("the month contains 31 days");
    }
    else if(month==4 || month==6 || month==9 || month==11){
        printf("the month contains 30 days");
    }
    else if(month== 2){
        printf("enter your desire year ");
        scanf("%d",&year);
        if(year%4==0 && year%100!=0 || year %400==0){
            printf("the year is leap year\nand this month contains 29 days");
        }
        else {
            printf("the month contains 28 days");
        }

    }else{
            printf("the wrong input");
        }


    getch();
    return 0;
}
