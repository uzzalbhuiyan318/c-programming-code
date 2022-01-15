//problem statement:write a c program to find out the alphabet,digit or special charecter


#include<stdio.h>
#include<conio.h>
int main()
{
   char charecter;
   printf("enter your charecter\t");
   scanf("%c",&charecter);
   if ((charecter>='a' && charecter<='z') || (charecter>='A' && charecter<='Z')){
    printf("the charecter is an alphabet");
   }
   else if(charecter>='0' && charecter<='9'){
    printf("the charecter is digit");
   }
   else
    printf("the charecter is a special charecter");

    getch();
    return 0;
}
