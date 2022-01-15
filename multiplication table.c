#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    printf("enter your multiplication number:");
    scanf("%d",&n);
    while(i<=10){
        printf("%d x %d=%d\n",n,i,n*i);
        i=i+1;
    }
    getch();
    return 0;
}
