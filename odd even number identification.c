#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter n=");
    scanf("%d",&n);
    if(n%2==0){
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }

    getch();
    return 0;

}
