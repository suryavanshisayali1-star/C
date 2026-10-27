#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0;

    printf("\n Enter a Number => ");
    scanf("%d",&No1);

    printf("\n Enter a Number For Position => ");
    scanf("%d",&No2);

    if(No1 >> (No2 - 1) & 1)
        printf("\n TRUE");

    else
        printf("\n FALSE");

    getch();
    return 0;
}
