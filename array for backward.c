#include<stdio.h>
#include<conio.h>
int main()
{
    int ara[10]={100,90,80,70,60,50,40,30,20,10};
    int i;
    for(i=10;i>0;i--){
        printf("%d the element is : %d\n",i-1,ara[i]);
    }
    getch();
    return 0;
}
