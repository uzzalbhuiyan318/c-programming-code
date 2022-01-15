#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("enter your multiplication number:");
    scanf("%d",&n);

    for(i=1 ;i<=10 ;i=i+1 ){
        printf("%d x %d=%d\n",n,i,n*i);


    }
    getch();
    return 0;
}
