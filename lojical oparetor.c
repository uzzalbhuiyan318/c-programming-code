#include<stdio.h>
#include<conio.h>
int main()
{
    int vagfol,vajjo,vajok,vagses,obosisto;
    scanf("%d%d",&vajjo,&vajok);
    vagfol=vajjo/vajok;
    obosisto=vagfol*vajok;
    vagses=vajjo-obosisto;
    printf("vagses =%d",vagses);

    getch();
    return 0;
}
