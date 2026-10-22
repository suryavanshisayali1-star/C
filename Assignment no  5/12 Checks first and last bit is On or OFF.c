#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    printf("\nEnter Number = ");
    scanf("%d",&No);

    if((No >> 0) & 1 && (No >> 31) & 1)
    {
        printf("\nBoth Bits Of %d is ON",No);
    }
    else if((No >> 0) & 1)
    {
        printf("\All Bits Of %d is ON ",No);
    }
    else if((No >> 31) & 1)
    {
        printf("\nAll Bits Of %d is ON",No);
    }
    else
    {
        printf("\nBoth Bits Of %d is Off",No);
    }
getch();
return 0;
}
