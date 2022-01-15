#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=5;i>=2;i--){
        for(j=i;j>=1;j--){
            printf("%d\t",i);
        }
        printf("\n");
    }
    getch();
    return 0;
}
