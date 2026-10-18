#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    printf("\nEnter Number = ");
    scanf("%d",&No);

    if((No >> 4) & 1 && (No >> 17) & 1)
    {
        printf("\Both Bits Of %d is ON ",No);
    }
    else if((No >> 4)& 1 == 1)
    {
        printf("\nOnly 5th Bit Of  %d is ON ",No);
    }
    else if((No >> 17)& 1 == 1)
    {
        printf("\nOnly 18th Bit Of  %d is ON ",No);
    }
    else
    {
        printf("\nBoth Bits Of %d is Off",No);
    }

getch();
return 0;
}
