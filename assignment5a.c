//problem statement: 1/(2)^2 +1/(3)^2+............
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float n,i,sum=0;
    printf("enter your series number :");
    scanf("%f",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+1/pow(i+1,2);

    }
    printf("the summation of the series is %f",sum);
    getch();
    return 0;


}
