#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    printf("enter your pattern number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=10;j++){
            printf("%d x %d =%d\n",i,j,(i*j));
        }
        printf("\n");
    }
    getch();
    return 0;
}
