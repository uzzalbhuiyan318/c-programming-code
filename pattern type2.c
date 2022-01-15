#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter your digit=");
    scanf("%d",&n);
    if(n%2==0){
        printf("the number is ever");
    }
    else{
        printf("the number is odd");
    }
    getch();
    return 0;
}
