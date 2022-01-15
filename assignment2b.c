//write a C program to find out the vowel and consonant and have to take a charecter from user
#include<stdio.h>
#include<conio.h>
int main()
{
    char charecter;
    printf("Please Press your charecter:\n");
    scanf("%c",&charecter);
    if(charecter>='a' && charecter<='z' || charecter>='A' && charecter<='Z')
    {
        if(charecter=='a'||charecter=='A'
                || charecter=='e'||charecter=='E'
                || charecter=='i'||charecter=='I'
                || charecter=='o'||charecter=='O'
                || charecter=='u'||charecter=='U')
        {
            printf("The charecter is vowel\n");
        }
        else
        {
            printf("The charecter is consonant\n");
        }

    }
    getch();
    return 0;
}
