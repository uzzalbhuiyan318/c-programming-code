#include<stdio.h>
#include<conio.h>
int main()
{
    int row,col;
    int a[3][4],b[3][4];
    printf("enter your desire number for a matrix:\n");
    for(row=0;row<3;row++){
        for(col=0;col<4;col++){
            printf("a[%d][%d]=",row,col);
            scanf("%d",&a[row][col]);
        }
        printf("\n");
    }
    printf("a=");
    for(row=0;row<3;row++){
        for(col=0;col<4;col++){
            printf("%d ",a[row][col]);
        }
        printf("\n");
    }
     printf("enter your desire number for b matrix:\n");
    for(row=0;row<3;row++){
        for(col=0;col<4;col++){
            printf("b[%d][%d]=",row,col);
            scanf("%d",&b[row][col]);
        }
        printf("\n");
    }
    printf("b=");
    for(row=0;row<3;row++){
        for(col=0;col<4;col++){
            printf("%d ",b[row][col]);
        }
        printf("\n");
    }


}
