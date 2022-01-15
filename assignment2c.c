//write a c program to check whether a given number is divisible by 3 and 5 and not divisible by 6
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter your desire number:");
    scanf("%d",&n);
    if(n%3==0 && n%5==0 && n%6!=0){
        printf("The condition is satisfied\n");
    }
    else{
        printf("The condition is not satisfied\n");

    }
    getch();
    return 0;

}
