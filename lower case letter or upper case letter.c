#include<stdio.h>
#include<conio.h>
int main()
{
   char ch='F';
   if(ch>= 'a' && ch<='z'){
    printf("%c is lower case\n",ch);
   }
   if(ch>='A' && ch<='Z'){
    printf("%c is upper case\n",ch);
   }
    getch();
    return 0;
}
