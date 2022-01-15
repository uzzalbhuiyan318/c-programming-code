#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    int total_marks[]={83,86,97,95,93,95,86,52,49,41,42,47,90,59,63,86,40,46,92,56,51,48,67,49,42,90,42,83,47,95,69,82,82,58,69,67,53,56,71,62};
    int marks_count[101];
    for(i=0;i<101;i++){
        marks_count[i]=0;
    }
    for(i=0;i<40;i++){
        marks_count[total_marks[i]]++;
    }
    for(i=50;i<=100;i++){
        printf("marks: %d count: %d\n",i,marks_count[i]);
    }
    getch();
    return 0;
    }

