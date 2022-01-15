#include<stdio.h>
#include<conio.h>
int main()
{
    double loan_amount,interest_rate,number_of_years,total_amount,monthly_amount;
    printf("enter the loan amount:");
    scanf("%lf",&loan_amount);
    printf("enter the rate of interest:");
    scanf("%lf",&interest_rate);
    printf("enter the number of years:");
    scanf("%lf",&number_of_years);
    total_amount=loan_amount+(loan_amount*interest_rate)/100.00;
    monthly_amount=total_amount/(number_of_years*12);
    printf("total amount=%.02lf\n",total_amount);
    printf("monthly amount=%.02lf\n",monthly_amount);
    getch();
    return 0;
}
