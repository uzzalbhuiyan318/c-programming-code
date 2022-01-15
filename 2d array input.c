#include<stdio.h>
#include<conio.h>
int main()
{
    int A[3][3], B[3][3],temp[3][3];
    int col,row;
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("A[%d][%d]=",row,col);
            scanf("%d",&A[row][col]);
        }
        printf("\n");
    }
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("B[%d][%d]=",row,col);
            scanf("%d",&B[row][col]);
        }
        printf("\n");
    }

    printf("before A matrix =\n");

    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {

            printf("%d ",A[row][col]);
        }
        printf("\n");
    }
    printf("before B matrix =\n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {

            printf("%d ",B[row][col]);
        }
        printf("\n");
    }
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {

            temp[row][col]=A[row][col];
            A[row][col]=B[row][col];
            B[row][col]=temp[row][col];
        }

    }
    printf("after A matrix =\n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {

            printf("%d ",A[row][col]);

        }
        printf("\n");
    }
    printf("after B matrix =\n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {

            printf("%d ",B[row][col]);

        }
        printf("\n");
    }



    getch();
    return 0;
}
