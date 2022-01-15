#include<stdio.h>
#include<conio.h>
int main()
{
    int array1[3]={10,20,30},array2[3],i;
    printf("array1 :");
    for(i=0;i<3;i++){
        printf("%d ",array1[i]);
    }
    for(i=0;i<3;i++){
        array2[i]=array1[i];
    }
    printf("\narray2 :");
    for(i=0;i<3;i++){
        printf("%d ",array2[i]);
    }

    getch();
    return 0;
}
