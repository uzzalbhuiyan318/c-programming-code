#include<stdio.h>
#include<conio.h>
int main()
{
    char chr;
    printf("enter charecter=");
    scanf("%c",&chr);
    if(chr>='1'&&chr<='9'){
        printf("digit\n");
    }
    else{
        printf("not a digit\n");
    }
    getch();
    return 0;
}
