#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c,n;
    printf("enter your permuted number:");
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        for(b=1;b<=n ;b++){
               if(b !=a){
                for(c=1;c<=n;c++){
                    if(c !=b && c !=a){
                        printf("%d, %d, %d\n",a,b,c);
                    }
                }
               }
        }
    }
    getch();
    return 0;
}
