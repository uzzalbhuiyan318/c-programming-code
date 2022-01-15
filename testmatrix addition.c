#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int col,row,rowNumber,colNumber;
    printf("enter your row and colume number here:\n");
    scanf("%d %d ",&rowNumber,&colNumber);
    for(row=0;row<rowNumber;row++){
        for(col=0;col<colNumber;col++){
                printf("a[%d][%d]=",row,col);
            scanf("%d",&a[row][col]);
        }
        printf("\n");
    }
    for(row=0;row<rowNumber;row++){
        for(col=0;col<colNumber;col++){
                printf("%d ",a[row][col]);

        }
        printf("\n");
    }
    getch();
    return 0;
}
