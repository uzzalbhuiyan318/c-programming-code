#include<stdio.h>
#include<conio.h>
int main()
{
    int matrix[3][4]={{75,80,85,90},{95,98,70,75},{80,85,95,80}},a[4];
    int row,col;
    for(row=0;row<3;row++){
        for(col=0;col<4;col++){
            printf("%d ",matrix[row][col]);
        }
        printf("\n");
    }
    for(row=0;row<1;row++){
        for(col=0;col<4;col++){
            a[row]=matrix[0][1] +matrix[1][1]+matrix[2][1];
        }

    }
    {
        printf("%d ",a[row]);
    }
    printf("\n");


    getch();
    return 0;
}
