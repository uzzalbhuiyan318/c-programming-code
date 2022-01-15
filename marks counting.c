#include<stdio.h>
#include<conio.h>
int main()
{
    int ft_marks,st_marks,final_marks;
    double total_marks;
    ft_marks=80;
    st_marks=74;
    final_marks=97;
    total_marks=ft_marks/4+st_marks/4+final_marks/2;
    printf("%.01lf\n",total_marks);
    getch();
    return 0;
}
