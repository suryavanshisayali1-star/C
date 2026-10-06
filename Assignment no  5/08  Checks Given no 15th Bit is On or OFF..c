#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    printf("\nEnter Number = ");
    scanf("5d",&No);

    if(No>>2&14==1)
    {
        printf("\n**************");
    }
    else
    {
        printf("\n/////////////");
    }

getch();
return 0;
}
