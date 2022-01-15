#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int col,row,n_row,n_col;
    printf("enter your row and colum numbers:");
    scanf("%d %d",&n_row,&n_col);
    printf("enter your number for a matrix:\n");
    for(row=0;row<n_row;row++)
    {
        for(col=0; col<n_col; col++)
        {
            printf("a[%d][%d]=",row,col);
            scanf("%d ",&a[row][col]);
        }
        printf("\n");
    }
    printf("enter your numbers for b matrix:\n");
    for(row=0; row<n_row; row++)
    {
        for(col=0; col<n_col; col++)
        {
            printf("b[%d][%d]=",row,col);
            scanf("%d ",&b[n_row][n_col]);
        }
        printf("\n");
    }
    printf("a=");
    for(row=0; row<n_row; row++)
    {
        for(col=0; col<n_col; col++)
        {
            printf("\t");
            printf("%d ",a[n_row][n_col]);
        }
        printf("\n");

    }
     printf("\nb=");
    for(row=0; row<n_row; row++)
    {
        for(col=0; col<n_col; col++)
        {
            printf("\t");
            printf("%d ",b[n_row][n_col]);
        }
        printf("\n");

    }

    for(row=0; row<n_row; row++)
    {
        for(col=0; col<n_col; col++)
        {

           c[row][col]=a[row][col]+b[row][col];
        }


    }
      printf("\nc=");
    for(row=0; row<n_row; row++)
    {
        for(col=0; col<n_col; col++)
        {
            printf("\t");
            printf("%d ",c[n_row][n_col]);
        }
        printf("\n");

    }




}
