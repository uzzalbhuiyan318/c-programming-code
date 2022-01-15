#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=40 && n<=100){
        printf("he is pass\n");
        if(n>=80 && n<=100){
            printf("And he gets A+");
        }
    }
    else
        printf("fail");
    getch();
    return 0;
}
