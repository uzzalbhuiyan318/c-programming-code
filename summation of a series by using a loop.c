#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum=0;
    printf("enter your last number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("summation of the series is %d\n",sum);
    getch();
    return 0;
}
