#include<stdio.h>
#include<conio.h>
int main()
{   //we can use only double cotation for using string
    char str[30];
    //[^\n] means new line paoyar ag porjonto print koro bole deya
    //scanf("%[^\n]",str);
    //scanf er poriborte input neyar jonno string a gets use kora jay nicher moto kore
    gets(str);
    //string er jonno kono ampersand sign deya lage na scanf a
    //printf("%s\n",str);
    //string er output er jonno printf er poriborte puts use kora jay nicher moto kore
    //puts(str);
    //gets er sathe puts and printf dutoi use kora jay nicher moto kore
    printf("%s\n",str);
    getch();
    return 0;
}


