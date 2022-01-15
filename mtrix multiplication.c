#include<stdio.h>
#include<conio.h>
int main ()
{
    int A[10][10],transpose[10][10],i,j,row,col;
    printf("enter number of row and column for the matrix :\n");
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("A[%d][%d]=",i,j);
            scanf("%d ",&A[i][j]);
        }
    }
}
