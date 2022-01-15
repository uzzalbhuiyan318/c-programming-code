#include<stdio.h>
#include<conio.h>
    int even(int n)
    {
        int temp;
        if(n%2==0){
           temp=even;
        }
        else{
          temp=  odd;

        }
        return temp;
    }
int main()
{
    int n,number;
    printf("enter your number:");
    scanf("%d",&n);
    number=even(n);
    printf("the even number is %d",number);
    getch();
    return 0;
}
