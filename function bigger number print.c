#include<stdio.h>
#include<conio.h>
int maximum(int a,int b)
{
    int temp;
    if(a>b){
        temp=a;
    }
    else{
        temp=b;
    }
    return temp;
}
int main()
{
    int a,b,bigger;
        printf("enter your first number:");
        scanf("%d",&a);
        printf("enter your second number:");
        scanf("%d",&b);
        bigger=maximum(a,b);
        printf("the bigger number is %d\n",bigger);
  getch();
  return 0;
}
