#include<stdio.h>
#include<conio.h>
int main()
{   //we can use only double cotation for using string
    char str[30];
    //[^\n] means new line paoyar ag porjonto print koro bole deya
    scanf("%[^\n]",str);
    //string er jonno kono ampersand sign deya lage na scanf a
    printf("%s\n",str);
    getch();
    return 0;
}

