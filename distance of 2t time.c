#include<stdio.h>
#include<conio.h>
int main()
{
    double velocity,time,distance_of_two_t;
    printf("enter the velocity:");
    scanf("%lf",&velocity);
    printf("enter the time:");
    scanf("%lf",&time);
    distance_of_two_t=2*time*velocity;
    printf("distance of two t=%.02lf\n",distance_of_two_t);
    getch();
    return 0;

}
