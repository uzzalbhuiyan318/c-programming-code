#include<stdio.h>
#include<conio.h>
int main()
{
    int n,RED;
    clrscr();
    textcolor(RED);
    cprintf("konta bisoyta apni jante chan?\n");
    printf("corona virus er voyabohota jante 1 chapun \n");
    printf("corona virus a akranto manuser biboron janar jonno 2 chapun \n");
    printf("enter 3 for knowing the number of dead of corona virus in the world\n");
    printf("enter 4 for corona situation of bangladesh");
    printf("enter 5 for  ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("corona virus is a very dangerous for human being ");
        break;
    default :
        ("the input is wrong");
    }

    getch();
    return 0;

}
