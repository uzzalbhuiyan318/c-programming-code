#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int row,col,rownumber,colnumber;
    printf("enter your row and colume number here:\n");
    scanf("%d  %d",&rownumber,&colnumber);
    printf("enter the element of a matrix :\n");
    for(row=0;row<rownumber;row++){
        for(col=0;col<colnumber;col++){
            printf("a[%d][%d]=",row,col);
            scanf("%d ",&a[row][col]);
        }
        printf("\n");
    }
}
