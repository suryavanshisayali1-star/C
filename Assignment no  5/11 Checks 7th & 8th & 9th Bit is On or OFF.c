#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    printf("\nEnter Number = ");
    scanf("%d",&No);

    if((No >> 6) & 1 && (No >> 7) & 1 && (No >> 8) & 1 )
    {
        printf("\All Bits Of %d is ON ",No);
    }
    else if((No >> 6)& 1 == 1 && (No >> 7) & 1 )
    {
        printf("\nOnly 7th & 8th Bit Of %d is ON ",No);
    }
    else if((No >> 6)& 1 == 1 && (No >> 8) & 1 )
    {
        printf("\nOnly 7th & 9th Bit Of %d is ON ",No);
    }
    else if((No >> 7)& 1 == 1 && (No >> 8) & 1)
    {
        printf("\nOnly 8th & 9th Bit Of  %d is ON ",No);
    }
    else if((No >> 6)& 1 == 1)
    {
        printf("\nOnly 7th Bit Of  %d is ON ",No);
    }
    else if((No >> 7)& 1 == 1 )
    {
        printf("\nOnly 8th Bit Of  %d is ON ",No);
    }
    else if((No >> 8)& 1 == 1 )
    {
        printf("\nOnly 9th Bit Of  %d is ON ",No);
    }
    else
    {
        printf("\nAll Bits Of %d is Off",No);
    }

getch();
return 0;
}
