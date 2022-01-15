#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum=0;
    printf("enter your last number:");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2){
        sum=sum+i;
    }
    printf("summation of your total series is %d\n",sum);
    getch();
    return 0;
}
