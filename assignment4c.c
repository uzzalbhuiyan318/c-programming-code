//problem statement:write hand pattern

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,sum=0;
    for(i=1;i<=5;i++){
        sum=0;
        {
            for(j=1;j<=i;j++){
                sum=sum+j;
                printf("%d\t",sum);
            }
            printf("\n");
        }
    }
    getch();
    return 0;
}
