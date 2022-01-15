#include<stdio.h>
#include<conio.h>
int main()
{   /*'\0' means null charecter and null charecter means finisher
    and where null charecter stay that position understand it should
    stop the work*/
    char str[]={'B','a','n','g','l','d','e','s','h','\0'};
    //if i use str lenth ,i should not use null charecter

    printf("%s",str);
    getch();
    return 0;
}
