#include<stdio.h>
#include<conio.h>
int main()
{
    int row,col,n;
    printf("enter your desire number:");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
       for(col=1;col>=row;col++){
        printf("*");
       }
       printf("\n");
    }

    getch();
    return 0;

}
