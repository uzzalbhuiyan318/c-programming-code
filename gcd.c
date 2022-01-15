#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,t,x,gcd;
    printf("enter your first number:");
    scanf("%d",&a);
    printf("enter your second number:");
    scanf("%d",&b);
    if(a==0){
        gcd=a;
    }
    else if(b==0){
        gcd=b;
    }
    else{
        while(b!=0){
            t=b;
            b=a%b;
            a=t;
        }
        gcd=a;
    }
    printf("GCD is %d\n",gcd);
    getch();
    return 0;
}
