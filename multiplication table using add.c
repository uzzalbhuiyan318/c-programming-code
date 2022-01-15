#include<stdio.h>
#include<conio.h>
int main()
{
    int n,m;
    int i;
    printf("enter your multiplication number:");
   scanf("%d",&n);
    m=0;
    for(i=1;i<=10;i++){
        m=m+n;
        printf("%d x %d=%d\n",n,i,m);

    }
    getch();
    return 0;
}
