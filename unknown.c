#include<stdio.h>
#include<conio.h>
int main()
{
    int  row,col,n;
    printf("enter your desire number:");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
     for(row=n-1; row>=1; row--)
    {
        for(col=row; col>=1; col--)
        {
            printf("* ");
        }
        printf("\n");
    }
     for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
     for(row=n-1; row>=1; row--)
    {
        for(col=row; col>=1; col--)
        {
            printf("* ");
        }
        printf("\n");
    }

    getch();
    return 0;
}
